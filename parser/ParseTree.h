#pragma once


// const int max_table = 1024;
//const int max_child = 10;
#define max_child = 10;

enum stmt_type
{
	expr = 0,
	number,
	asgn_stmt,
	dec_stmt,
	if_stmt,
	while_stmt,
	for_stmt,
	// input_stmt,
	// output_stmt
};

enum expr_type
{
	ari_expr = 0,
	rel_expr,
	log_expr,
//	expr,
//	number
};

//enum op_type
//{
//	PLUS = 0,
//    MINUS,
//    MUL,
//    DIV, 
//    MOD, 
//    INC,
//    DEC, 
//    INAD, 
//    IOR,
//    XOR, 
//    NOT, 
//    SHL, 
//    SHR,
//	EQ,
//    GT, 
//    LT, 
//    GE, 
//    LE, 
//    NEQ,
//    AND, 
//    OR,
//    OPPOSITE
//};

enum data_type
{
	Int = 0,
	Dobule,
	Float,
	Char,
	Bool,
	Void
};

struct Tree_node
{
	struct Tree_node *child[max_child];
	//考虑是否只需要存储一个孩子结点，通过孩子结点的兄弟节点找到所有孩子
	//struct Tree_node* first_child[max_child];
	int child_num;//孩子结点的数量
	struct Tree_node* brother = NULL;//用于将多个id存储成idlist

	//考虑是否赋初值
	//int stmt_type;
	stmt_type type;
	int node_num;//结点对于整棵树的编号
	int op_type;
	int value;
	char symbol;
	int address;//id在符号表中的位置
	int lineno;

	
	// void add_child(struct Tree_node *parent,struct Tree_node *child);
	//void search_child(struct Tree_node *parent);
};

struct Parse_tree
{
	struct Tree_node root;
	int node_count = 0;//树中结点数量

	//void set_node(int type, Node_attr attr, struct Tree_node[]);
	//需要表明创建的结点是什么类型，来确定需要输入哪些值
	//创建的时候并不知道孩子结点的情况，暂不考虑孩子
	Tree_node* set_node(int stmt_type,int op_type,int value,char symbol,int address);
};

struct Symbol_table
{
	char symbol[1000][50];//符号表
	int number = 0; //记录符号表中储存的个数

	int search_table(char *id);
	// string get_name(int address);
	//int get_num(char*);
};