// typedef enum {StmtK,ExpK} NodeKind;
// typedef enum {IfK,RepeatK,AssignK,ReadK,WriteK} StmtKind;
// typedef enum {OpK,ConstK,IdK} ExpKind;
// typedef enum {Void,Integer,Boolean} ExpType;

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
	for_stmt//,
	// input_stmt,
	// output_stmt
} StmtType;

typedef enum
{
	op,
	number,
	id
} ExpType;

typedef enum
{
	INT,
	DOBULE,
	FLOAT,
	CHAR,
	BOOL,
	VOID
} DataType;

typedef enum
{
	PLUS,
	MINUS,
	MUL,
	DIV,
	MOD,
	INC,
	DEC,
	INAD,
	IOR,
	XOR,
	NOT,
	SHL,
	SHR,
	EQ,
	GT,
	LT,
	GE,
	LE,
	NEQ,
	AND,
	OR,
	OPPOSITE
} Operator;

#define MAXCHILDREN 3
typedef struct TreeNode
{
	struct TreeNode * child[MAXCHILDREN];
	struct TreeNode * brother;

	int lineno;//结点在代码中的行号
	int node_num;//结点相对于整棵树的编号

	//需要的时候用名字去查即可，可删除
	int address;//标识符在符号表中的位置

	NodeType node_type;
	
	union
	{
		StmtType stmt_type;
		ExpType exp_type;
	} type;

	union
	{
		Operator op;
		int value;
		char * name;
		DataType data_type;
	} attr;


	TreeNode* stmt_node(StmtType type);
	TreeNode* exp_node(ExpType type);

	void print_node(TreeNode *node);
};

typedef struct ParseTree
{
	char symbol_table[1000][50];//符号表
	int table_number = 0; //记录符号表中储存的个数
	int all_line = 0;//记录代码的行数

	TreeNode * root;

	int search_table(char *id);
};