#include <iostream>
#include "ParseTree.h"
#include <string.h>
using namespace std;

Parse_tree tree;
Symbol_table table;

//遍历符号表，如果id在其中就得到id的位置，不在就填入
int Symbol_table::search_table(char *id)
{
	int i = 0;
	for (; i < table.number; i++)
	{
		if (strcmp(table.symbol[i], id) == 0)
			break;
	}
	if (i >= table.number)
	{
		strcpy_s(table.symbol[i], strlen(id) + 1, id); //数组长度不加1报错,"\0"
		table.number++;
	}
	return i;
}

void Parse_tree::set_node(int type, Node_attr attr, struct Tree_node[])
{
	Tree_node *node = new Tree_node;

	node->stmt_type = type;
	node->attr = attr;
	node->child_num = sizeof(Tree_node);
	//node->child[] = Tree_node[];//给孩子节点赋值
	//tree->node_num++;
}