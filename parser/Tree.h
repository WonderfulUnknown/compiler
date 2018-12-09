typedef enum
{
	stmt,
	exps//用exp给node_type赋值显示exp不明确
} NodeType;

typedef enum
{
	type_spe,
	asgn_stmt,
	dec_stmt,
	if_stmt,
	while_stmt,
	for_stmt,
	com_stmt//,
	// input_stmt,
	// output_stmt
} StmtType;

typedef enum
{
	oper,
	number,
	id
} ExpType;

#define MAXCHILDREN 3
struct TreeNode
{
	struct TreeNode * child[MAXCHILDREN];
	struct TreeNode * brother;

	int lineno;//结点在代码中的行号
	int node_num;//结点相对于整棵树的编号
	int data_type;//记录类型

	//需要的时候用名字去查即可，可删除
	int address;//标识符在符号表中的位置

	NodeType node_type;

	union
	{
		StmtType stmt_type;
		ExpType exp_type;
	} type;

	union NodeAttr
	{
		int op;
		double value;
		//char * name;
		char name[50];
	} attr;


	TreeNode* stmt_node(StmtType type);
	TreeNode* exp_node(ExpType type);
};

struct ParseTree
{
	char symbol_table[1000][50];//符号表
	int table_number = 0; //记录符号表中储存的个数
	int all_line = 0;//记录代码的行数
	int all_node = 0;//记录树中结点数量

	TreeNode * root;

	int search_table(char *id);

	void print_node(TreeNode *node);
	void print_tree(TreeNode *node);
	void print_child(TreeNode *node);
	void check_idtype(TreeNode *node);
	void check_node(TreeNode *node);
	void write_error(TreeNode *node, char error[]);
};
