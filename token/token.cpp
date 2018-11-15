/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 46 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* token.cpp
* C++ source file generated from token.l.
* 
* Date: 11/05/18
* Time: 22:38:10
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\token.l"

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


#line 52 "token.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\token.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 30 ".\\token.l"

	// place any extra initialisation code here

#line 76 "token.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 35 ".\\token.l"

	// place any extra cleanup code here

#line 88 "token.cpp"
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 46 ".\\token.l"
/*do nothing*/
#line 160 "token.cpp"
		}
		break;
	case 2:
		{
#line 48 ".\\token.l"
cout<<"INT\t"<<"int\t"<<endl;
#line 167 "token.cpp"
		}
		break;
	case 3:
		{
#line 49 ".\\token.l"
cout<<"DOUBLE\t"<<"double\t"<<endl;
#line 174 "token.cpp"
		}
		break;
	case 4:
		{
#line 50 ".\\token.l"
cout<<"FLOAT\t"<<"float\t"<<endl;
#line 181 "token.cpp"
		}
		break;
	case 5:
		{
#line 51 ".\\token.l"
cout<<"CHAR\t"<<"char\t"<<endl;
#line 188 "token.cpp"
		}
		break;
	case 6:
		{
#line 52 ".\\token.l"
cout<<"BOOL\t"<<"bool\t"<<endl;
#line 195 "token.cpp"
		}
		break;
	case 7:
		{
#line 53 ".\\token.l"
cout<<"VOID\t"<<"void\t"<<endl;
#line 202 "token.cpp"
		}
		break;
	case 8:
		{
#line 56 ".\\token.l"
cout<<"PLUS\t"<<"+\t"<<endl;
#line 209 "token.cpp"
		}
		break;
	case 9:
		{
#line 57 ".\\token.l"
cout<<"MINUS\t"<<"-\t"<<endl;
#line 216 "token.cpp"
		}
		break;
	case 10:
		{
#line 58 ".\\token.l"
cout<<"MUL\t"<<"*\t"<<endl;
#line 223 "token.cpp"
		}
		break;
	case 11:
		{
#line 59 ".\\token.l"
cout<<"DIV\t"<<"/\t"<<endl;
#line 230 "token.cpp"
		}
		break;
	case 12:
		{
#line 60 ".\\token.l"
cout<<"ASSIGN\t"<<"=\t"<<endl;
#line 237 "token.cpp"
		}
		break;
	case 13:
		{
#line 61 ".\\token.l"
cout<<"MOD\t"<<"%\t"<<endl;
#line 244 "token.cpp"
		}
		break;
	case 14:
		{
#line 64 ".\\token.l"
cout<<"EQ\t"<<"==\t"<<endl;
#line 251 "token.cpp"
		}
		break;
	case 15:
		{
#line 65 ".\\token.l"
cout<<"GT\t"<<">\t"<<endl;
#line 258 "token.cpp"
		}
		break;
	case 16:
		{
#line 66 ".\\token.l"
cout<<"LT\t"<<"<\t"<<endl;
#line 265 "token.cpp"
		}
		break;
	case 17:
		{
#line 67 ".\\token.l"
cout<<"GE\t"<<">=\t"<<endl;
#line 272 "token.cpp"
		}
		break;
	case 18:
		{
#line 68 ".\\token.l"
cout<<"LE\t"<<"<=\t"<<endl;
#line 279 "token.cpp"
		}
		break;
	case 19:
		{
#line 69 ".\\token.l"
cout<<"NE\t"<<"!=|t"<<endl;
#line 286 "token.cpp"
		}
		break;
	case 20:
		{
#line 72 ".\\token.l"
cout<<"IF\t"<<"if\t"<<endl;
#line 293 "token.cpp"
		}
		break;
	case 21:
		{
#line 73 ".\\token.l"
cout<<"ELSE\t"<<"else\t"<<endl;
#line 300 "token.cpp"
		}
		break;
	case 22:
		{
#line 74 ".\\token.l"
cout<<"WHILE\t"<<"while\t"<<endl;
#line 307 "token.cpp"
		}
		break;
	case 23:
		{
#line 75 ".\\token.l"
cout<<"FOR\t"<<"for\t"<<endl;
#line 314 "token.cpp"
		}
		break;
	case 24:
		{
#line 76 ".\\token.l"
cout<<"BREAK\t"<<"break\t"<<endl;
#line 321 "token.cpp"
		}
		break;
	case 25:
		{
#line 77 ".\\token.l"
cout<<"RETURN\t"<<"return\t"<<endl;
#line 328 "token.cpp"
		}
		break;
	case 26:
		{
#line 80 ".\\token.l"
cout<<"LPAREN\t"<<"(\t"<<endl;
#line 335 "token.cpp"
		}
		break;
	case 27:
		{
#line 81 ".\\token.l"
cout<<"RPAREN\t"<<")\t"<<endl;
#line 342 "token.cpp"
		}
		break;
	case 28:
		{
#line 82 ".\\token.l"
cout<<"LBRACE\t"<<"{\t"<<endl;
#line 349 "token.cpp"
		}
		break;
	case 29:
		{
#line 83 ".\\token.l"
cout<<"RBRACE\t"<<"}\t"<<endl;
#line 356 "token.cpp"
		}
		break;
	case 30:
		{
#line 84 ".\\token.l"
cout<<"SEMICOLON\t"<<";\t"<<endl;
#line 363 "token.cpp"
		}
		break;
	case 31:
		{
#line 87 ".\\token.l"
yyvalue=set_table();
            cout<<"ID\t"<<symbol_table[(int)yyvalue]<<"\t"<<yyvalue<<"\t"<<endl;
#line 371 "token.cpp"
		}
		break;
#line 89 ".\\token.l"
            //yyleng=strlen(yytext)
#line 376 "token.cpp"
	case 32:
		{
#line 90 ".\\token.l"
yyvalue=getnumber();
            cout<<"NUMBER\t"<<yyvalue<<"\t"<<yyvalue<<"\t"<<endl;
#line 382 "token.cpp"
		}
		break;
#line 92 ".\\token.l"
            // cout<<"NUMBER\t";
            // for(int i=0;i<yyleng;i++)
            //     cout<<yytext[i];
            // cout<<"\t";
            // for(int i=0;i<yyleng;i++)
            //     cout<<yytext[i];
            // cout<<"\t"<<endl;
            //}
#line 394 "token.cpp"
	case 33:
		{
#line 100 ".\\token.l"
cout<<"UNKNOWN"<<endl;
#line 399 "token.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 249;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 4, 1 },
		{ 33, 15 },
		{ 0, 31 },
		{ 4, 4 },
		{ 4, 4 },
		{ 31, 13 },
		{ 34, 16 },
		{ 13, 13 },
		{ 13, 13 },
		{ 13, 13 },
		{ 13, 13 },
		{ 13, 13 },
		{ 13, 13 },
		{ 13, 13 },
		{ 13, 13 },
		{ 13, 13 },
		{ 13, 13 },
		{ 43, 24 },
		{ 41, 23 },
		{ 45, 25 },
		{ 46, 26 },
		{ 42, 23 },
		{ 4, 1 },
		{ 5, 1 },
		{ 47, 27 },
		{ 44, 24 },
		{ 4, 4 },
		{ 6, 1 },
		{ 35, 17 },
		{ 30, 5 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 0, 31 },
		{ 11, 1 },
		{ 51, 36 },
		{ 12, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 52, 37 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 53, 38 },
		{ 54, 39 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 36, 19 },
		{ 55, 40 },
		{ 56, 41 },
		{ 37, 19 },
		{ 18, 1 },
		{ 57, 42 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 22, 1 },
		{ 23, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 24, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 25, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 28, 1 },
		{ 60, 46 },
		{ 29, 1 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 49, 32 },
		{ 58, 44 },
		{ 49, 32 },
		{ 59, 45 },
		{ 61, 47 },
		{ 38, 20 },
		{ 39, 21 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 62, 51 },
		{ 63, 52 },
		{ 64, 53 },
		{ 65, 54 },
		{ 18, 77 },
		{ 66, 55 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 18, 77 },
		{ 0, 11 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 48, 48 },
		{ 50, 50 },
		{ 50, 50 },
		{ 50, 50 },
		{ 50, 50 },
		{ 50, 50 },
		{ 50, 50 },
		{ 50, 50 },
		{ 50, 50 },
		{ 50, 50 },
		{ 50, 50 },
		{ 67, 56 },
		{ 32, 48 },
		{ 0, 11 },
		{ 68, 59 },
		{ 69, 60 },
		{ 70, 61 },
		{ 71, 63 },
		{ 72, 65 },
		{ 73, 67 },
		{ 74, 68 },
		{ 75, 70 },
		{ 76, 72 },
		{ 77, 74 },
		{ 40, 22 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 32, 48 },
		{ 0, 11 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 33 },
		{ 0, -4, 1 },
		{ 0, -30, 33 },
		{ 0, 0, 13 },
		{ 0, 0, 26 },
		{ 0, 0, 27 },
		{ 0, 0, 10 },
		{ 0, 0, 8 },
		{ 13, 147, 9 },
		{ 0, 0, 11 },
		{ 48, -39, 32 },
		{ 0, 0, 30 },
		{ 0, -58, 16 },
		{ 0, -53, 12 },
		{ 0, -31, 15 },
		{ 77, 0, 31 },
		{ 77, -28, 31 },
		{ 77, 29, 31 },
		{ 77, 23, 31 },
		{ 77, 119, 31 },
		{ 77, -88, 31 },
		{ 77, -83, 31 },
		{ 77, -80, 31 },
		{ 77, -89, 31 },
		{ 77, -78, 31 },
		{ 0, 0, 28 },
		{ 0, 0, 29 },
		{ 0, 0, 19 },
		{ 48, -65, 0 },
		{ 50, 85, 0 },
		{ 0, 0, 18 },
		{ 0, 0, 14 },
		{ 0, 0, 17 },
		{ 77, -73, 31 },
		{ 77, -51, 31 },
		{ 77, -42, 31 },
		{ 77, -61, 31 },
		{ 77, -31, 31 },
		{ 77, -26, 31 },
		{ 77, -26, 31 },
		{ 77, 0, 20 },
		{ 77, 13, 31 },
		{ 77, 15, 31 },
		{ 77, 11, 31 },
		{ 77, 27, 31 },
		{ 0, 146, 32 },
		{ 50, 0, 0 },
		{ 0, 156, 32 },
		{ 77, 53, 31 },
		{ 77, 65, 31 },
		{ 77, 49, 31 },
		{ 77, 66, 31 },
		{ 77, 65, 31 },
		{ 77, 117, 31 },
		{ 77, 0, 23 },
		{ 77, 0, 2 },
		{ 77, 100, 31 },
		{ 77, 118, 31 },
		{ 77, 111, 31 },
		{ 77, 0, 6 },
		{ 77, 113, 31 },
		{ 77, 0, 5 },
		{ 77, 113, 31 },
		{ 77, 0, 21 },
		{ 77, 106, 31 },
		{ 77, 109, 31 },
		{ 77, 0, 7 },
		{ 77, 123, 31 },
		{ 77, 0, 24 },
		{ 77, 124, 31 },
		{ 77, 0, 4 },
		{ 77, 116, 31 },
		{ 77, 0, 22 },
		{ 77, 0, 3 },
		{ 0, 70, 25 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 102 ".\\token.l"

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
   double tokenvalue=0.0;
   int i=0,flag=0,count=0,temp=1;
   if(yytext[0]=='-')
        i++;
   for(int i=0;i<yyleng;i++){
       if(yytext[i]=='.'){
           flag=1;
           count=i;
           break;
       }
   }
   if(flag){
        for(;i<count;i++)
            tokenvalue=tokenvalue*10 + yytext[i]-'0';
        for(i=count+1;i<yyleng;i++){
            tokenvalue=tokenvalue*10 + yytext[i]-'0';
            temp*=10;
        }
        tokenvalue/=temp;
   }
   else{
        for(;i<yyleng;i++)
            tokenvalue=tokenvalue*10 + yytext[i]-'0';
   }
   if(yytext[0]=='-')
        return 0-tokenvalue;
   return tokenvalue;
    // return atof(yytext);
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
