/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 104 of your 30 day trial period.
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
* Date: 01/03/19
* Time: 10:29:20
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
#include "Tree.h"

//全局变量一个工程下有一个即可，否则error link 2005

extern ParseTree tree;

#line 56 "mylexer.cpp"
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
#line 31 ".\\mylexer.l"

	// place any extra initialisation code here

#line 80 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 36 ".\\mylexer.l"

	// place any extra cleanup code here

#line 92 "mylexer.cpp"
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
#line 55 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
	yylval = new TreeNode;

#line 164 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 63 ".\\mylexer.l"

#line 171 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 64 ".\\mylexer.l"

#line 178 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 65 ".\\mylexer.l"

#line 185 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 70 ".\\mylexer.l"
return INT;
#line 192 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 71 ".\\mylexer.l"
return DOUBLE;
#line 199 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 72 ".\\mylexer.l"
return FLOAT;
#line 206 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 73 ".\\mylexer.l"
return CHAR;
#line 213 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 74 ".\\mylexer.l"
return BOOL;
#line 220 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 75 ".\\mylexer.l"
return VOID;
#line 227 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 78 ".\\mylexer.l"
return PLUS;
#line 234 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 79 ".\\mylexer.l"
return MINUS;
#line 241 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 80 ".\\mylexer.l"
return MUL;
#line 248 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 81 ".\\mylexer.l"
return DIV;
#line 255 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 82 ".\\mylexer.l"
return MOD;
#line 262 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 83 ".\\mylexer.l"
return INC;
#line 269 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 84 ".\\mylexer.l"
return DEC;
#line 276 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 85 ".\\mylexer.l"
return INAD;
#line 283 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 86 ".\\mylexer.l"
return IOR;
#line 290 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 87 ".\\mylexer.l"
return XOR;
#line 297 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 88 ".\\mylexer.l"
return NOT;
#line 304 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 89 ".\\mylexer.l"
return SHL;
#line 311 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 90 ".\\mylexer.l"
return SHR;
#line 318 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 93 ".\\mylexer.l"
return EQ;
#line 325 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 94 ".\\mylexer.l"
return GT;
#line 332 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 95 ".\\mylexer.l"
return LT;
#line 339 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 96 ".\\mylexer.l"
return GE;
#line 346 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 97 ".\\mylexer.l"
return LE;
#line 353 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 98 ".\\mylexer.l"
return NEQ;
#line 360 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 101 ".\\mylexer.l"
return AND;
#line 367 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 102 ".\\mylexer.l"
return OR;
#line 374 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 103 ".\\mylexer.l"
return OPPOSITE;
#line 381 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 106 ".\\mylexer.l"
return IF;
#line 388 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 107 ".\\mylexer.l"
return ELSE;
#line 395 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 108 ".\\mylexer.l"
return WHILE;
#line 402 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 109 ".\\mylexer.l"
return FOR;
#line 409 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 110 ".\\mylexer.l"
return BREAK;
#line 416 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 111 ".\\mylexer.l"
return RETURN;
#line 423 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 112 ".\\mylexer.l"
return CIN;
#line 430 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 113 ".\\mylexer.l"
return COUT;
#line 437 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 116 ".\\mylexer.l"
return MAIN;
#line 444 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 117 ".\\mylexer.l"
return ASSIGN;
#line 451 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 118 ".\\mylexer.l"
return LBRACE;
#line 458 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 119 ".\\mylexer.l"
return RBRACE;
#line 465 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 120 ".\\mylexer.l"
return LPRACE;
#line 472 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 121 ".\\mylexer.l"
return RPRACE;
#line 479 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 122 ".\\mylexer.l"
return LSBRACE;
#line 486 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 123 ".\\mylexer.l"
return RSBRACE;
#line 493 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 124 ".\\mylexer.l"
return COMMA;
#line 500 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 125 ".\\mylexer.l"
return SIMICOLON;
#line 507 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 126 ".\\mylexer.l"
return COLON;
#line 514 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 129 ".\\mylexer.l"

            //yylval->address = -1;
			   //yylval->address = tree.search_table(yytext);
           
            strcpy(yylval->attr.name,yytext);
            yylval->type.exp_type = id;
            return ID;
            
#line 528 "mylexer.cpp"
		}
		break;
#line 137 ".\\mylexer.l"
            
#line 533 "mylexer.cpp"
	case 52:
		{
#line 138 ".\\mylexer.l"
 
               yylval->attr.value = atof(yytext);
               return NUMBER;
            
#line 541 "mylexer.cpp"
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

	yytransitionmax = 219;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 42, 13 },
		{ 0, 13 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 71, 71 },
		{ 3, 3 },
		{ 88, 68 },
		{ 43, 14 },
		{ 43, 88 },
		{ 65, 33 },
		{ 61, 30 },
		{ 70, 68 },
		{ 44, 14 },
		{ 0, 45 },
		{ 3, 1 },
		{ 5, 1 },
		{ 46, 71 },
		{ 0, 13 },
		{ 62, 30 },
		{ 6, 1 },
		{ 7, 1 },
		{ 100, 88 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 3, 3 },
		{ 14, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 0, 45 },
		{ 0, 100 },
		{ 52, 25 },
		{ 46, 71 },
		{ 0, 13 },
		{ 53, 25 },
		{ 72, 46 },
		{ 59, 29 },
		{ 72, 46 },
		{ 68, 100 },
		{ 60, 29 },
		{ 66, 34 },
		{ 45, 15 },
		{ 69, 100 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 67, 36 },
		{ 54, 26 },
		{ 55, 26 },
		{ 70, 44 },
		{ 22, 1 },
		{ 41, 11 },
		{ 23, 1 },
		{ 24, 1 },
		{ 56, 26 },
		{ 47, 18 },
		{ 48, 18 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 29, 1 },
		{ 50, 20 },
		{ 51, 20 },
		{ 30, 1 },
		{ 39, 5 },
		{ 74, 52 },
		{ 75, 53 },
		{ 31, 1 },
		{ 76, 54 },
		{ 77, 55 },
		{ 78, 56 },
		{ 79, 57 },
		{ 32, 1 },
		{ 80, 58 },
		{ 81, 59 },
		{ 82, 60 },
		{ 33, 1 },
		{ 34, 1 },
		{ 83, 62 },
		{ 84, 63 },
		{ 85, 64 },
		{ 35, 1 },
		{ 36, 1 },
		{ 37, 1 },
		{ 38, 1 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 86, 65 },
		{ 87, 66 },
		{ 57, 27 },
		{ 88, 69 },
		{ 58, 28 },
		{ 49, 19 },
		{ 89, 74 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 90, 75 },
		{ 91, 76 },
		{ 92, 78 },
		{ 93, 79 },
		{ 21, 107 },
		{ 94, 80 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 21, 107 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 95, 81 },
		{ 96, 84 },
		{ 97, 85 },
		{ 98, 86 },
		{ 99, 87 },
		{ 40, 7 },
		{ 101, 90 },
		{ 102, 93 },
		{ 103, 95 },
		{ 104, 97 },
		{ 105, 99 },
		{ 63, 31 },
		{ 106, 102 },
		{ 107, 104 },
		{ 64, 32 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 107, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 6, 1 },
		{ 0, 0, 2 },
		{ 0, 37, 31 },
		{ 0, 0, 14 },
		{ 0, 171, 17 },
		{ 0, 0, 44 },
		{ 0, 0, 45 },
		{ 0, 0, 12 },
		{ 0, 41, 10 },
		{ 0, 0, 48 },
		{ 15, -42, 11 },
		{ 0, -25, 13 },
		{ 71, 21, 52 },
		{ 0, 0, 50 },
		{ 0, 0, 49 },
		{ 0, 28, 25 },
		{ 0, 73, 41 },
		{ 0, 34, 24 },
		{ 107, 0, 51 },
		{ 0, 0, 46 },
		{ 0, 0, 47 },
		{ 0, 0, 19 },
		{ 107, -54, 51 },
		{ 107, -24, 51 },
		{ 107, 20, 51 },
		{ 107, 25, 51 },
		{ 107, -46, 51 },
		{ 107, -82, 51 },
		{ 107, 118, 51 },
		{ 107, 117, 51 },
		{ 107, -92, 51 },
		{ 107, -38, 51 },
		{ 0, 0, 42 },
		{ 0, -45, 18 },
		{ 0, 0, 43 },
		{ 0, 0, 20 },
		{ 0, 0, 28 },
		{ 0, 0, 29 },
		{ 0, 0, 15 },
		{ 0, 0, 16 },
		{ 100, 0, 0 },
		{ -44, 72, 0 },
		{ 71, -46, 0 },
		{ 73, 18, 0 },
		{ 0, 0, 21 },
		{ 0, 0, 27 },
		{ 0, 0, 23 },
		{ 0, 0, 26 },
		{ 0, 0, 22 },
		{ 107, -12, 51 },
		{ 107, -1, 51 },
		{ 107, 5, 51 },
		{ 107, -7, 51 },
		{ 107, -13, 51 },
		{ 107, -12, 51 },
		{ 107, -8, 51 },
		{ 107, -3, 51 },
		{ 107, -5, 51 },
		{ 107, 0, 32 },
		{ 107, -4, 51 },
		{ 107, 8, 51 },
		{ 107, -2, 51 },
		{ 107, 24, 51 },
		{ 107, 25, 51 },
		{ 0, 0, 30 },
		{ -43, -26, 0 },
		{ 100, 90, 0 },
		{ 0, 0, 3 },
		{ 0, -43, 52 },
		{ 73, 0, 0 },
		{ 0, 146, 52 },
		{ 107, 27, 51 },
		{ 107, 65, 51 },
		{ 107, 49, 51 },
		{ 107, 0, 38 },
		{ 107, 48, 51 },
		{ 107, 67, 51 },
		{ 107, 66, 51 },
		{ 107, 107, 51 },
		{ 107, 0, 35 },
		{ 107, 0, 4 },
		{ 107, 95, 51 },
		{ 107, 89, 51 },
		{ 107, 107, 51 },
		{ 107, 100, 51 },
		{ 69, -16, 0 },
		{ 107, 0, 8 },
		{ 107, 103, 51 },
		{ 107, 0, 7 },
		{ 107, 0, 39 },
		{ 107, 103, 51 },
		{ 107, 0, 33 },
		{ 107, 96, 51 },
		{ 107, 0, 40 },
		{ 107, 99, 51 },
		{ 107, 0, 9 },
		{ 107, 113, 51 },
		{ -43, 22, 3 },
		{ 107, 0, 36 },
		{ 107, 115, 51 },
		{ 107, 0, 6 },
		{ 107, 107, 51 },
		{ 107, 0, 34 },
		{ 107, 0, 5 },
		{ 0, 71, 37 }
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
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 145 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section


