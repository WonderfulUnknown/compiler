#include <iostream>
#include "Tree.h"
#include <fstream>
#include "myparser.h"

using namespace std;

ParseTree tree;

char stmt_type[9][15] = { "type_spe","asgn_stmt","dec_stmt","if_stmt","while_stmt","for_stmt","com_stmt","input_stmt","output_stmt"};
char data_type[7][20] = { "integer", "double", "float","char","bool","void", " ERROR " };
char exp_type[3][15] = { "expr","const","ID" };
char Op[25][3] = { "+", "-", "*", "/", "%", "++", "--" ,"&" ,"|" , "^", "~", "<<", ">>", "==", ">", "<",  ">=", "<=", "!=", "&&" ,"||", "!" };

TreeNode * TreeNode::stmt_node(StmtType type)
{
	TreeNode *node = new TreeNode;
	if (!node)
		cout << "Out of memory error at line" << ++tree.all_line;
	else
	{
		for (int i = 0; i < MAXCHILDREN; i++)
			node->child[i] = NULL;
		node->brother = NULL;

		node->node_type = stmt;
		node->type.stmt_type = type;
		node->lineno = ++tree.all_line;
		node->data_type = VOID;
		//node->node_num = tree.all_node++;//在输出的时候赋值顺序正确
	}

	return node;
}

TreeNode * TreeNode::exp_node(ExpType type)
{
	TreeNode *node = new TreeNode;
	if (!node)
		cout << "Out of memory error at line" << ++tree.all_line;
	else
	{
		for (int i = 0; i < MAXCHILDREN; i++)
			node->child[i] = NULL;
		node->brother = NULL;

		node->node_type = exps;
		node->type.exp_type = type;
		node->lineno = ++tree.all_line;
		//node->node_num = tree.all_node++;
	}

	return node;
}

//遍历符号表，如果id在其中就得到id的位置，不在就填入
int ParseTree::search_table(char *id)
{
	int i = 0;
	for (; i < tree.table_number; i++)
	{
		if (strcmp(tree.symbol_table[i], id) == 0)
			break;
	}
	if (i >= tree.table_number)
	{
		strcpy_s(tree.symbol_table[i], strlen(id) + 1, id); //数组长度不加1报错,"\0"
		tree.table_number++;
	}
	return i;
}

void ParseTree::print_child(TreeNode *node)
{
	if (node->brother)
		print_child(node->brother);
	cout.width(2);
	cout << node->node_num << " ";
}

void ParseTree::print_node(TreeNode *node)
{
	//先输出兄弟节点
	//if (node->brother)
	//	print_node(node->brother);

	cout.setf(ios_base::left);//左对齐
	node->node_num = tree.all_node++;

	check_node(node);

	cout.width(2);
	cout << node->node_num;
	cout << ": ";

	if (node->node_type == stmt)
	{
		cout.width(15);
		cout << stmt_type[node->type.stmt_type];
		cout.width(15);
		if (node->type.stmt_type == type_spe)
			cout << data_type[node->data_type - INT];
		else
			cout << " ";//为了整齐
	}
	else
	{
		cout.width(15);
		cout << exp_type[node->type.exp_type];
		cout.width(8);
		switch (node->type.exp_type)
		{
		case oper:
			cout << "op:";
			cout.width(7);
			cout << Op[node->attr.op - PLUS];
			break;
		case number:
			cout << "value:";
			cout.width(7);
			cout << node->attr.value;
			break;
		case id:
			cout << "symbol:";
			cout.width(7);
			cout << node->attr.name;
			break;
		}
	}

	cout << "type: ";
	cout.width(15);
	cout << data_type[node->data_type - INT];

	cout << "Children:";
	for (int i = 0; i < MAXCHILDREN; i++)
	{
		if (node->child[i])
			print_child(node->child[i]);
	}

	//cout << "lineno:"<<node->lineno;//行号计算有问题
	cout << endl;
}

//后序遍历输出整棵树
void ParseTree::print_tree(TreeNode *node)
{
	if (node != NULL)
	{
		if (node->brother)
			print_tree(node->brother);
		for (int i = 0; i < MAXCHILDREN; i++)
		{
			if (node->child[i])
				print_tree(node->child[i]);
		}
		print_node(node);
	}
}

//尝试一次后序遍历实现检查和输出
void ParseTree::check_idtype(TreeNode *node)
{
	TreeNode *temp;
	int addr;
	if (node != NULL)
	{
		if (node->type.stmt_type == dec_stmt)
		{
			temp = node->child[1];
			while (temp)
			{
				temp->data_type = node->child[0]->data_type;
				
				addr = search_table(temp->attr.name);
				id_type[addr] = temp->data_type;

				temp = temp->brother;
			}
		}
		//id的类型值从id_type中获取
		if (node->type.exp_type == id)
		{
			addr = search_table(node->attr.name);
			node->data_type = id_type[addr];
		}
		if (node->brother)
			check_idtype(node->brother);
		for (int i = 0; i < MAXCHILDREN; i++)
		{
			if (node->child[i])
				check_idtype(node->child[i]);
		}
	}
}

//类型检查
void ParseTree::check_node(TreeNode *node)
{
	switch (node->node_type)
	{
	case exps:
		switch (node->type.exp_type)
		{
		case oper:
			if ((node->child[0]->data_type != INT) || (node->child[1]->data_type != INT))
			{
				write_error(node, "Op applied to non-integer");
				break;
			}
			if ((node->attr.op == EQ) || (node->attr.op == LT))
				node->data_type = BOOL;
			else
				node->data_type = INT;
			break;
		case number:
		//case id:
			node->data_type = INT;
			break; 
		default:
			break;
		}
		break;
	case stmt:
		switch (node->type.stmt_type)
		{
		case type_spe:
			//if (node->data_type != INT)
				//write_error(node, "type_spe of non-integer value");
			break;
		case if_stmt:
			if (node->child[0]->data_type != BOOL)
				write_error(node->child[0], "if_stmt test is not Boolean");
			else
				node->data_type = node->child[0]->data_type;
			break;
		case asgn_stmt:
			if (node->child[0]->data_type != node->child[1]->data_type)
				write_error(node, "asgn_stmt of different type");
			else
				node->data_type = node->child[0]->data_type;
			break;
		case dec_stmt:
			if (node->child[0]->data_type != INT)
				write_error(node, "dec_stmt of non-integer value");
			else
				node->data_type = node->child[0]->data_type;
			break;
		case for_stmt:
			if (node->child[0]->data_type != INT)
				write_error(node->child[0], "for_stmt of non-integer value");
			else
				node->data_type = node->child[0]->data_type;
			break;
		case while_stmt:
			if (node->child[1]->data_type != BOOL)
				write_error(node->child[1], "while_stmt test is not Boolean");
			else
				node->data_type = node->child[0]->data_type;
			break;
		default:
			node->data_type = VOID;
			break;
		}
		break;
	default:
		break;
	}
}

//打开文件，输出错误
void ParseTree::write_error(TreeNode *node, char error[])
{
	node->data_type = INT + 6;

	ofstream fout("error.txt", ios::app);
	if (!fout)
		return;

	fout.setf(ios_base::left);//左对齐
	//fout.width(3);
	//fout << tree.all_line;
	fout.width(3);
	fout << node->node_num;
	fout.width(20);
	fout << error;
	fout << endl;

	fout.close();
}

//打开文件，输出汇编代码头部
void ParseTree::gen_header()
{
	ofstream fout("code.txt", ios::app);
	if (!fout)
		return;
	fout << ".586" << endl;
	fout << "\t .model flat, stdcall" << endl;
	fout << "\t option casemap :none" << endl;
	fout << endl;
	fout << "\t include \\masm32\\include\\windows.inc" << endl;
	fout << "\t include \\masm32\\include\\user32.inc" << endl;
	fout << "\t include \\masm32\\include\\kernel32.inc" << endl;
	fout << "\t include \\masm32\\include\\masm32.inc" << endl;
	fout << endl;
	fout << "\t includelib \\masm32\\lib\\user32.lib" << endl;
	fout << "\t includelib \\masm32\\lib\\kernel32.lib" << endl;
	fout << "\t includelib \\masm32\\lib\\masm32.lib" << endl;
	
	fout.close();
}

//输出dec语句汇编代码
void ParseTree::gen_dec(TreeNode *node)
{
	ofstream fout("code.txt", ios::app);
	if (!fout)
		return;
	fout << endl << endl << "\t .data" << endl;

	while(node->type.stmt_type == dec_stmt)
	{
		TreeNode *p = node->child[1];
		while (p)
		{
			fout << "\t\t _" << symbol_table[p->address];
			if (p->data_type == INT)
				fout << " DWORD 0" << endl;
			else if (p->data_type == CHAR)
				fout << "BYTE 0" << endl;
			p = p->brother;
		}

		for (int i = 0; i < temp_num; i++)
			fout << "\t\t t" << i << " DWORD 0" << endl;

		fout << "\t\t buffer BYTE 128 dup(0)" << endl;
		fout << "\t\t LF BYTE 13, 10, 0" << endl;

		node = node->brother;
	}
}

//输出表达式汇编代码
void ParseTree::gen_expcode(TreeNode *node)
{
	//Node *e1 = node->children[0];
	//Node *e2 = node->children[1];
	//switch (node->attr.op)
	//{
	//case PLUS:
	//	out << "\tMOV eax, ";
	//	if (e1->kind_kind == ID_EXPR)
	//		out << "_" << symtbl.getname(e1->attr.symtbl_seq);
	//	else if (e1->kind_kind == CONST_EXPR)
	//		out << e1->attr.vali;
	//	else out << "t" << e1->temp_var;
	//	out << endl;
	//	out << "\tADD eax, ";

	//	if (e2->kind_kind == ID_EXPR)
	//		out << "_" << symtbl.getname(e2->attr.symtbl_seq);
	//	else if (e2->kind_kind == CONST_EXPR)
	//		out << e2->attr.vali;
	//	else out << "t" << e2->temp_var;
	//	out << endl;
	//	out << "\tMOV t" << node->temp_var << ", eax" << endl;
	//	break;
	//case LT:
	//	out << "\tMOV eax, ";
	//	if (e1->kind_kind == ID_EXPR)
	//		out << "_" << symtbl.getname(e1->attr.symtbl_seq);
	//	else if (e1->kind_kind == CONST_EXPR)
	//		out << e1->attr.vali;
	//	else out << "t" << e1->temp_var;
	//	out << endl;
	//	out << "\tCMP eax, ";
	//	if (e2->kind_kind == ID_EXPR)
	//		out << "_" << symtbl.getname(e2->attr.symtbl_seq);
	//	else if (e2->kind_kind == CONST_EXPR)
	//		out << e2->attr.vali;
	//	else out << "t" << e2->temp_var;
	//	out << endl;
	//	out << "\tjl " << node->label.true_label << endl;
	//	out << "\tjmp " << node->label.false_label << endl;
	//	break;
	//}
}