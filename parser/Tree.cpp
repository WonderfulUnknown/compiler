#include <iostream>
#include "Tree.h"
#include<fstream>

using namespace std;

// ParseTree *tree = new ParseTree;
ParseTree tree;
// char *token;
string token;

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
		node->lineno = tree.all_line;
	}

	print_node(node);
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
		node->lineno = tree.all_line;
		//node->data_type = Void;
	}

	print_node(node);
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

void TreeNode::print_node(TreeNode *node)
{
	ofstream fout("output.txt");
	fout.setf(ios_base::left);//左对齐

	fout.width(3);
	fout << node->node_num << ": ";

	if (node->node_type == stmt)
	{
		fout.width(40);

		//string names[8] = { "if_stmt","while_stmt","for_stmt","comp_stmt","input_stmt","output_stmt","var_dec","exp_stmt" };
		//fout.width(40);
		//fout << names[p->nodekind_kind];
		fout << node->type.stmt_type;
		if (node->type.stmt_type == type_spe)
			fout << node->attr.data_type;
	}
	else
	{
		fout.width(20);
		fout << node->type.exp_type;
		fout.width(10);
		switch (node->type.exp_type)
		{
		case oper:
			fout << "op: " << node->attr.op;
			break;
		case number:
			fout << "value: " << node->attr.value;
			break;
		case id:
			/*for (int i = 0; i < sizeof(node->attr.name); i++)
				fout << "symbol: " << node->attr.name[i];*/
			//fout << "symbol: " << node->attr.name;
			fout << node->address;
			break;
		}
	}

	////可能需要考虑idlist的输出

	fout << "Children:";
	for (int i = 0; i < MAXCHILDREN; i++)
	{
		if (node->child[i] == NULL)
			continue;
		else
		{
			fout << node->child[i]->node_num << " ";
		}
		fout << endl;
	}
	fout.close();
}
