#include <iostream>
#include "Tree.h"
#include<fstream>

using namespace std;

ParseTree tree;
string token;
//int count = 0;

char stmt_type[7][15] = { "type_spe","asgn_stmt","dec_stmt","if_stmt",	"while_stmt","for_stmt","com_stmt" };
char data_type[6][20] = { "integer", "double", "float","char","bool","void" };
char exp_type[3][15] = { "expr","const","ID" };
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
		//node->node_num = tree.all_node++;
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

//�������ű����id�����о͵õ�id��λ�ã����ھ�����
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
		strcpy_s(tree.symbol_table[i], strlen(id) + 1, id); //���鳤�Ȳ���1����,"\0"
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
	//������ֵܽڵ�
	//if (node->brother)
	//	print_node(node->brother);

	cout.setf(ios_base::left);//�����
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
			cout << data_type[node->attr.data_type - 257];//define INT 257
		else
			cout << " ";//Ϊ������
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
			cout << op[node->attr.op - 263];//defin PLUS 263
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
//����������������
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