/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 105 of your 30 day trial period.
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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 01/04/19
* Time: 11:45:16
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

/****************************************************************************
myparser->y
ParserWizard generated YACC file->

Date:2018年11月15日
****************************************************************************/
#include <iostream>
#include <fstream>
#include "mylexer.h"
#include "Tree.h"
// #include<stdio.h>

using namespace std;

TreeNode *node = node->stmt_node(com_stmt);
extern ParseTree tree;

#line 57 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 32 ".\\myparser.y"

	// place any extra initialisation code here

#line 81 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 37 ".\\myparser.y"

	// place any extra cleanup code here

#line 95 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 82 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 6);
#line 205 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 83 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 218 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 84 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 231 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 85 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(7 - 8);
#line 244 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 86 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 257 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 87 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(7 - 8);
#line 270 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 93 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		tree.root = (*(YYSTYPE YYFAR*)yyvalptr);
		if(yyattribute(1 - 1)->type.stmt_type == while_stmt || yyattribute(1 - 1)->type.stmt_type == if_stmt)
			yyattribute(1 - 1)->child[0]->false_label = tree.label_sum++;
			//ofstream fout("code.txt", ios::app);
			//fout << "L" << $1->child[0]->false_label << ":" << endl;
		else if(yyattribute(1 - 1)->type.stmt_type == for_stmt)
			yyattribute(1 - 1)->child[1]->false_label = tree.label_sum++;
	
#line 292 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 104 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->brother = yyattribute(2 - 2);
		node->child[0] = (*(YYSTYPE YYFAR*)yyvalptr);
		tree.root = node; 
		if(yyattribute(1 - 2)->type.stmt_type == for_stmt || yyattribute(1 - 2)->type.stmt_type == while_stmt || yyattribute(1 - 2)->type.stmt_type == if_stmt)
		{
			if(yyattribute(2 - 2)->curr_label <= 0)
				yyattribute(2 - 2)->curr_label = tree.label_sum++;
			yyattribute(1 - 2)->child[0]->false_label = yyattribute(2 - 2)->curr_label;
		}
	
#line 316 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 120 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 329 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 121 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 342 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 122 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 355 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 123 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 368 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 124 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 381 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 125 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 394 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 126 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 407 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 127 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 420 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 133 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = INT;
	
#line 436 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 138 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = DOUBLE;
	
#line 452 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 143 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = FLOAT;
	
#line 468 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 148 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = CHAR;
	
#line 484 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 153 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = BOOL;
	
#line 500 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 158 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = VOID;
	
#line 516 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 165 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 529 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 166 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 542 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 167 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 555 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 169 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = ASSIGN;
	
#line 571 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 178 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = PLUS;
	
#line 587 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 183 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MINUS;
	
#line 603 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 188 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MUL;
	
#line 619 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 193 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DIV;
	
#line 635 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 198 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MOD;
	
#line 651 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 203 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INC;
	
#line 667 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 208 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DEC;
	
#line 683 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 213 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INAD;
	
#line 699 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 218 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = IOR;
	
#line 715 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 223 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = XOR;
	
#line 731 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 228 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NOT;
	
#line 747 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 233 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHL;
	
#line 763 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 238 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHR;
	
#line 779 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 247 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = 276;
	
#line 795 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 252 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GT;
	
#line 811 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 257 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LT;
	
#line 827 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 262 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GE;
	
#line 843 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 267 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LE;
	
#line 859 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 272 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NEQ;
	
#line 875 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 281 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = AND;
	
#line 891 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 286 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OR;
	
#line 907 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 291 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OPPOSITE;
	
#line 923 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 300 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
		strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name, yyattribute(1 - 1)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->address = tree.search_table((*(YYSTYPE YYFAR*)yyvalptr)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = INT;
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = tree.id_type[(*(YYSTYPE YYFAR*)yyvalptr)->address];
	
#line 942 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 308 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
		strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name , yyattribute(1 - 3)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->address = tree.search_table((*(YYSTYPE YYFAR*)yyvalptr)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->brother = yyattribute(3 - 3);
	
#line 960 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 319 ".\\myparser.y"

		yyattribute(2 - 3)->child[0] = yyattribute(1 - 3);
		yyattribute(2 - 3)->child[1] = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
	
#line 977 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 324 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
#line 990 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 326 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(number);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.value = yyattribute(1 - 1)->attr.value;
	
#line 1006 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 330 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1019 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 336 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
		if(yyattribute(3 - 3)->type.exp_type == oper)
		{
			if (yyattribute(3 - 3)->temp_num < 0)
				yyattribute(3 - 3)->temp_num = ++tree.temp_sum;
		}
	
#line 1041 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 347 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1058 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 353 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1075 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 363 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(dec_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(2 - 2);
		yyattribute(2 - 2)->data_type = yyattribute(1 - 2)->data_type;
		TreeNode *temp;
		temp = yyattribute(2 - 2);
		while(temp)
		{
			temp->data_type = yyattribute(1 - 2)->data_type;
			tree.id_type[temp->address] = yyattribute(1 - 2)->data_type;
			temp = temp->brother;
		}
	
#line 1101 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 382 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);
	//	sprintf_s($5->curr_label,sizeof($5->curr_label), "L%d", tree.label_sum++);//拼接函数
		yyattribute(5 - 5)->curr_label = tree.label_sum++;
		(*(YYSTYPE YYFAR*)yyvalptr)->true_label = yyattribute(5 - 5)->curr_label;
	
#line 1121 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 391 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = node->stmt_node(com_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1]->child[0] = yyattribute(6 - 7);
		yyattribute(5 - 7)->curr_label = tree.label_sum++;
		(*(YYSTYPE YYFAR*)yyvalptr)->true_label = yyattribute(5 - 7)->curr_label;
	
#line 1141 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 413 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->curr_label = tree.label_sum++;
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		//$$->child[1] = $6;
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = node->stmt_node(com_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1]->child[0] = yyattribute(6 - 7);
	//	sprintf_s($6->curr_label,sizeof($6->curr_label), "L%d", tree.label_sum++);
		yyattribute(6 - 7)->curr_label = tree.label_sum++;
		yyattribute(3 - 7)->true_label = yyattribute(6 - 7)->curr_label;
	
#line 1164 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 429 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3] = node->stmt_node(com_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]->child[0] = yyattribute(10 - 11);
	//	sprintf_s($10->curr_label,sizeof($10->curr_label), "L%d", tree.label_sum++);
		yyattribute(10 - 11)->curr_label = tree.label_sum++;
		(*(YYSTYPE YYFAR*)yyvalptr)->true_label = yyattribute(10 - 11)->curr_label;
	
#line 1187 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 441 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3] = node->stmt_node(com_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]->child[0] = yyattribute(10 - 11);
	//	sprintf_s($10->curr_label,sizeof($10->curr_label), "L%d", tree.label_sum++);
		yyattribute(10 - 11)->curr_label = tree.label_sum++;
		(*(YYSTYPE YYFAR*)yyvalptr)->true_label = yyattribute(10 - 11)->curr_label;
	
#line 1211 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 458 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(input_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 3);
	
#line 1227 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 463 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(input_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = ENDL;
	
#line 1244 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 473 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(output_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 3);
	
#line 1260 "myparser.cpp"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 478 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(output_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = ENDL;
	
#line 1277 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "error", 256 },
		{ "INT", 257 },
		{ "DOUBLE", 258 },
		{ "FLOAT", 259 },
		{ "CHAR", 260 },
		{ "BOOL", 261 },
		{ "VOID", 262 },
		{ "PLUS", 263 },
		{ "MINUS", 264 },
		{ "MUL", 265 },
		{ "DIV", 266 },
		{ "MOD", 267 },
		{ "INC", 268 },
		{ "DEC", 269 },
		{ "INAD", 270 },
		{ "IOR", 271 },
		{ "XOR", 272 },
		{ "NOT", 273 },
		{ "SHL", 274 },
		{ "SHR", 275 },
		{ "EQ", 276 },
		{ "GT", 277 },
		{ "LT", 278 },
		{ "GE", 279 },
		{ "LE", 280 },
		{ "NEQ", 281 },
		{ "AND", 282 },
		{ "OR", 283 },
		{ "OPPOSITE", 284 },
		{ "IF", 285 },
		{ "WHILE", 287 },
		{ "FOR", 288 },
		{ "CIN", 291 },
		{ "COUT", 292 },
		{ "MAIN", 293 },
		{ "ENDL", 294 },
		{ "ASSIGN", 295 },
		{ "LBRACE", 296 },
		{ "RBRACE", 297 },
		{ "LPRACE", 298 },
		{ "RPRACE", 299 },
		{ "COMMA", 302 },
		{ "SIMICOLON", 303 },
		{ "ID", 305 },
		{ "NUMBER", 306 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: program",
		"program: MAIN LPRACE RPRACE LBRACE code RBRACE",
		"program: MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"program: VOID MAIN LPRACE RPRACE LBRACE code RBRACE",
		"program: VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"program: INT MAIN LPRACE RPRACE LBRACE code RBRACE",
		"program: INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"code: stmt",
		"code: stmt code",
		"stmt: exp SIMICOLON",
		"stmt: asgn_stmt SIMICOLON",
		"stmt: dec_stmt SIMICOLON",
		"stmt: if_stmt",
		"stmt: while_stmt",
		"stmt: for_stmt",
		"stmt: input_stmt SIMICOLON",
		"stmt: output_stmt SIMICOLON",
		"type: INT",
		"type: DOUBLE",
		"type: FLOAT",
		"type: CHAR",
		"type: BOOL",
		"type: VOID",
		"op: ari_op",
		"op: rel_op",
		"op: log_op",
		"op: ASSIGN",
		"ari_op: PLUS",
		"ari_op: MINUS",
		"ari_op: MUL",
		"ari_op: DIV",
		"ari_op: MOD",
		"ari_op: INC",
		"ari_op: DEC",
		"ari_op: INAD",
		"ari_op: IOR",
		"ari_op: XOR",
		"ari_op: NOT",
		"ari_op: SHL",
		"ari_op: SHR",
		"rel_op: EQ",
		"rel_op: GT",
		"rel_op: LT",
		"rel_op: GE",
		"rel_op: LE",
		"rel_op: NEQ",
		"log_op: AND",
		"log_op: OR",
		"log_op: OPPOSITE",
		"id: ID",
		"id: ID COMMA id",
		"exp: exp op exp",
		"exp: LPRACE exp RPRACE",
		"exp: NUMBER",
		"exp: id",
		"asgn_stmt: id ASSIGN exp",
		"asgn_stmt: asgn_stmt COMMA id",
		"asgn_stmt: id ASSIGN asgn_stmt",
		"dec_stmt: type id",
		"if_stmt: IF LPRACE exp RPRACE stmt",
		"if_stmt: IF LPRACE exp RPRACE LBRACE code RBRACE",
		"while_stmt: WHILE LPRACE exp RPRACE LBRACE code RBRACE",
		"for_stmt: FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE code RBRACE",
		"for_stmt: FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE code RBRACE",
		"input_stmt: CIN SHR id",
		"input_stmt: CIN SHR id SHR ENDL",
		"output_stmt: COUT SHL id",
		"output_stmt: COUT SHL id SHL ENDL"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 6, 0 },
		{ 1, 7, 1 },
		{ 1, 7, 2 },
		{ 1, 8, 3 },
		{ 1, 7, 4 },
		{ 1, 8, 5 },
		{ 2, 1, 6 },
		{ 2, 2, 7 },
		{ 3, 2, 8 },
		{ 3, 2, 9 },
		{ 3, 2, 10 },
		{ 3, 1, 11 },
		{ 3, 1, 12 },
		{ 3, 1, 13 },
		{ 3, 2, 14 },
		{ 3, 2, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 4, 1, 19 },
		{ 4, 1, 20 },
		{ 4, 1, 21 },
		{ 5, 1, 22 },
		{ 5, 1, 23 },
		{ 5, 1, 24 },
		{ 5, 1, 25 },
		{ 6, 1, 26 },
		{ 6, 1, 27 },
		{ 6, 1, 28 },
		{ 6, 1, 29 },
		{ 6, 1, 30 },
		{ 6, 1, 31 },
		{ 6, 1, 32 },
		{ 6, 1, 33 },
		{ 6, 1, 34 },
		{ 6, 1, 35 },
		{ 6, 1, 36 },
		{ 6, 1, 37 },
		{ 6, 1, 38 },
		{ 7, 1, 39 },
		{ 7, 1, 40 },
		{ 7, 1, 41 },
		{ 7, 1, 42 },
		{ 7, 1, 43 },
		{ 7, 1, 44 },
		{ 8, 1, 45 },
		{ 8, 1, 46 },
		{ 8, 1, 47 },
		{ 9, 1, 48 },
		{ 9, 3, 49 },
		{ 10, 3, 50 },
		{ 10, 3, 51 },
		{ 10, 1, 52 },
		{ 10, 1, 53 },
		{ 11, 3, 54 },
		{ 11, 3, 55 },
		{ 11, 3, 56 },
		{ 12, 2, 57 },
		{ 13, 5, 58 },
		{ 13, 7, 59 },
		{ 14, 7, 60 },
		{ 15, 11, 61 },
		{ 15, 11, 62 },
		{ 16, 3, 63 },
		{ 16, 5, 64 },
		{ 17, 3, 65 },
		{ 17, 5, 66 }
	};
	yyreduction = reduction;

	yytokenaction_size = 163;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 138, YYAT_SHIFT, 65 },
		{ 138, YYAT_SHIFT, 66 },
		{ 138, YYAT_SHIFT, 67 },
		{ 138, YYAT_SHIFT, 68 },
		{ 138, YYAT_SHIFT, 69 },
		{ 138, YYAT_SHIFT, 70 },
		{ 138, YYAT_SHIFT, 71 },
		{ 138, YYAT_SHIFT, 72 },
		{ 138, YYAT_SHIFT, 73 },
		{ 138, YYAT_SHIFT, 74 },
		{ 138, YYAT_SHIFT, 75 },
		{ 138, YYAT_SHIFT, 76 },
		{ 138, YYAT_SHIFT, 77 },
		{ 138, YYAT_SHIFT, 78 },
		{ 138, YYAT_SHIFT, 79 },
		{ 138, YYAT_SHIFT, 80 },
		{ 138, YYAT_SHIFT, 81 },
		{ 138, YYAT_SHIFT, 82 },
		{ 138, YYAT_SHIFT, 83 },
		{ 138, YYAT_SHIFT, 84 },
		{ 138, YYAT_SHIFT, 85 },
		{ 138, YYAT_SHIFT, 86 },
		{ 134, YYAT_SHIFT, 34 },
		{ 0, YYAT_SHIFT, 1 },
		{ 9, YYAT_SHIFT, 14 },
		{ 8, YYAT_SHIFT, 12 },
		{ 7, YYAT_SHIFT, 10 },
		{ 107, YYAT_SHIFT, 98 },
		{ 0, YYAT_SHIFT, 2 },
		{ 128, YYAT_ERROR, 0 },
		{ 134, YYAT_SHIFT, 36 },
		{ 144, YYAT_SHIFT, 146 },
		{ 138, YYAT_SHIFT, 87 },
		{ 128, YYAT_SHIFT, 134 },
		{ 143, YYAT_SHIFT, 145 },
		{ 107, YYAT_SHIFT, 121 },
		{ 138, YYAT_SHIFT, 140 },
		{ 115, YYAT_SHIFT, 65 },
		{ 115, YYAT_SHIFT, 66 },
		{ 115, YYAT_SHIFT, 67 },
		{ 115, YYAT_SHIFT, 68 },
		{ 115, YYAT_SHIFT, 69 },
		{ 115, YYAT_SHIFT, 70 },
		{ 115, YYAT_SHIFT, 71 },
		{ 115, YYAT_SHIFT, 72 },
		{ 115, YYAT_SHIFT, 73 },
		{ 115, YYAT_SHIFT, 74 },
		{ 115, YYAT_SHIFT, 75 },
		{ 115, YYAT_SHIFT, 76 },
		{ 115, YYAT_SHIFT, 77 },
		{ 115, YYAT_SHIFT, 78 },
		{ 115, YYAT_SHIFT, 79 },
		{ 115, YYAT_SHIFT, 80 },
		{ 115, YYAT_SHIFT, 81 },
		{ 115, YYAT_SHIFT, 82 },
		{ 115, YYAT_SHIFT, 83 },
		{ 115, YYAT_SHIFT, 84 },
		{ 115, YYAT_SHIFT, 85 },
		{ 115, YYAT_SHIFT, 86 },
		{ 0, YYAT_SHIFT, 3 },
		{ 140, YYAT_SHIFT, 142 },
		{ 9, YYAT_SHIFT, 15 },
		{ 8, YYAT_SHIFT, 13 },
		{ 7, YYAT_SHIFT, 11 },
		{ 106, YYAT_SHIFT, 62 },
		{ 106, YYAT_SHIFT, 120 },
		{ 139, YYAT_SHIFT, 141 },
		{ 137, YYAT_SHIFT, 139 },
		{ 132, YYAT_SHIFT, 136 },
		{ 115, YYAT_SHIFT, 87 },
		{ 113, YYAT_SHIFT, 65 },
		{ 113, YYAT_SHIFT, 66 },
		{ 113, YYAT_SHIFT, 67 },
		{ 113, YYAT_SHIFT, 68 },
		{ 113, YYAT_SHIFT, 69 },
		{ 113, YYAT_SHIFT, 70 },
		{ 113, YYAT_SHIFT, 71 },
		{ 113, YYAT_SHIFT, 72 },
		{ 113, YYAT_SHIFT, 73 },
		{ 113, YYAT_SHIFT, 74 },
		{ 113, YYAT_SHIFT, 75 },
		{ 113, YYAT_SHIFT, 76 },
		{ 113, YYAT_SHIFT, 77 },
		{ 113, YYAT_SHIFT, 78 },
		{ 113, YYAT_SHIFT, 79 },
		{ 113, YYAT_SHIFT, 80 },
		{ 113, YYAT_SHIFT, 81 },
		{ 113, YYAT_SHIFT, 82 },
		{ 113, YYAT_SHIFT, 83 },
		{ 113, YYAT_SHIFT, 84 },
		{ 113, YYAT_SHIFT, 85 },
		{ 113, YYAT_SHIFT, 86 },
		{ 42, YYAT_SHIFT, 23 },
		{ 42, YYAT_SHIFT, 24 },
		{ 42, YYAT_SHIFT, 25 },
		{ 42, YYAT_SHIFT, 26 },
		{ 42, YYAT_SHIFT, 27 },
		{ 42, YYAT_SHIFT, 28 },
		{ 131, YYAT_SHIFT, 135 },
		{ 127, YYAT_SHIFT, 133 },
		{ 123, YYAT_SHIFT, 130 },
		{ 122, YYAT_SHIFT, 129 },
		{ 113, YYAT_SHIFT, 87 },
		{ 119, YYAT_SHIFT, 126 },
		{ 142, YYAT_SHIFT, 23 },
		{ 142, YYAT_SHIFT, 24 },
		{ 142, YYAT_SHIFT, 25 },
		{ 142, YYAT_SHIFT, 26 },
		{ 142, YYAT_SHIFT, 27 },
		{ 142, YYAT_SHIFT, 28 },
		{ 118, YYAT_SHIFT, 124 },
		{ 109, YYAT_SHIFT, 123 },
		{ 108, YYAT_SHIFT, 122 },
		{ 105, YYAT_SHIFT, 119 },
		{ 104, YYAT_SHIFT, 118 },
		{ 101, YYAT_SHIFT, 117 },
		{ 99, YYAT_SHIFT, 116 },
		{ 62, YYAT_SHIFT, 35 },
		{ 59, YYAT_SHIFT, 110 },
		{ 53, YYAT_SHIFT, 103 },
		{ 42, YYAT_SHIFT, 29 },
		{ 52, YYAT_SHIFT, 102 },
		{ 42, YYAT_SHIFT, 30 },
		{ 42, YYAT_SHIFT, 31 },
		{ 50, YYAT_SHIFT, 100 },
		{ 48, YYAT_SHIFT, 98 },
		{ 42, YYAT_SHIFT, 32 },
		{ 42, YYAT_SHIFT, 33 },
		{ 47, YYAT_SHIFT, 97 },
		{ 44, YYAT_SHIFT, 95 },
		{ 41, YYAT_SHIFT, 93 },
		{ 40, YYAT_SHIFT, 88 },
		{ 142, YYAT_SHIFT, 29 },
		{ 42, YYAT_SHIFT, 34 },
		{ 142, YYAT_SHIFT, 30 },
		{ 142, YYAT_SHIFT, 31 },
		{ 38, YYAT_SHIFT, 64 },
		{ 37, YYAT_SHIFT, 63 },
		{ 142, YYAT_SHIFT, 32 },
		{ 142, YYAT_SHIFT, 33 },
		{ 42, YYAT_SHIFT, 35 },
		{ 42, YYAT_SHIFT, 36 },
		{ 35, YYAT_SHIFT, 61 },
		{ 33, YYAT_SHIFT, 58 },
		{ 32, YYAT_SHIFT, 57 },
		{ 31, YYAT_SHIFT, 56 },
		{ 30, YYAT_SHIFT, 55 },
		{ 29, YYAT_SHIFT, 54 },
		{ 20, YYAT_SHIFT, 51 },
		{ 18, YYAT_SHIFT, 49 },
		{ 16, YYAT_SHIFT, 22 },
		{ 15, YYAT_SHIFT, 21 },
		{ 14, YYAT_SHIFT, 20 },
		{ 13, YYAT_SHIFT, 19 },
		{ 12, YYAT_SHIFT, 18 },
		{ 11, YYAT_SHIFT, 17 },
		{ 10, YYAT_SHIFT, 16 },
		{ 6, YYAT_SHIFT, 9 },
		{ 5, YYAT_SHIFT, 8 },
		{ 4, YYAT_ACCEPT, 0 },
		{ 3, YYAT_SHIFT, 7 },
		{ 2, YYAT_SHIFT, 6 },
		{ 1, YYAT_SHIFT, 5 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -234, 1, YYAT_ERROR, 0 },
		{ -131, 1, YYAT_ERROR, 0 },
		{ -132, 1, YYAT_ERROR, 0 },
		{ -138, 1, YYAT_ERROR, 0 },
		{ 159, 1, YYAT_ERROR, 0 },
		{ -140, 1, YYAT_ERROR, 0 },
		{ -141, 1, YYAT_ERROR, 0 },
		{ -236, 1, YYAT_ERROR, 0 },
		{ -237, 1, YYAT_ERROR, 0 },
		{ -238, 1, YYAT_ERROR, 0 },
		{ -143, 1, YYAT_ERROR, 0 },
		{ -141, 1, YYAT_ERROR, 0 },
		{ -145, 1, YYAT_ERROR, 0 },
		{ -143, 1, YYAT_ERROR, 0 },
		{ -147, 1, YYAT_ERROR, 0 },
		{ -145, 1, YYAT_ERROR, 0 },
		{ -146, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -147, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ -151, 1, YYAT_ERROR, 0 },
		{ -152, 1, YYAT_ERROR, 0 },
		{ -153, 1, YYAT_ERROR, 0 },
		{ -131, 1, YYAT_ERROR, 0 },
		{ -131, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ -160, 1, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ -166, 1, YYAT_DEFAULT, 106 },
		{ -167, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -172, 1, YYAT_DEFAULT, 128 },
		{ -167, 1, YYAT_ERROR, 0 },
		{ -165, 1, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ -174, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_DEFAULT, 62 },
		{ -175, 1, YYAT_ERROR, 0 },
		{ -170, 1, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -173, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -176, 1, YYAT_ERROR, 0 },
		{ -178, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_DEFAULT, 62 },
		{ 0, 0, YYAT_DEFAULT, 62 },
		{ 0, 0, YYAT_DEFAULT, 62 },
		{ -181, 1, YYAT_DEFAULT, 138 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_DEFAULT, 62 },
		{ -188, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ -181, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -182, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -185, 1, YYAT_DEFAULT, 138 },
		{ -186, 1, YYAT_DEFAULT, 138 },
		{ -238, 1, YYAT_ERROR, 0 },
		{ -268, 1, YYAT_ERROR, 0 },
		{ -163, 1, YYAT_REDUCE, 64 },
		{ -163, 1, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ -193, 1, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ -226, 1, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ -186, 1, YYAT_DEFAULT, 142 },
		{ -193, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ -193, 1, YYAT_ERROR, 0 },
		{ -194, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -204, 1, YYAT_DEFAULT, 128 },
		{ -270, 1, YYAT_DEFAULT, 138 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ -199, 1, YYAT_ERROR, 0 },
		{ -229, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 134 },
		{ -276, 1, YYAT_DEFAULT, 62 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ -232, 1, YYAT_DEFAULT, 138 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -230, 1, YYAT_ERROR, 0 },
		{ -236, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -153, 1, YYAT_DEFAULT, 134 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -266, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 63 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 47;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 142, 144 },
		{ 142, 42 },
		{ 142, 46 },
		{ 138, 89 },
		{ 138, 90 },
		{ 138, 92 },
		{ 138, 91 },
		{ 141, 143 },
		{ 142, 40 },
		{ 142, 37 },
		{ 142, 38 },
		{ 142, 39 },
		{ 142, 45 },
		{ 142, 43 },
		{ 142, 44 },
		{ 142, 47 },
		{ 98, 48 },
		{ 98, 115 },
		{ 98, 114 },
		{ 56, 107 },
		{ 133, 137 },
		{ 56, 106 },
		{ 134, 60 },
		{ 134, 138 },
		{ 118, -1 },
		{ 118, 125 },
		{ 126, 132 },
		{ 124, 131 },
		{ 121, 128 },
		{ 120, 127 },
		{ 89, 113 },
		{ 62, 112 },
		{ 61, 111 },
		{ 58, 109 },
		{ 57, 108 },
		{ 55, 105 },
		{ 54, 104 },
		{ 51, 101 },
		{ 49, 99 },
		{ 46, 96 },
		{ 42, 94 },
		{ 34, 59 },
		{ 22, 53 },
		{ 21, 52 },
		{ 19, 50 },
		{ 17, 41 },
		{ 0, 4 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 45, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 43, 142 },
		{ 0, -1 },
		{ 42, 142 },
		{ 0, -1 },
		{ 41, 142 },
		{ 40, 142 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 31, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 138 },
		{ 0, -1 },
		{ 38, 142 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 30, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 36, 142 },
		{ 0, -1 },
		{ 35, 142 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, 134 },
		{ 25, 134 },
		{ 10, -1 },
		{ 25, -1 },
		{ 24, -1 },
		{ 0, 138 },
		{ 0, -1 },
		{ 23, -1 },
		{ 22, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 7, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 138 },
		{ 0, 138 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 138 },
		{ 0, -1 },
		{ 0, 138 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 142 },
		{ 0, -1 },
		{ 19, 134 },
		{ 18, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 25, 142 },
		{ 0, -1 },
		{ 24, 142 },
		{ 0, 138 },
		{ 0, 138 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 10, 134 },
		{ 13, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 138 },
		{ -2, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 5, 142 },
		{ -2, 98 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 484 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			ofstream fout1("error.txt");	
			fout1.close();//清空error文件
			ofstream fout2("code.txt");	
			fout2.close();//清空code文件

			tree.gen_header(); //输出汇编代码头
			freopen("input.txt", "r",stdin);
			n = parser.yyparse();
			freopen("CON", "r", stdin);
			
			tree.print_tree(tree.root);
			tree.gen_dec(tree.root);
			tree.gen_code(tree.root);
		}
	}
	system("pause");
	return n;
}


