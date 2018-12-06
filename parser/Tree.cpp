#include <iostream>
#include "Tree.h"
#include <fstream>
#include "myparser.h"

using namespace std;

ParseTree tree;
string token;

char stmt_type[7][15] = { "type_spe","asgn_stmt","dec_stmt","if_stmt",	"while_stmt","for_stmt","com_stmt" };
char data_type[6][20] = { "integer", "double", "float","char","bool","void" };
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
	cout << node->node_num << " ";
}

void ParseTree::print_node(TreeNode *node)
{
	//先输出兄弟节点
	//if (node->brother)
	//	print_node(node->brother);

	cout.setf(ios_base::left);//左对齐
	node->node_num = tree.all_node++;
	cout.width(2);
	cout << node->node_num;
	cout << ": ";

	if (node->node_type == stmt)
	{
		cout.width(15);
		cout << stmt_type[node->type.stmt_type];
		cout.width(15);
		if (node->type.stmt_type == type_spe)
			cout << data_type[node->attr.data_type - INT];
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
	cout << "Children:";
	for (int i = 0; i < MAXCHILDREN; i++)
	{
		if (node->child[i])
			print_child(node->child[i]);
	}

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

void ParseTree::check_node(TreeNode *node)
{
	switch (node->node_type)
	{
	case exps:
		switch (node->type.exp_type)
		{
		case oper:
			if ((node->child[0]->attr.data_type != INT) || (node->child[1]->attr.data_type != INT))
				//write_error(t, "Op applied to non-integer");

			if ((node->attr.op == EQ) || (node->attr.op == LT))
				node->attr.data_type = BOOL;
			else
				node->attr.data_type = INT;
			break;
		//case ConstK:
		case number:
		case id:
			node->attr.data_type = INT;
			break; 
		default:
			break;
		}
		break;
	case stmt:
		switch (node->type.stmt_type)
		{
		case if_stmt:
			if (node->child[0]->attr.data_type != BOOL)
				write_error(node->child[0], "if_stmt test is not Boolean");
			break;
		case asgn_stmt:
			if (node->child[0]->attr.data_type != INT)
				write_error(node->child[0], "asgn_stmt of non-integer value");`
			break;
		case for_stmt:
			if (node->child[0]->attr.data_type != INT)
				write_error(node->child[0], "for_stmt of non-integer value");
			break;
		case while_stmt:
			if (node->child[1]->attr.data_type != BOOL)
				write_error(node->child[1], "while_stmt test is not Boolean");
			break;
		default:
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

}