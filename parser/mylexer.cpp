/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 66 of your 30 day trial period.
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
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 11/25/18
* Time: 17:19:21
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

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2018年11月15日
****************************************************************************/
// #include <iostream>
#include <string.h>

#include "myparser.h"

//using namespace std;

//#include "ParseTree.h"
#include "Tree.h"
// Parse_tree tree;
TreeNode node;
Symbol_table table;

#line 59 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 34 ".\\mylexer.l"

	// place any extra initialisation code here

#line 83 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 39 ".\\mylexer.l"

	// place any extra cleanup code here

#line 95 "mylexer.cpp"
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
#line 57 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
	yylval = &node;

#line 167 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 65 ".\\mylexer.l"
/*do nothing*/
#line 174 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 66 ".\\mylexer.l"

#line 181 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 68 ".\\mylexer.l"
return INT;
#line 188 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 69 ".\\mylexer.l"
return DOUBLE;
#line 195 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 70 ".\\mylexer.l"
return FLOAT;
#line 202 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 71 ".\\mylexer.l"
return CHAR;
#line 209 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 72 ".\\mylexer.l"
return BOOL;
#line 216 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 73 ".\\mylexer.l"
return VOID;
#line 223 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 76 ".\\mylexer.l"
return PLUS;
#line 230 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 77 ".\\mylexer.l"
return MINUS;
#line 237 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 78 ".\\mylexer.l"
return MUL;
#line 244 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 79 ".\\mylexer.l"
return DIV;
#line 251 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 80 ".\\mylexer.l"
return MOD;
#line 258 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 81 ".\\mylexer.l"
return INC;
#line 265 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 82 ".\\mylexer.l"
return DEC;
#line 272 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 83 ".\\mylexer.l"
return INAD;
#line 279 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 84 ".\\mylexer.l"
return IOR;
#line 286 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 85 ".\\mylexer.l"
return XOR;
#line 293 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 86 ".\\mylexer.l"
return NOT;
#line 300 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 87 ".\\mylexer.l"
return SHL;
#line 307 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 88 ".\\mylexer.l"
return SHR;
#line 314 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 91 ".\\mylexer.l"
return EQ;
#line 321 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 92 ".\\mylexer.l"
return GT;
#line 328 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 93 ".\\mylexer.l"
return LT;
#line 335 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 94 ".\\mylexer.l"
return GE;
#line 342 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 95 ".\\mylexer.l"
return LE;
#line 349 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 96 ".\\mylexer.l"
return NEQ;
#line 356 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 99 ".\\mylexer.l"
return AND;
#line 363 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 100 ".\\mylexer.l"
return OR;
#line 370 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 101 ".\\mylexer.l"
return OPPOSITE;
#line 377 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 104 ".\\mylexer.l"
return IF;
#line 384 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 105 ".\\mylexer.l"
return ELSE;
#line 391 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 106 ".\\mylexer.l"
return WHILE;
#line 398 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 107 ".\\mylexer.l"
return FOR;
#line 405 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 108 ".\\mylexer.l"
return BREAK;
#line 412 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 109 ".\\mylexer.l"
return RETURN;
#line 419 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 112 ".\\mylexer.l"
return MAIN;
#line 426 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 113 ".\\mylexer.l"
return ASSIGN;
#line 433 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 114 ".\\mylexer.l"
return LBRACE;
#line 440 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 115 ".\\mylexer.l"
return RBRACE;
#line 447 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 116 ".\\mylexer.l"
return LPRACE;
#line 454 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 117 ".\\mylexer.l"
return RPRACE;
#line 461 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 118 ".\\mylexer.l"
return LSBRACE;
#line 468 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 119 ".\\mylexer.l"
return RSBRACE;
#line 475 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 120 ".\\mylexer.l"
return COMMA;
#line 482 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 121 ".\\mylexer.l"
return SIMICOLON;
#line 489 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 122 ".\\mylexer.l"
return COLON;
#line 496 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 125 ".\\mylexer.l"

               //通过yylval将id在符号表中的地址传给.y
               //yylval = table.search_table(yytext);//不在符号表中就填入
               //yylval = &node;
			   yylval->address = table.search_table(yytext);
			   yylval->attr.name = (yytext);
            return yylval;
            
#line 510 "mylexer.cpp"
		}
		break;
#line 133 ".\\mylexer.l"
            
            //yyleng=strlen(yytext)
#line 516 "mylexer.cpp"
	case 49:
		{
#line 135 ".\\mylexer.l"
 
               yylval->attr.value = atof(yytext);
               return yylval;
            
#line 524 "mylexer.cpp"
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

	yytransitionmax = 215;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 3, 1 },
		{ 41, 12 },
		{ 0, 12 },
		{ 68, 68 },
		{ 68, 68 },
		{ 68, 68 },
		{ 68, 68 },
		{ 68, 68 },
		{ 68, 68 },
		{ 68, 68 },
		{ 68, 68 },
		{ 68, 68 },
		{ 68, 68 },
		{ 3, 3 },
		{ 3, 3 },
		{ 83, 65 },
		{ 42, 83 },
		{ 69, 45 },
		{ 58, 29 },
		{ 69, 45 },
		{ 67, 65 },
		{ 0, 44 },
		{ 3, 1 },
		{ 4, 1 },
		{ 45, 68 },
		{ 0, 12 },
		{ 59, 29 },
		{ 5, 1 },
		{ 6, 1 },
		{ 94, 83 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 3, 3 },
		{ 13, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 0, 44 },
		{ 0, 94 },
		{ 42, 13 },
		{ 45, 68 },
		{ 0, 12 },
		{ 51, 24 },
		{ 61, 31 },
		{ 43, 13 },
		{ 52, 24 },
		{ 65, 94 },
		{ 49, 19 },
		{ 50, 19 },
		{ 44, 14 },
		{ 66, 94 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 56, 28 },
		{ 46, 17 },
		{ 47, 17 },
		{ 57, 28 },
		{ 21, 1 },
		{ 62, 32 },
		{ 22, 1 },
		{ 23, 1 },
		{ 63, 33 },
		{ 64, 35 },
		{ 67, 43 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 39, 6 },
		{ 40, 10 },
		{ 29, 1 },
		{ 71, 51 },
		{ 72, 52 },
		{ 73, 53 },
		{ 30, 1 },
		{ 74, 54 },
		{ 75, 55 },
		{ 76, 56 },
		{ 77, 57 },
		{ 31, 1 },
		{ 78, 59 },
		{ 79, 60 },
		{ 80, 61 },
		{ 32, 1 },
		{ 33, 1 },
		{ 81, 62 },
		{ 82, 63 },
		{ 53, 25 },
		{ 34, 1 },
		{ 35, 1 },
		{ 36, 1 },
		{ 37, 1 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 83, 66 },
		{ 54, 26 },
		{ 55, 27 },
		{ 84, 71 },
		{ 85, 72 },
		{ 86, 73 },
		{ 87, 74 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 88, 75 },
		{ 89, 76 },
		{ 90, 79 },
		{ 91, 80 },
		{ 20, 101 },
		{ 92, 81 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 20, 101 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 70, 70 },
		{ 93, 82 },
		{ 38, 4 },
		{ 95, 85 },
		{ 96, 87 },
		{ 97, 89 },
		{ 98, 91 },
		{ 99, 93 },
		{ 48, 18 },
		{ 100, 96 },
		{ 101, 98 },
		{ 60, 30 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 101, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 6, 1 },
		{ 0, 144, 30 },
		{ 0, 0, 13 },
		{ 0, 57, 16 },
		{ 0, 0, 41 },
		{ 0, 0, 42 },
		{ 0, 0, 11 },
		{ 0, 53, 9 },
		{ 0, 0, 45 },
		{ 14, -42, 10 },
		{ 0, 15, 12 },
		{ 68, 21, 49 },
		{ 0, 0, 47 },
		{ 0, 0, 46 },
		{ 0, 20, 24 },
		{ 0, 150, 38 },
		{ 0, 4, 23 },
		{ 101, 0, 48 },
		{ 0, 0, 43 },
		{ 0, 0, 44 },
		{ 0, 0, 18 },
		{ 101, -51, 48 },
		{ 101, 10, 48 },
		{ 101, 19, 48 },
		{ 101, 23, 48 },
		{ 101, -29, 48 },
		{ 101, -82, 48 },
		{ 101, 117, 48 },
		{ 101, -40, 48 },
		{ 101, -27, 48 },
		{ 101, -17, 48 },
		{ 0, 0, 39 },
		{ 0, -36, 17 },
		{ 0, 0, 40 },
		{ 0, 0, 19 },
		{ 0, 0, 27 },
		{ 0, 0, 28 },
		{ 0, 0, 14 },
		{ 0, 0, 15 },
		{ 94, 0, 0 },
		{ -43, 79, 0 },
		{ 68, -46, 0 },
		{ 70, -24, 0 },
		{ 0, 0, 20 },
		{ 0, 0, 26 },
		{ 0, 0, 22 },
		{ 0, 0, 25 },
		{ 0, 0, 21 },
		{ 101, -13, 48 },
		{ 101, -2, 48 },
		{ 101, 3, 48 },
		{ 101, -15, 48 },
		{ 101, -12, 48 },
		{ 101, -7, 48 },
		{ 101, -9, 48 },
		{ 101, 0, 31 },
		{ 101, -9, 48 },
		{ 101, 3, 48 },
		{ 101, -7, 48 },
		{ 101, 7, 48 },
		{ 101, 8, 48 },
		{ 0, 0, 29 },
		{ -42, -25, 0 },
		{ 94, 87, 0 },
		{ 0, 0, 2 },
		{ 0, -43, 49 },
		{ 70, 0, 0 },
		{ 0, 146, 49 },
		{ 101, 24, 48 },
		{ 101, 36, 48 },
		{ 101, 20, 48 },
		{ 101, 37, 48 },
		{ 101, 61, 48 },
		{ 101, 66, 48 },
		{ 101, 0, 34 },
		{ 101, 0, 3 },
		{ 101, 54, 48 },
		{ 101, 48, 48 },
		{ 101, 67, 48 },
		{ 101, 96, 48 },
		{ 66, -16, 0 },
		{ 101, 0, 7 },
		{ 101, 99, 48 },
		{ 101, 0, 6 },
		{ 101, 99, 48 },
		{ 101, 0, 32 },
		{ 101, 92, 48 },
		{ 101, 0, 37 },
		{ 101, 95, 48 },
		{ 101, 0, 8 },
		{ 101, 109, 48 },
		{ -42, 22, 2 },
		{ 101, 0, 35 },
		{ 101, 111, 48 },
		{ 101, 0, 5 },
		{ 101, 103, 48 },
		{ 101, 0, 33 },
		{ 101, 0, 4 },
		{ 0, 71, 36 }
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
#line 142 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section


