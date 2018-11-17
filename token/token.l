%{
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
#include<fstream>
#include<stdlib.h> 
using namespace std;
int number=0; //记录符号表中储存的个数
char symbol_table[30][1000];//符号表
double yyvalue=0;

%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name token


// class definition
{
	// place any extra class members here
   double getnumber();
   int set_table();
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}
delim       [ \t\n]
delims      {delim}+
digit       [0-9]
letter      [A-Za-z]
number      -?{digit}+(\.{digit}+)?([eE][-+]?{digit}+)?
ID          ({letter}|[_])({letter}|{digit}|[_])*
annotation  ("/*"([^*"]*|".*"|\*+[^/])*\**"*/")|("//".*\n)

%%
{delims}  {/*do nothing*/}
//数据类型
int     {cout<<"INT\t"<<"int\t"<<endl;}
double  {cout<<"DOUBLE\t"<<"double\t"<<endl;}
float   {cout<<"FLOAT\t"<<"float\t"<<endl;}
char    {cout<<"CHAR\t"<<"char\t"<<endl;}
bool    {cout<<"BOOL\t"<<"bool\t"<<endl;}
void    {cout<<"VOID\t"<<"void\t"<<endl;}

//算术运算
"+"     {cout<<"PLUS\t"<<"+\t"<<endl;}
"-"     {cout<<"MINUS\t"<<"-\t"<<endl;}
"*"     {cout<<"MUL\t"<<"*\t"<<endl;}
"/"     {cout<<"DIV\t"<<"/\t"<<endl;}
"="     {cout<<"ASSIGN\t"<<"=\t"<<endl;}
"%"     {cout<<"MOD\t"<<"%\t"<<endl;}

//关系运算符
"=="    {cout<<"EQ\t"<<"==\t"<<endl;}
">"     {cout<<"GT\t"<<">\t"<<endl;}
"<"     {cout<<"LT\t"<<"<\t"<<endl;}
">="    {cout<<"GE\t"<<">=\t"<<endl;}
"<="    {cout<<"LE\t"<<"<=\t"<<endl;}
"!="    {cout<<"NE\t"<<"!=|t"<<endl;}

//语句
if      {cout<<"IF\t"<<"if\t"<<endl;}
else    {cout<<"ELSE\t"<<"else\t"<<endl;}
while   {cout<<"WHILE\t"<<"while\t"<<endl;}
for     {cout<<"FOR\t"<<"for\t"<<endl;}
break   {cout<<"BREAK\t"<<"break\t"<<endl;}
return  {cout<<"RETURN\t"<<"return\t"<<endl;}

//其他符号
"("     {cout<<"LPAREN\t"<<"(\t"<<endl;}
")"     {cout<<"RPAREN\t"<<")\t"<<endl;}	
"{"     {cout<<"LBRACE\t"<<"{\t"<<endl;}
"}"     {cout<<"RBRACE\t"<<"}\t"<<endl;}
";"     {cout<<"SEMICOLON\t"<<";\t"<<endl;}

//其他 
{ID}        {yyvalue=set_table();
            cout<<"ID\t"<<symbol_table[(int)yyvalue]<<"\t"<<yyvalue<<"\t"<<endl;}
            //yyleng=strlen(yytext)
{number}    {yyvalue=getnumber();
            cout<<"number\t"<<yyvalue<<"\t"<<yyvalue<<"\t"<<endl;}
            // cout<<"number\t";
            // for(int i=0;i<yyleng;i++)
            //     cout<<yytext[i];
            // cout<<"\t";
            // for(int i=0;i<yyleng;i++)
            //     cout<<yytext[i];
            // cout<<"\t"<<endl;
            //}
.           {cout<<"UNKNOWN"<<endl;}

%%
/////////////////////////////////////////////////////////////////////////////
// programs section
int token::set_table()
{
    int i=0;
    for(;i<number;i++)
    {
        //每当词法分析程序匹配标记时，
        //标记的文本就存储在以空字符结尾的字符串yytext中
       if(strcmp(symbol_table[i],yytext)==0)
            break;
    }
    if(i>=number){
        strcpy_s(symbol_table[i],strlen(yytext)+1,yytext);//数组长度不加1报错,"\0"
        number++;
    }
    return i;
}
double token::getnumber()
{
//    double tokenvalue=0.0;
//    int i=0,flag=0,count=0,temp=1;
//    if(yytext[0]=='-')
//         i++;
//    for(int i=0;i<yyleng;i++){
//        if(yytext[i]=='.'){
//            flag=1;
//            count=i;
//            break;
//        }
//    }
//    if(flag){
//         for(;i<count;i++)
//             tokenvalue=tokenvalue*10 + yytext[i]-'0';
//         for(i=count+1;i<yyleng;i++){
//             tokenvalue=tokenvalue*10 + yytext[i]-'0';
//             temp*=10;
//         }
//         tokenvalue/=temp;
//    }
//    else{
//         for(;i<yyleng;i++)
//             tokenvalue=tokenvalue*10 + yytext[i]-'0';
//    }
//    if(yytext[0]=='-')
//         return 0-tokenvalue;
//    return tokenvalue;
    return atof(yytext);
}
int main(void)
{
	int n = 1;
	token lexer;
    cout<<"单词\t"<<"词素\t"<<"属性\t\n";
    //lex词法分析程序从标准I/O文件yyin中读取输入，改变yyin就是改变输入
    //yyin的默认值是stdin，默认输入源是标准输入
	if (lexer.yycreate()) 
	{
       freopen("\example.txt", "r",stdin);
        n = lexer.yylex();
        //将控制还给控制台
		freopen("CON", "r", stdin);

	}
    system("pause");
	return n;	
}
// int main(int argc, char *argv[])
// {
// 	int n = 1;
// 	token lexer;
// 	if (lexer.yycreate()) 
// 	{
//        // ++argv, --argc; 
//        // if ( argc > 0 ) 
//         //    lexer.yyin = fopen( argv[0], "r" );
//       if (argc > 1){
//         //FILE *file;
//         //file=fopen(argv[1],"r");
//         //lexer.yyin=file;
//         lexer.yyin = new std::ifstream("D:\\Debug\\example.txt");
//       }
//     //yyin = fopen("example.txt","r");  
//       //  yylex();  
//     //fclose(yyin);  
//     //fopen_s(&lexer.yyin, "D:\\example.txt", "r");
//       if (!lexer.yyin->fail()) {
//          n = lexer.yylex();
//       }
//       n = lexer.yylex();
// 	}
// 	return n;	
// }