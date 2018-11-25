// typedef enum {StmtK,ExpK} NodeKind;
// typedef enum {IfK,RepeatK,AssignK,ReadK,WriteK} StmtKind;
// typedef enum {OpK,ConstK,IdK} ExpKind;
// typedef enum {Void,Integer,Boolean} ExpType;

typedef enum 
{
	stmt,
	exp
} node_type;

typedef enum
{
	// expr,
	// number,
	asgn_stmt,
	dec_stmt,
	if_stmt,
	while_stmt,
	for_stmt,
	// input_stmt,
	// output_stmt
} stmt_type;

typedef enum 
{
	op,
	number,
	id
} exp_type;

typedef enum 
{
	Int,
	Dobule,
	Float,
	Char,
	Bool,
	Void
} data_type;

#define MAXCHILDREN 3
typedef struct TreeNode
{ 
	struct TreeNode * child[MAXCHILDREN];
	struct TreeNode * brother;

	int lineno;
	int address;
	NodeKind nodekind;
	
	union { StmtKind stmt; ExpKind exp;} kind;
	union { //TokenType op;
		int value;
		char * name; } attr;
	
	ExpType type; /* for type checking of exps */

	TreeNode* stmt_node(StmtKind kind);
	TreeNode* expr_node(ExpKind kind);
	TreeNode* simple_exp(void);
	TreeNode* if_stmt(void);
} Node;

struct Symbol_table
{
	char symbol[1000][50];//符号表
	int number = 0; //记录符号表中储存的个数

	int search_table(char *id);
	// string get_name(int address);
	//int get_num(char*);
};