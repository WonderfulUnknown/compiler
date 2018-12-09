typedef enum
{
	stmt,
	exps//��exp��node_type��ֵ��ʾexp����ȷ
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

	int lineno;//����ڴ����е��к�
	int node_num;//���������������ı��
	int data_type;//��¼����

	//��Ҫ��ʱ��������ȥ�鼴�ɣ���ɾ��
	int address;//��ʶ���ڷ��ű��е�λ��

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
	char symbol_table[1000][50];//���ű�
	int table_number = 0; //��¼���ű��д���ĸ���
	int all_line = 0;//��¼���������
	int all_node = 0;//��¼���н������

	TreeNode * root;

	int search_table(char *id);

	void print_node(TreeNode *node);
	void print_tree(TreeNode *node);
	void print_child(TreeNode *node);
	void check_idtype(TreeNode *node);
	void check_node(TreeNode *node);
	void write_error(TreeNode *node, char error[]);
};
