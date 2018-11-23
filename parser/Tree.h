typedef enum {StmtK,ExpK} NodeKind;
typedef enum {IfK,RepeatK,AssignK,ReadK,WriteK} StmtKind;
typedef enum {OpK,ConstK,IdK} ExpKind;

typedef enum {Void,Integer,Boolean} ExpType;

#define MAXCHILDREN 3
typedef struct treeNode
{ 
	struct treeNode * child[MAXCHILDREN];
	struct treeNode * sibling;
	int lineno;
	int address;
	NodeKind nodekind;
	union { StmtKind stmt; ExpKind exp;} kind;
	union { //TokenType op;
		int val;
		char * name; } attr;
		ExpType type; /* for type checking of exps */

	TreeNode* stmt_node(StmtKind kind);
	TreeNode* expr_node(ExpKind kind);
	TreeNode* simple_exp(void);
	TreeNode* if_stmt(void);
} TreeNode;
struct Symbol_table
{
	char symbol[1000][50];//符号表
	int number = 0; //记录符号表中储存的个数

	int search_table(char *id);
	// string get_name(int address);
	//int get_num(char*);
};