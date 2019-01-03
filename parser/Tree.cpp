#include <iostream>
#include "Tree.h"
#include <fstream>
#include "myparser.h"

using namespace std;

ParseTree tree;

char stmt_type[9][15] = { "type_spe","asgn_stmt","dec_stmt","if_stmt","while_stmt","for_stmt","com_stmt","input_stmt","output_stmt" };
char data_type[7][20] = { "integer", "double", "float","char","bool","void", " ERROR " };
char exp_type[3][15] = { "expr","const","ID" };
char Op[25][3] = { "+", "-", "*", "/", "%", "++", "--" ,"&" ,"|" , "^", "~", "<<", ">>", "==", ">", "<",  ">=", "<=", "!=", "&&" ,"||", "!" };

TreeNode * TreeNode::stmt_node(StmtType type)
{
	TreeNode *node = new TreeNode;
	if (!node)
		cout << "Out of memory error at line" << tree.all_line;
	else
	{
		for (int i = 0; i < MAXCHILDREN; i++)
			node->child[i] = NULL;
		node->brother = NULL;

		node->node_type = stmt;
		node->type.stmt_type = type;
		//node->lineno = ++tree.all_line;
		node->data_type = VOID;
		node->label.curr_label = "";
		//node->node_num = tree.all_node++;//在输出的时候赋值
	}

	return node;
}

TreeNode * TreeNode::exp_node(ExpType type)
{
	TreeNode *node = new TreeNode;
	if (!node)
		cout << "Out of memory error at line" << tree.all_line;
	else
	{
		for (int i = 0; i < MAXCHILDREN; i++)
			node->child[i] = NULL;
		node->brother = NULL;

		node->node_type = exps;
		node->type.exp_type = type;
		//node->lineno = ++tree.all_line;
		node->label.curr_label = "";
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

//后序遍历
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
		gen_code(node);
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

	fout << endl << "\t .data" << endl;
	fout.close();
}

//输出dec语句汇编代码
void ParseTree::gen_dec(TreeNode *node)
{
	ofstream fout("code.txt", ios::app);
	if (!fout)
		return;
	TreeNode *p;
	node = node->child[0];
	while (1)
	{
		if (node->type.stmt_type == dec_stmt)
		{
			p = node->child[1];
			while (p)
			{
				fout << "\t\t _" << symbol_table[p->address];
				if (p->data_type == INT)
					fout << " DWORD 0" << endl;
				else if (p->data_type == CHAR)
					fout << " BYTE 0" << endl;
				p = p->brother;
			}
		}
		node = node->brother;
		if (!node)
			break;
	}
	for (int i = 0; i < temp_sum; i++)
		fout << "\t\t t" << i << " DWORD 0" << endl;
	fout << "\t\t buffer BYTE 128 dup(0)" << endl;
	fout << "\t\t LF BYTE 13, 10, 0" << endl;
	fout << endl;
	fout << "\t.code" << endl;
	fout << "start:" << endl;
	fout.close();
}

//输出表达式汇编代码
void ParseTree::gen_expcode(TreeNode *node)
{
	ofstream fout("code.txt", ios::app);
	if (!fout)
		return;
	if (node->label.curr_label != "")
		fout << node->label.curr_label << ":" << endl;
	TreeNode *t1 = node->child[0];
	TreeNode *t2 = node->child[1];
	switch (node->attr.op)
	{
	case PLUS:
		fout << "\tMOV eax, ";
		if (t1->type.exp_type == id)
			fout << "_" << symbol_table[t1->address];
		else if (t1->type.exp_type == number)
			fout << t1->attr.value;
		else
			fout << "t" << t1->temp_num;
		fout << endl;

		fout << "\tADD eax, ";
		if (t2->type.exp_type == id)
			fout << "_" << symbol_table[t2->address];
		else if (t2->type.exp_type == number)
			fout << t2->attr.value;
		else fout << "t" << t2->temp_num;
		fout << endl;
		fout << "\tMOV t" << node->temp_num << ", eax" << endl;
		break;
	case LT://小于
		fout << "\tMOV eax, ";
		if (t1->type.exp_type == id)
			fout << "_" << symbol_table[t1->address];
		else if (t1->type.exp_type == number)
			fout << t1->attr.value;
		else fout << "t" << t1->temp_num;
		fout << endl;
		fout << "\tCMP eax, ";
		if (t2->type.exp_type == id)
			fout << "_" << symbol_table[t2->address];
		else if (t2->type.exp_type == number)
			fout << t2->attr.value;
		else fout << "t" << t2->temp_num;
		fout << endl;
		fout << "\tjl " << node->label.true_label << endl;
		fout << "\tjmp " << node->label.false_label << endl;
		break;
	//case 
	}
	fout.close();
}

//输出语句汇编代码
void ParseTree::gen_stmtcode(TreeNode *node)
{
	ofstream fout("code.txt", ios::app);
	if (!fout)
		return;

	//检查当前结点是否会是跳转的位置
	if (node->label.curr_label != "")
		fout << node->label.curr_label << ":" << endl;
	TreeNode *temp;
	switch (node->type.stmt_type)
	{
	case com_stmt:
		temp = node->child[0];
		while (temp)
		{
			gen_code(temp);
			temp = temp->brother;
		}
		break;
	case while_stmt:
		gen_code(node->child[0]);
		gen_code(node->child[1]);
		fout << "\tjmp " << node->label.begin_label << endl;
		break;
	case asgn_stmt:
		temp = node->child[1];
		fout << "\tMOV eax, ";
		if (temp->type.exp_type == id)
			fout << "_" << symbol_table[temp->address];
		else if (temp->type.exp_type == number)
			fout << temp->attr.value;
		else
			fout << "t" << temp->temp_num;
		fout << endl;
		fout << "\tMOV t" << node->child[0]->temp_num << ", eax" << endl;
		fout << endl;
		break;
	case input_stmt:
		if (node->child[0]->data_type == INT)
			fout << "\tinvoke crt_scanf ,addr szd,addr _";
		else if (node->child[0]->data_type == CHAR)
			fout << "\tinvoke crt_scanf ,addr szc,addr _";
		fout << node->child[0]->attr.name << endl;
		break;
	case output_stmt:
		fout << "\tMOV eax,";
		if (node->child[0]->type.exp_type == id)
			fout << "_" << node->child[0]->attr.name << endl;
		else if (node->child[0]->type.exp_type == number)
			fout << node->child[0]->attr.value << endl;
		if (node->child[0]->data_type == INT)
			fout << "\tinvoke crt_printf ,addr szd,eax" << endl;
		if (node->child[0]->data_type == CHAR)
			fout << "\tinvoke crt_printf ,addr szc,eax" << endl;
		break;
	default:
		break;
	}
	fout.close();
}

void ParseTree::gen_code(TreeNode *node)
{
	if (node->node_type == stmt)
		gen_stmtcode(node);
	else if (node->node_type == exps)// && (node->attr.op == OP_EXPR || node->kind_kind == NOT_EXPR))
		gen_expcode(node);
}
