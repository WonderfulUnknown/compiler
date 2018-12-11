/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 82 of your 30 day trial period.
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
* Date: 12/11/18
* Time: 19:07:11
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

using namespace std;

//TreeNode *node = new TreeNode;
TreeNode *node = node->stmt_node(com_stmt);
//TreeNode *temp;
extern ParseTree tree;

#line 58 "myparser.cpp"
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
#line 33 ".\\myparser.y"

	// place any extra initialisation code here

#line 82 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 38 ".\\myparser.y"

	// place any extra cleanup code here

#line 96 "myparser.cpp"
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
#line 83 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(5 - 6);
#line 206 "myparser.cpp"
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
#line 84 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 219 "myparser.cpp"
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
#line 85 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 232 "myparser.cpp"
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
#line 86 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(7 - 8);
#line 245 "myparser.cpp"
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
#line 87 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(6 - 7);
#line 258 "myparser.cpp"
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
#line 88 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(7 - 8);
#line 271 "myparser.cpp"
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
#line 94 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		tree.root = (*(YYSTYPE YYFAR*)yyvalptr);//只有一个语句时根结点
	
#line 287 "myparser.cpp"
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
#line 100 ".\\myparser.y"

		// $$ = node->stmt_node(com_stmt);
		// $$->child[0] = $1;
		// $$->child[1] = $2;

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->brother = yyattribute(1 - 2);
		
		node->child[0] = (*(YYSTYPE YYFAR*)yyvalptr);
		// tree.root = $$;
		tree.root = node;
	
#line 311 "myparser.cpp"
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
#line 116 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 324 "myparser.cpp"
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
#line 117 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 337 "myparser.cpp"
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
#line 118 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 350 "myparser.cpp"
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
#line 119 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 363 "myparser.cpp"
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
#line 120 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 376 "myparser.cpp"
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
#line 121 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 389 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 129 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = INT;
	
#line 405 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 134 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = DOUBLE;
	
#line 421 "myparser.cpp"
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
#line 139 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = FLOAT;
	
#line 437 "myparser.cpp"
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
#line 144 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = CHAR;
	
#line 453 "myparser.cpp"
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
#line 149 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = BOOL;
	
#line 469 "myparser.cpp"
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
#line 154 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = VOID;
	
#line 485 "myparser.cpp"
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
#line 161 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 498 "myparser.cpp"
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
#line 162 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 511 "myparser.cpp"
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
#line 163 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 524 "myparser.cpp"
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
#line 165 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = ASSIGN;
	
#line 540 "myparser.cpp"
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
#line 174 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = PLUS;
	
#line 556 "myparser.cpp"
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
#line 179 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MINUS;
	
#line 572 "myparser.cpp"
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
#line 184 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MUL;
	
#line 588 "myparser.cpp"
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
#line 189 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DIV;
	
#line 604 "myparser.cpp"
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
#line 194 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MOD;
	
#line 620 "myparser.cpp"
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
#line 199 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INC;
	
#line 636 "myparser.cpp"
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
#line 204 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DEC;
	
#line 652 "myparser.cpp"
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
#line 209 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INAD;
	
#line 668 "myparser.cpp"
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
#line 214 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = IOR;
	
#line 684 "myparser.cpp"
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
#line 219 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = XOR;
	
#line 700 "myparser.cpp"
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
#line 224 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NOT;
	
#line 716 "myparser.cpp"
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
#line 229 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHL;
	
#line 732 "myparser.cpp"
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
#line 234 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHR;
	
#line 748 "myparser.cpp"
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
#line 243 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = 276;
	
#line 764 "myparser.cpp"
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
#line 248 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GT;
	
#line 780 "myparser.cpp"
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
#line 253 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LT;
	
#line 796 "myparser.cpp"
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
#line 258 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GE;
	
#line 812 "myparser.cpp"
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
#line 263 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LE;
	
#line 828 "myparser.cpp"
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
#line 268 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NEQ;
	
#line 844 "myparser.cpp"
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
#line 277 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = AND;
	
#line 860 "myparser.cpp"
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
#line 282 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OR;
	
#line 876 "myparser.cpp"
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
#line 287 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OPPOSITE;
	
#line 892 "myparser.cpp"
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
#line 296 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
		strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name, yyattribute(1 - 1)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->data_type = INT;
		//$$->address = $1->address;
	
#line 910 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 303 ".\\myparser.y"
		
		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
		strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name , yyattribute(3 - 3)->attr.name);
		(*(YYSTYPE YYFAR*)yyvalptr)->brother = yyattribute(1 - 3);
	
#line 927 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 322 ".\\myparser.y"


		yyattribute(2 - 3)->child[0] = yyattribute(1 - 3);
		yyattribute(2 - 3)->child[1] = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
	
#line 945 "myparser.cpp"
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
#line 328 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
#line 958 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 330 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(number);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.value = yyattribute(1 - 1)->attr.value;
	
#line 974 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 334 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 987 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 340 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1004 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 346 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1021 "myparser.cpp"
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
#line 352 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1038 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 361 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(dec_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(2 - 2);
	
#line 1055 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 376 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);
	
#line 1072 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 413 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 1089 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 419 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 1106 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 432 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);
	
#line 1125 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 440 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);	
	
#line 1144 "myparser.cpp"
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
		{ "MAIN", 291 },
		{ "ASSIGN", 292 },
		{ "LBRACE", 293 },
		{ "RBRACE", 294 },
		{ "LPRACE", 295 },
		{ "RPRACE", 296 },
		{ "COMMA", 299 },
		{ "SIMICOLON", 300 },
		{ "ID", 302 },
		{ "NUMBER", 303 },
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
		"code: code stmt",
		"stmt: exp SIMICOLON",
		"stmt: asgn_stmt SIMICOLON",
		"stmt: dec_stmt SIMICOLON",
		"stmt: if_stmt",
		"stmt: while_stmt",
		"stmt: for_stmt",
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
		"id: id COMMA ID",
		"exp: exp op exp",
		"exp: LPRACE exp RPRACE",
		"exp: NUMBER",
		"exp: id",
		"asgn_stmt: id ASSIGN exp",
		"asgn_stmt: asgn_stmt COMMA id",
		"asgn_stmt: id ASSIGN asgn_stmt",
		"dec_stmt: type id",
		"if_stmt: IF LPRACE exp RPRACE stmt",
		"while_stmt: WHILE LPRACE exp RPRACE LBRACE stmt RBRACE",
		"while_stmt: WHILE LPRACE id RPRACE LBRACE stmt RBRACE",
		"for_stmt: FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE",
		"for_stmt: FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE"
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
		{ 4, 1, 14 },
		{ 4, 1, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 4, 1, 19 },
		{ 5, 1, 20 },
		{ 5, 1, 21 },
		{ 5, 1, 22 },
		{ 5, 1, 23 },
		{ 6, 1, 24 },
		{ 6, 1, 25 },
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
		{ 7, 1, 37 },
		{ 7, 1, 38 },
		{ 7, 1, 39 },
		{ 7, 1, 40 },
		{ 7, 1, 41 },
		{ 7, 1, 42 },
		{ 8, 1, 43 },
		{ 8, 1, 44 },
		{ 8, 1, 45 },
		{ 9, 1, 46 },
		{ 9, 3, 47 },
		{ 10, 3, 48 },
		{ 10, 3, 49 },
		{ 10, 1, 50 },
		{ 10, 1, 51 },
		{ 11, 3, 52 },
		{ 11, 3, 53 },
		{ 11, 3, 54 },
		{ 12, 2, 55 },
		{ 13, 5, 56 },
		{ 14, 7, 57 },
		{ 14, 7, 58 },
		{ 15, 11, 59 },
		{ 15, 11, 60 }
	};
	yyreduction = reduction;

	yytokenaction_size = 145;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 126, YYAT_SHIFT, 55 },
		{ 126, YYAT_SHIFT, 56 },
		{ 126, YYAT_SHIFT, 57 },
		{ 126, YYAT_SHIFT, 58 },
		{ 126, YYAT_SHIFT, 59 },
		{ 126, YYAT_SHIFT, 60 },
		{ 126, YYAT_SHIFT, 61 },
		{ 126, YYAT_SHIFT, 62 },
		{ 126, YYAT_SHIFT, 63 },
		{ 126, YYAT_SHIFT, 64 },
		{ 126, YYAT_SHIFT, 65 },
		{ 126, YYAT_SHIFT, 66 },
		{ 126, YYAT_SHIFT, 67 },
		{ 126, YYAT_SHIFT, 68 },
		{ 126, YYAT_SHIFT, 69 },
		{ 126, YYAT_SHIFT, 70 },
		{ 126, YYAT_SHIFT, 71 },
		{ 126, YYAT_SHIFT, 72 },
		{ 126, YYAT_SHIFT, 73 },
		{ 126, YYAT_SHIFT, 74 },
		{ 126, YYAT_SHIFT, 75 },
		{ 126, YYAT_SHIFT, 76 },
		{ 0, YYAT_SHIFT, 1 },
		{ 9, YYAT_SHIFT, 14 },
		{ 8, YYAT_SHIFT, 12 },
		{ 7, YYAT_SHIFT, 10 },
		{ 118, YYAT_ERROR, 0 },
		{ 0, YYAT_SHIFT, 2 },
		{ 98, YYAT_SHIFT, 111 },
		{ 126, YYAT_SHIFT, 77 },
		{ 118, YYAT_SHIFT, 122 },
		{ 98, YYAT_SHIFT, 90 },
		{ 132, YYAT_SHIFT, 134 },
		{ 126, YYAT_SHIFT, 128 },
		{ 104, YYAT_SHIFT, 55 },
		{ 104, YYAT_SHIFT, 56 },
		{ 104, YYAT_SHIFT, 57 },
		{ 104, YYAT_SHIFT, 58 },
		{ 104, YYAT_SHIFT, 59 },
		{ 104, YYAT_SHIFT, 60 },
		{ 104, YYAT_SHIFT, 61 },
		{ 104, YYAT_SHIFT, 62 },
		{ 104, YYAT_SHIFT, 63 },
		{ 104, YYAT_SHIFT, 64 },
		{ 104, YYAT_SHIFT, 65 },
		{ 104, YYAT_SHIFT, 66 },
		{ 104, YYAT_SHIFT, 67 },
		{ 104, YYAT_SHIFT, 68 },
		{ 104, YYAT_SHIFT, 69 },
		{ 104, YYAT_SHIFT, 70 },
		{ 104, YYAT_SHIFT, 71 },
		{ 104, YYAT_SHIFT, 72 },
		{ 104, YYAT_SHIFT, 73 },
		{ 104, YYAT_SHIFT, 74 },
		{ 104, YYAT_SHIFT, 75 },
		{ 104, YYAT_SHIFT, 76 },
		{ 0, YYAT_SHIFT, 3 },
		{ 9, YYAT_SHIFT, 15 },
		{ 8, YYAT_SHIFT, 13 },
		{ 7, YYAT_SHIFT, 11 },
		{ 99, YYAT_SHIFT, 83 },
		{ 99, YYAT_SHIFT, 112 },
		{ 131, YYAT_SHIFT, 133 },
		{ 104, YYAT_SHIFT, 77 },
		{ 102, YYAT_SHIFT, 55 },
		{ 102, YYAT_SHIFT, 56 },
		{ 102, YYAT_SHIFT, 57 },
		{ 102, YYAT_SHIFT, 58 },
		{ 102, YYAT_SHIFT, 59 },
		{ 102, YYAT_SHIFT, 60 },
		{ 102, YYAT_SHIFT, 61 },
		{ 102, YYAT_SHIFT, 62 },
		{ 102, YYAT_SHIFT, 63 },
		{ 102, YYAT_SHIFT, 64 },
		{ 102, YYAT_SHIFT, 65 },
		{ 102, YYAT_SHIFT, 66 },
		{ 102, YYAT_SHIFT, 67 },
		{ 102, YYAT_SHIFT, 68 },
		{ 102, YYAT_SHIFT, 69 },
		{ 102, YYAT_SHIFT, 70 },
		{ 102, YYAT_SHIFT, 71 },
		{ 102, YYAT_SHIFT, 72 },
		{ 102, YYAT_SHIFT, 73 },
		{ 102, YYAT_SHIFT, 74 },
		{ 102, YYAT_SHIFT, 75 },
		{ 102, YYAT_SHIFT, 76 },
		{ 130, YYAT_SHIFT, 23 },
		{ 130, YYAT_SHIFT, 24 },
		{ 130, YYAT_SHIFT, 25 },
		{ 130, YYAT_SHIFT, 26 },
		{ 130, YYAT_SHIFT, 27 },
		{ 130, YYAT_SHIFT, 28 },
		{ 100, YYAT_SHIFT, 89 },
		{ 102, YYAT_SHIFT, 77 },
		{ 122, YYAT_SHIFT, 32 },
		{ 128, YYAT_SHIFT, 130 },
		{ 44, YYAT_SHIFT, 89 },
		{ 127, YYAT_SHIFT, 129 },
		{ 125, YYAT_SHIFT, 127 },
		{ 100, YYAT_SHIFT, 90 },
		{ 100, YYAT_SHIFT, 113 },
		{ 120, YYAT_SHIFT, 124 },
		{ 122, YYAT_SHIFT, 34 },
		{ 44, YYAT_SHIFT, 90 },
		{ 119, YYAT_SHIFT, 123 },
		{ 117, YYAT_SHIFT, 121 },
		{ 111, YYAT_SHIFT, 116 },
		{ 110, YYAT_SHIFT, 115 },
		{ 97, YYAT_SHIFT, 110 },
		{ 96, YYAT_SHIFT, 109 },
		{ 93, YYAT_SHIFT, 108 },
		{ 91, YYAT_SHIFT, 107 },
		{ 90, YYAT_SHIFT, 106 },
		{ 88, YYAT_SHIFT, 90 },
		{ 130, YYAT_SHIFT, 29 },
		{ 83, YYAT_SHIFT, 33 },
		{ 130, YYAT_SHIFT, 30 },
		{ 130, YYAT_SHIFT, 31 },
		{ 54, YYAT_SHIFT, 90 },
		{ 53, YYAT_SHIFT, 101 },
		{ 49, YYAT_SHIFT, 95 },
		{ 48, YYAT_SHIFT, 94 },
		{ 46, YYAT_SHIFT, 92 },
		{ 40, YYAT_SHIFT, 86 },
		{ 38, YYAT_SHIFT, 85 },
		{ 36, YYAT_SHIFT, 84 },
		{ 35, YYAT_SHIFT, 78 },
		{ 31, YYAT_SHIFT, 52 },
		{ 30, YYAT_SHIFT, 51 },
		{ 29, YYAT_SHIFT, 50 },
		{ 20, YYAT_SHIFT, 47 },
		{ 18, YYAT_SHIFT, 45 },
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
		{ -235, 1, YYAT_ERROR, 0 },
		{ -147, 1, YYAT_ERROR, 0 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ -153, 1, YYAT_ERROR, 0 },
		{ 141, 1, YYAT_ERROR, 0 },
		{ -155, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -237, 1, YYAT_ERROR, 0 },
		{ -238, 1, YYAT_ERROR, 0 },
		{ -239, 1, YYAT_ERROR, 0 },
		{ -158, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -160, 1, YYAT_ERROR, 0 },
		{ -158, 1, YYAT_ERROR, 0 },
		{ -162, 1, YYAT_ERROR, 0 },
		{ -160, 1, YYAT_ERROR, 0 },
		{ -161, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ -162, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ -163, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -166, 1, YYAT_ERROR, 0 },
		{ -167, 1, YYAT_ERROR, 0 },
		{ -168, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ -174, 1, YYAT_DEFAULT, 118 },
		{ -175, 1, YYAT_DEFAULT, 99 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -176, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ -171, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 83 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ -196, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ -172, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ -173, 1, YYAT_DEFAULT, 130 },
		{ -174, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_DEFAULT, 83 },
		{ -177, 1, YYAT_DEFAULT, 126 },
		{ -181, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 26 },
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
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ -187, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ -186, 1, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ -190, 1, YYAT_ERROR, 0 },
		{ -183, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -184, 1, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -187, 1, YYAT_DEFAULT, 126 },
		{ -188, 1, YYAT_DEFAULT, 126 },
		{ -268, 1, YYAT_REDUCE, 52 },
		{ -239, 1, YYAT_ERROR, 0 },
		{ -200, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ -199, 1, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ -229, 1, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ -186, 1, YYAT_ERROR, 0 },
		{ -187, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ -195, 1, YYAT_DEFAULT, 118 },
		{ -270, 1, YYAT_DEFAULT, 126 },
		{ -190, 1, YYAT_ERROR, 0 },
		{ -193, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 122 },
		{ -201, 1, YYAT_DEFAULT, 83 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ -198, 1, YYAT_DEFAULT, 126 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -196, 1, YYAT_ERROR, 0 },
		{ -198, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 130 },
		{ -171, 1, YYAT_DEFAULT, 122 },
		{ -232, 1, YYAT_ERROR, 0 },
		{ -262, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 61 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 42;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 130, 132 },
		{ 130, 42 },
		{ 126, 82 },
		{ 126, 79 },
		{ 126, 81 },
		{ 126, 80 },
		{ 129, 131 },
		{ 130, 35 },
		{ 130, 36 },
		{ 130, 38 },
		{ 130, 37 },
		{ 130, 39 },
		{ 130, 41 },
		{ 89, 44 },
		{ 89, 104 },
		{ 89, 105 },
		{ 52, 100 },
		{ 121, 125 },
		{ 52, 99 },
		{ 122, 54 },
		{ 122, 126 },
		{ 51, 98 },
		{ 51, 97 },
		{ 47, 93 },
		{ 47, 43 },
		{ 116, 120 },
		{ 115, 119 },
		{ 113, 118 },
		{ 112, 117 },
		{ 109, 114 },
		{ 93, 87 },
		{ 83, 103 },
		{ 82, 102 },
		{ 50, 96 },
		{ 45, 91 },
		{ 42, 88 },
		{ 32, 53 },
		{ 22, 49 },
		{ 21, 48 },
		{ 19, 46 },
		{ 17, 40 },
		{ 0, 4 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 40, -1 },
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
		{ 38, 47 },
		{ 0, -1 },
		{ 37, 47 },
		{ 0, -1 },
		{ 36, 47 },
		{ 35, 47 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, 122 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 126 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 93 },
		{ 0, -1 },
		{ 26, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 32, 47 },
		{ 0, 93 },
		{ 21, 130 },
		{ 0, 93 },
		{ 0, 93 },
		{ 23, 122 },
		{ 12, -1 },
		{ 7, -1 },
		{ 0, 126 },
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
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 122 },
		{ 22, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 4, -1 },
		{ 0, -1 },
		{ 0, 93 },
		{ 0, -1 },
		{ 27, 130 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 126 },
		{ 0, 126 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 126 },
		{ 0, -1 },
		{ 0, 126 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, 130 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, 122 },
		{ 17, 122 },
		{ 0, -1 },
		{ 23, 130 },
		{ 22, 130 },
		{ 0, 126 },
		{ 0, 126 },
		{ 0, -1 },
		{ 0, -1 },
		{ 7, 122 },
		{ 10, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 126 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 3, 130 },
		{ -3, 89 },
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
#line 460 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {

			ofstream fout("error.txt");	
			fout.close();//清空error文件

			freopen("input.txt", "r",stdin);

			n = parser.yyparse();
			//tree.print_tree(tree.root);不执行

			freopen("CON", "r", stdin);
			tree.check_idtype(tree.root);
			tree.print_tree(tree.root);
		}
	}

	system("pause");
	return n;
}


