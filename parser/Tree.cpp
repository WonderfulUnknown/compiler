#include <iostream>
#include "Tree.h"

using namespace std;

Symbol_table table;

TreeNode * TreeNode::stmt_node(StmtType type)
{
	TreeNode *node = new TreeNode;
	if (!node)
		cout << "Out of memory error at line" << ++table.all_line;
	else
	{
		for (int i = 0; i < MAXCHILDREN; i++)
			node->child[i] = NULL;
		node->brother = NULL;

		node->node_type = stmt;
		node->type.stmt_type = type;
		node->lineno = table.all_line;
	}
	return node;
}

TreeNode * TreeNode::exp_node(ExpType type)
{
	TreeNode *node = new TreeNode;
	if (!node)
		cout << "Out of memory error at line" << ++table.all_line;
	else {
		for (int i = 0; i < MAXCHILDREN; i++) 
			node->child[i] = NULL;
		node->brother = NULL;

		node->node_type = exps;
		node->type.exp_type = type;
		node->lineno = table.all_line;
		node->data_type = Void;
	}
	return node;
}

//TreeNode * TreeNode::simple_exp(void)
//{
//	TreeNode * t = term();
//	while ((token == PLUS) || (token == MINUS))
//	{
//		TreeNode * p = newexpNode(OpK);
//		if (p != NULL) {
//			p->child[0] = t;
//			p->attr.op = token;
//			t = p;
//			match(token);
//			node->child[1] = term();
//		}
//	}
//	return node;
//}

//TreeNode * TreeNode::if_stmt(void)
//{
//	TreeNode * t = newStmtNode(IfK);
//	match(IF);
//	if (t != NULL) node->child[0] = exp();
//	match(THEN);
//	if (t != NULL) node->child[1] = stmt_sequence();
//	if (token == ELSE) {
//		match(ELSE);
//		if (t != NULL) node->child[2] = stmt_sequence();
//	}
//	match(END);
//	return node;
//}

//遍历符号表，如果id在其中就得到id的位置，不在就填入
int Symbol_table::search_table(char *id)
{
	Symbol_table table;
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
