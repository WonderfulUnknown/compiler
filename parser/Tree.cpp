#include "Tree.h"
//可能需要添加addree的赋值
TreeNode * stmt_node(StmtKind kind)
{
  TreeNode * t = (TreeNode *) malloc(sizeof(TreeNode));
  int i;
  if (t==NULL)
    fprintf(listing,"Out of memory error at line %d\n",lineno);
  else {
    for (i=0;i<MAXCHILDREN;i++) t->child[i] = NULL;
    t->sibling = NULL;
    t->nodekind = StmtK;
    t->kind.stmt = kind;
    t->lineno = lineno;
  }
  return t;
}
TreeNode * exp_node(ExpKind kind)
{
  TreeNode * t = (TreeNode *) malloc(sizeof(TreeNode));
  int i;
  if (t==NULL)
    fprintf(listing,"Out of memory error at line %d\n",lineno);
  else {
    for (i=0;i<MAXCHILDREN;i++) t->child[i] = NULL;
    t->sibling = NULL;
    t->nodekind = ExpK;
    t->kind.exp = kind;
    t->lineno = lineno;
    t->type = Void;
  }
  return t;
}
//可能不需要这个函数
TreeNode * simple_exp(void)
{
  TreeNode * t = term();
  while ((token==PLUS) || (token==MINUS))
  {
	TreeNode * p = newExpNode(OpK);
     if (p!=NULL) {
      p->child[0] = t;
      p->attr.op = token;
      t = p;
      match(token);
      t->child[1] = term();
    }
  }
  return t;
}
TreeNode * if_stmt(void)
{
  TreeNode * t = newStmtNode(IfK);
  match(IF);
  if (t!=NULL) t->child[0] = exp();
  match(THEN);
  if (t!=NULL) t->child[1] = stmt_sequence();
  if (token==ELSE) {
    match(ELSE);
    if (t!=NULL) t->child[2] = stmt_sequence();
  }
  match(END);
  return t;
}
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
