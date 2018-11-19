/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 60 of your 30 day trial period.
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
* Date: 11/20/18
* Time: 00:41:10
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
// Parse_tree tree;
Tree_node node;
Symbol_table table;

#line 58 "mylexer.cpp"
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

#line 82 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 39 ".\\mylexer.l"

	// place any extra cleanup code here

#line 94 "mylexer.cpp"
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

#line 165 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 64 ".\\mylexer.l"
/*do nothing*/
#line 172 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 65 ".\\mylexer.l"

#line 179 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 67 ".\\mylexer.l"
return INT;
#line 186 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 68 ".\\mylexer.l"
return DOUBLE;
#line 193 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 69 ".\\mylexer.l"
return FLOAT;
#line 200 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 70 ".\\mylexer.l"
return CHAR;
#line 207 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 71 ".\\mylexer.l"
return BOOL;
#line 214 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 72 ".\\mylexer.l"
return VOID;
#line 221 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 75 ".\\mylexer.l"
return PLUS;
#line 228 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 76 ".\\mylexer.l"
return MINUS;
#line 235 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 77 ".\\mylexer.l"
return MUL;
#line 242 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 78 ".\\mylexer.l"
return DIV;
#line 249 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 79 ".\\mylexer.l"
return MOD;
#line 256 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 80 ".\\mylexer.l"
return INC;
#line 263 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 81 ".\\mylexer.l"
return DEC;
#line 270 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 82 ".\\mylexer.l"
return INAD;
#line 277 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 83 ".\\mylexer.l"
return IOR;
#line 284 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 84 ".\\mylexer.l"
return XOR;
#line 291 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 85 ".\\mylexer.l"
return NOT;
#line 298 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 86 ".\\mylexer.l"
return SHL;
#line 305 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 87 ".\\mylexer.l"
return SHR;
#line 312 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 90 ".\\mylexer.l"
return EQ;
#line 319 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 91 ".\\mylexer.l"
return GT;
#line 326 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 92 ".\\mylexer.l"
return LT;
#line 333 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 93 ".\\mylexer.l"
return GE;
#line 340 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 94 ".\\mylexer.l"
return LE;
#line 347 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 95 ".\\mylexer.l"
return NEQ;
#line 354 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 98 ".\\mylexer.l"
return AND;
#line 361 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 99 ".\\mylexer.l"
return OR;
#line 368 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 100 ".\\mylexer.l"
return OPPOSITE;
#line 375 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 103 ".\\mylexer.l"
return IF;
#line 382 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 104 ".\\mylexer.l"
return ELSE;
#line 389 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 105 ".\\mylexer.l"
return WHILE;
#line 396 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 106 ".\\mylexer.l"
return FOR;
#line 403 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 107 ".\\mylexer.l"
return BREAK;
#line 410 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 108 ".\\mylexer.l"
return RETURN;
#line 417 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 111 ".\\mylexer.l"
return MAIN;
#line 424 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 112 ".\\mylexer.l"
return ASSIGN;
#line 431 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 113 ".\\mylexer.l"
return LBRACE;
#line 438 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 114 ".\\mylexer.l"
return RBRACE;
#line 445 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 115 ".\\mylexer.l"
return LPRACE;
#line 452 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 116 ".\\mylexer.l"
return RPRACE;
#line 459 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 117 ".\\mylexer.l"
return LSBRACE;
#line 466 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 118 ".\\mylexer.l"
return RSBRACE;
#line 473 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 119 ".\\mylexer.l"
return COMMA;
#line 480 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 120 ".\\mylexer.l"
return SIMICOLON;
#line 487 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 121 ".\\mylexer.l"
return COLON;
#line 494 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 124 ".\\mylexer.l"

               //通过yylval将id在符号表中的地址传给.y
               yylval = table.search_table(yytext);//不在符号表中就填入
               return ID;
            
#line 505 "mylexer.cpp"
		}
		break;
#line 129 ".\\mylexer.l"
            
            //yyleng=strlen(yytext)
#line 511 "mylexer.cpp"
	case 49:
		{
#line 131 ".\\mylexer.l"
 
               yylval = atof(yytext);
               return NUMBER;
            
#line 519 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 136 ".\\mylexer.l"
return UNKNOWN;
#line 526 "mylexer.cpp"
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

	yytransitionmax = 258;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 4, 1 },
		{ 4, 4 },
		{ 4, 4 },
		{ 43, 84 },
		{ 0, 45 },
		{ 0, 95 },
		{ 59, 30 },
		{ 84, 66 },
		{ 52, 25 },
		{ 62, 32 },
		{ 43, 14 },
		{ 53, 25 },
		{ 68, 66 },
		{ 66, 95 },
		{ 60, 30 },
		{ 44, 14 },
		{ 95, 84 },
		{ 67, 95 },
		{ 57, 29 },
		{ 50, 20 },
		{ 51, 20 },
		{ 58, 29 },
		{ 4, 1 },
		{ 5, 1 },
		{ 4, 4 },
		{ 47, 18 },
		{ 48, 18 },
		{ 6, 1 },
		{ 7, 1 },
		{ 63, 33 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 0, 45 },
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
		{ 64, 34 },
		{ 65, 36 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 22, 1 },
		{ 68, 44 },
		{ 23, 1 },
		{ 24, 1 },
		{ 21, 1 },
		{ 40, 7 },
		{ 21, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 28, 1 },
		{ 29, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 30, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 31, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 32, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 33, 1 },
		{ 34, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 21, 1 },
		{ 35, 1 },
		{ 36, 1 },
		{ 37, 1 },
		{ 38, 1 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 70, 46 },
		{ 41, 11 },
		{ 70, 46 },
		{ 72, 52 },
		{ 73, 53 },
		{ 74, 54 },
		{ 75, 55 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 76, 56 },
		{ 77, 57 },
		{ 78, 58 },
		{ 79, 60 },
		{ 21, 102 },
		{ 80, 61 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 21, 102 },
		{ 42, 13 },
		{ 0, 13 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
		{ 69, 69 },
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
		{ 81, 62 },
		{ 46, 69 },
		{ 0, 13 },
		{ 45, 15 },
		{ 82, 63 },
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
		{ 83, 64 },
		{ 54, 26 },
		{ 84, 67 },
		{ 55, 27 },
		{ 56, 28 },
		{ 85, 72 },
		{ 86, 73 },
		{ 87, 74 },
		{ 88, 75 },
		{ 89, 76 },
		{ 90, 77 },
		{ 91, 80 },
		{ 92, 81 },
		{ 93, 82 },
		{ 94, 83 },
		{ 39, 5 },
		{ 96, 86 },
		{ 97, 88 },
		{ 46, 69 },
		{ 0, 13 },
		{ 98, 90 },
		{ 99, 92 },
		{ 100, 94 },
		{ 49, 19 },
		{ 101, 97 },
		{ 102, 99 },
		{ 61, 31 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 50 },
		{ 0, -6, 1 },
		{ 0, 185, 30 },
		{ 0, 0, 13 },
		{ 0, 50, 16 },
		{ 0, 0, 41 },
		{ 0, 0, 42 },
		{ 0, 0, 11 },
		{ 0, 87, 9 },
		{ 0, 0, 45 },
		{ 15, 149, 10 },
		{ 0, -30, 12 },
		{ 69, 173, 49 },
		{ 0, 0, 47 },
		{ 0, 0, 46 },
		{ 0, -33, 24 },
		{ 0, 193, 38 },
		{ 0, -40, 23 },
		{ 102, 0, 48 },
		{ 0, 0, 43 },
		{ 0, 0, 44 },
		{ 0, 0, 18 },
		{ 102, -101, 48 },
		{ 102, 128, 48 },
		{ 102, 123, 48 },
		{ 102, 127, 48 },
		{ 102, -88, 48 },
		{ 102, -94, 48 },
		{ 102, 160, 48 },
		{ 102, -90, 48 },
		{ 102, -80, 48 },
		{ 102, -49, 48 },
		{ 0, 0, 39 },
		{ 0, -68, 17 },
		{ 0, 0, 40 },
		{ 0, 0, 19 },
		{ 0, 0, 27 },
		{ 0, 0, 28 },
		{ 0, 0, 14 },
		{ 0, 0, 15 },
		{ 95, 0, 0 },
		{ -44, 74, 0 },
		{ 69, -63, 0 },
		{ 71, 86, 0 },
		{ 0, 0, 20 },
		{ 0, 0, 26 },
		{ 0, 0, 22 },
		{ 0, 0, 25 },
		{ 0, 0, 21 },
		{ 102, 21, 48 },
		{ 102, 32, 48 },
		{ 102, 37, 48 },
		{ 102, 18, 48 },
		{ 102, 47, 48 },
		{ 102, 52, 48 },
		{ 102, 50, 48 },
		{ 102, 0, 31 },
		{ 102, 49, 48 },
		{ 102, 62, 48 },
		{ 102, 100, 48 },
		{ 102, 115, 48 },
		{ 102, 126, 48 },
		{ 0, 0, 29 },
		{ -43, -33, 0 },
		{ 95, 191, 0 },
		{ 0, 0, 2 },
		{ 0, 148, 49 },
		{ 71, 0, 0 },
		{ 0, 158, 49 },
		{ 102, 128, 48 },
		{ 102, 140, 48 },
		{ 102, 124, 48 },
		{ 102, 141, 48 },
		{ 102, 139, 48 },
		{ 102, 144, 48 },
		{ 102, 0, 34 },
		{ 102, 0, 3 },
		{ 102, 132, 48 },
		{ 102, 126, 48 },
		{ 102, 144, 48 },
		{ 102, 137, 48 },
		{ 67, -29, 0 },
		{ 102, 0, 7 },
		{ 102, 140, 48 },
		{ 102, 0, 6 },
		{ 102, 140, 48 },
		{ 102, 0, 32 },
		{ 102, 135, 48 },
		{ 102, 0, 37 },
		{ 102, 138, 48 },
		{ 102, 0, 8 },
		{ 102, 152, 48 },
		{ -43, -27, 2 },
		{ 102, 0, 35 },
		{ 102, 154, 48 },
		{ 102, 0, 5 },
		{ 102, 146, 48 },
		{ 102, 0, 33 },
		{ 102, 0, 4 },
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
		0,
		0
	};
	yybackup = backup;
}
#line 138 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section


