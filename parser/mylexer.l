%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2018年11月15日
****************************************************************************/
// #include <iostream>
#include <string.h>

#include "myparser.h"
#include "Tree.h"

//全局变量一个工程下有一个即可，否则error link 2005

extern ParseTree tree;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// place any declarations here

delim       [ \t]
delims      {delim}+
newline     \n
digit       [0-9]
letter      [A-Za-z]
number      -?{digit}+(\.{digit}+)?([eE][-+]?{digit}+)?
id          ({letter}|[_])({letter}|{digit}|[_])*
annotation  ("/*"([^*"]*|".*"|\*+[^/])*\**"*/")|("//".*\n)
%%

/////////////////////////////////////////////////////////////////////////////
// rules section

%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
	yylval = new TreeNode;
%}

// place your Lex rules here

{delims}		   {}
{newline}      {}//{tree.all_line++;}//正确计数需要移到.y文件中
{annotation}	{}

//myparser.h 中自动给出相应的宏定义

//数据类型
int     {return INT;}
double  {return DOUBLE;}
float   {return FLOAT;}
char    {return CHAR;}
bool    {return BOOL;}
void    {return VOID;}

//算术运算
"+"     {return PLUS;}
"-"     {return MINUS;}
"*"     {return MUL;}
"/"     {return DIV;}
"%"     {return MOD;}
"++"    {return INC;}
"--"    {return DEC;}
"&"     {return INAD;}
"|"     {return IOR;}
"^"     {return XOR;}
"~"     {return NOT;}
"<<"    {return SHL;}
">>"    {return SHR;}

//关系运算符
"=="    {return EQ;}
">"     {return GT;}
"<"     {return LT;}
">="    {return GE;}
"<="    {return LE;}
"!="    {return NEQ;}

//逻辑运算符
"&&"    {return AND;}
"||"    {return OR;}
"!"     {return OPPOSITE;}

//语句
if      {return IF;}
else    {return ELSE;}
while   {return WHILE;}
for     {return FOR;}
break   {return BREAK;}
return  {return RETURN;}
"cin"     {return CIN;}
"cout"    {return COUT;}

//其他符号
main    {return MAIN;}
endl    {return ENDL;}
"="     {return ASSIGN;}
"{"     {return LBRACE;}
"}"     {return RBRACE;}
"("     {return LPRACE;}
")"     {return RPRACE;}
"["     {return LSBRACE;}
"]"     {return RSBRACE;}
","     {return COMMA;}
";"     {return SIMICOLON;}
":"     {return COLON;}

//其他 
{id}        {
            //yylval->address = -1;
			   //yylval->address = tree.search_table(yytext);
           
            strcpy(yylval->attr.name,yytext);
            yylval->type.exp_type = id;
            return ID;
            }
            
{number}    { 
               yylval->attr.value = atof(yytext);
               return NUMBER;
            }

// .          {return UNKNOWN;}

%%

/////////////////////////////////////////////////////////////////////////////
// programs section

