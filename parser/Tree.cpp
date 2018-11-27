#include <iostream>
#include "Tree.h"
#include<fstream>

using namespace std;

ParseTree tree;
string token;

char stmt_type[6][15] = { "type_spe","asgn_stmt","dec_stmt","if_stmt",	"while_stmt","for_stmt" };
char data_type[6][20] = { "integer", "double", "float","char","bool","void" };
char exp_type[3][10] = { "op","number","id" }; 
char op[25][3] = { "+", "-", "*", "/", "%", "++", "--" ,"&" ,"|" , "^", "~", "<<", ">>", "==", ">", "<",  ">=", "<=", "!=", "&&" ,"||", "!" };

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
		node->node_num = tree.all_node++;
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
		node->node_num = tree.all_node++;
		//node->data_type = Void;
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

//void ParseTree::print_node(TreeNode *node)
//{
//	ofstream cout("output.txt");
//	cout.setf(ios_base::left);//左对齐
//
//	cout.width(3);
//	cout << node->node_num << ": ";
//
//	if (node->node_type == stmt)
//	{
//		cout.width(40);
//
//		//string names[8] = { "if_stmt","while_stmt","for_stmt","comp_stmt","input_stmt","output_stmt","var_dec","exp_stmt" };
//		//cout.width(40);
//		//cout << names[p->nodekind_kind];
//		cout << node->type.stmt_type;
//		if (node->type.stmt_type == type_spe)
//			cout << node->attr.data_type;
//	}
//	else
//	{
//		cout.width(20);
//		cout << node->type.exp_type;
//		cout.width(10);
//		switch (node->type.exp_type)
//		{
//		case oper:
//			cout << "op: " << node->attr.op;
//			break;
//		case number:
//			cout << "value: " << node->attr.value;
//			break;
//		case id:
//			for (int i = 0; i < sizeof(node->attr.name); i++)
//				cout << "symbol: " << node->attr.name[i];
//			//cout << "symbol: " << node->attr.name;
//			//cout << node->address;
//			break;
//		}
//	}
//
//	////可能需要考虑idlist的输出
//
//	cout << "Children:";
//	for (int i = 0; i < MAXCHILDREN; i++)
//	{
//		if (node->child[i] == NULL)
//			break;
//		else
//		{
//			cout << node->child[i]->node_num << " ";
//		}
//		cout << endl;
//	}
//	cout.close();
//}
void ParseTree::print_child(TreeNode *node)
{
	if (node->brother)
		print_child(node->brother);
	cout << node->node_num << " ";
}

void ParseTree::print_node(TreeNode *node)
{
	//多个id输出
	if (node->brother)
		print_node(node->brother);

	cout.setf(ios_base::left);//左对齐

	cout.width(2);
	cout << node->node_num;
	cout << ": ";

	if (node->node_type == stmt)
	{
		cout.width(15);
		cout << stmt_type[node->type.stmt_type];
		cout.width(15);
		if (node->type.stmt_type == type_spe)
			cout << data_type[node->attr.data_type - 257];//define INT 257
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
			cout<< op[node->attr.op -263];//defin PLUS 263
			//cout << node->attr.op;
			break;
		case number:
			cout << "value:";
			cout.width(7);
			cout << node->attr.value;
			break;
		case id:
			cout << "symbol:";
			cout.width(7);
			cout<<node->attr.name;
			break;
		}
	}
	cout << "Children:";
	for (int i = 0; i < MAXCHILDREN; i++)
	{
		if (node->child[i])
			print_child(node->child[i]);
	}

	cout << endl;
}
//后序遍历把整棵树写到文件中
//调用print_tree(tree.root);
void ParseTree::print_tree(TreeNode *node)
{
	if (node != NULL)
	{
		for (int i = 0; i < MAXCHILDREN; i++)
		{
			if (node->child[i])
				print_tree(node->child[i]);
		}
		print_node(node);
	}
}