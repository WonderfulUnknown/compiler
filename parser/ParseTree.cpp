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

void Parse_tree::set_node(int stmt_type,int op_type,int value,char symbol,int address)
{
	Tree_node *node = new Tree_node;

	node->stmt_type = stmt_type;
	node->op_type = op_type;
	node->value = value;
	node->symbol = symbol;
	node->address = address;

	tree.node_count++;
	node->node_num = tree.node_count;
}

// string get_name(int address)
// {
// 	return table.symbol[address];
// }

// void Tree_node::add_child(struct Tree_node *parent,struct Tree_node *child)
// {
// 	parent.first_child = child;
// }

//到了用的时候再实现
void Tree_node::search_child(struct Tree_node *parent)
{

}