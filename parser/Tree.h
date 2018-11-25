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
	Int,
	Dobule,
	Float,
	Char,
	Bool,
	Void
} DataType;

#define MAXCHILDREN 3
typedef struct TreeNode
{ 
	struct TreeNode * child[MAXCHILDREN];
	struct TreeNode * brother;

	int lineno;
	int address;
	NodeType node_type;
	DataType data_type; 
	
	union 
	{ 
		StmtType stmt_type; 
		ExpType exp_type;
	} type;

	union 
	{ 
		//TokenType op;
		int value;
		char * name; 
	} attr;
	

	TreeNode* stmt_node(StmtType type);
	TreeNode* exp_node(ExpType type);
	//TreeNode* simple_exp(void);
	// TreeNode* if_stmt(void);
} ;

typedef struct Symbol_table
{
	char symbol[1000][50];//符号表
	int number = 0; //记录符号表中储存的个数

	int search_table(char *id);
	int all_line = 0;
} ;