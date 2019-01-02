typedef enum
{
	stmt,
	exps
} NodeType;

typedef enum
{
	type_spe,
	asgn_stmt,
	dec_stmt,
	if_stmt,
	while_stmt,
	for_stmt,
	com_stmt,
	input_stmt,
	output_stmt
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
	int temp_num;//临时变量的编号
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
		char name[50];
	} attr;

	union JmpAddress
	{
		char true_label[10];
		char false_label[10];
		char begin_label[10];
		char curr_label[10];//用于控制流语句跳转时填入
	}label;

	TreeNode* stmt_node(StmtType type);
	TreeNode* exp_node(ExpType type);
};

struct ParseTree
{
	//考虑符号表用链表实现
	char symbol_table[1000][50];//符号表
	int id_type[1000];//用于存储各个id的类型

	int table_number = 0; //记录符号表中储存的个数
	int all_line = 0;//记录代码的行数
	int all_node = 0;//记录树中结点数量
	int temp_sum = 0;//记录临时变量数量
	int label_sum = 0;//记录标签数量

	TreeNode * root;//代码的根结点

	int search_table(char *id);//查表&填表
	//输出语法树和类型检查
	void print_node(TreeNode *node);
	void print_tree(TreeNode *node);
	void print_child(TreeNode *node);
	void check_idtype(TreeNode *node);
	void check_node(TreeNode *node);
	void write_error(TreeNode *node, char error[]);
	//生成汇编代码
	void gen_header();
	void gen_dec(TreeNode *node);
	void gen_stmtcode(TreeNode *node);
	void gen_expcode(TreeNode *node);
	void gen_code(TreeNode *node);
};
