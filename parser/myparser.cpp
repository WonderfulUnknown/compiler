/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 68 of your 30 day trial period.
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
* Date: 11/27/18
* Time: 18:41:31
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
#include<fstream>
#include "mylexer.h"
#include "Tree.h"

using namespace std;

TreeNode *node = new TreeNode;
extern ParseTree tree;
// extern char *token;

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
	
#line 286 "myparser.cpp"
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
#line 98 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = new TreeNode;
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(2 - 2);
		tree.all_node++;
		tree.root = (*(YYSTYPE YYFAR*)yyvalptr);
	
#line 305 "myparser.cpp"
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
#line 109 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 318 "myparser.cpp"
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
#line 110 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 331 "myparser.cpp"
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
#line 111 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 344 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 112 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 357 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 113 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 370 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 114 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
#line 383 "myparser.cpp"
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
#line 122 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = INT;
	
#line 399 "myparser.cpp"
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
#line 127 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = DOUBLE;
	
#line 415 "myparser.cpp"
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
#line 132 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = FLOAT;
	
#line 431 "myparser.cpp"
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
#line 137 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = CHAR;
	
#line 447 "myparser.cpp"
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
#line 142 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = BOOL;
	
#line 463 "myparser.cpp"
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
#line 147 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(type_spe);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.data_type = VOID;
	
#line 479 "myparser.cpp"
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
#line 154 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 492 "myparser.cpp"
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
#line 155 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 505 "myparser.cpp"
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
#line 156 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 518 "myparser.cpp"
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
#line 162 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = PLUS;
	
#line 534 "myparser.cpp"
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

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MINUS;
	
#line 550 "myparser.cpp"
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
#line 172 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MUL;
	
#line 566 "myparser.cpp"
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
#line 177 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DIV;
	
#line 582 "myparser.cpp"
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
#line 182 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MOD;
	
#line 598 "myparser.cpp"
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
#line 187 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INC;
	
#line 614 "myparser.cpp"
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
#line 192 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = DEC;
	
#line 630 "myparser.cpp"
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
#line 197 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = INAD;
	
#line 646 "myparser.cpp"
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
#line 202 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = IOR;
	
#line 662 "myparser.cpp"
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
#line 207 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = XOR;
	
#line 678 "myparser.cpp"
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
#line 212 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NOT;
	
#line 694 "myparser.cpp"
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
#line 217 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHL;
	
#line 710 "myparser.cpp"
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
#line 222 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = SHR;
	
#line 726 "myparser.cpp"
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
#line 230 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = EQ;
	
#line 742 "myparser.cpp"
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
#line 235 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GT;
	
#line 758 "myparser.cpp"
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
#line 240 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LT;
	
#line 774 "myparser.cpp"
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
#line 245 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = GE;
	
#line 790 "myparser.cpp"
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
#line 250 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LE;
	
#line 806 "myparser.cpp"
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
#line 255 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NEQ;
	
#line 822 "myparser.cpp"
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
#line 263 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = AND;
	
#line 838 "myparser.cpp"
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
#line 268 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OR;
	
#line 854 "myparser.cpp"
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
#line 273 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OPPOSITE;
	
#line 870 "myparser.cpp"
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
#line 282 ".\\myparser.y"
	
		if(yyattribute(1 - 1)->address != -1)//不在符号表中
		{
			(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
			strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name , yyattribute(1 - 1)->attr.name);
			//$$->attr.name = $1->attr.name;
			//$$->address = $1->address;
		}
		//若在，找到结点返回
	
#line 892 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 295 ".\\myparser.y"
		
		//可能需要考虑是否可以使用id赋值
		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(id);
		strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.name , yyattribute(1 - 3)->attr.name);
		//$$ = $1;
		// YYSTYPE temp = $1;
		//while(temp->brother != NULL)
		//	temp = temp->brother;
		//temp->brother = $3;
		(*(YYSTYPE YYFAR*)yyvalptr)->brother = yyattribute(3 - 3);
	
#line 915 "myparser.cpp"
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
#line 314 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(oper);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 932 "myparser.cpp"
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
#line 319 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
#line 945 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 321 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(number);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.value = yyattribute(1 - 1)->attr.value;
	
#line 961 "myparser.cpp"
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
#line 325 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 974 "myparser.cpp"
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
#line 331 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(yyattribute(2 - 3)->type.exp_type);
	
#line 989 "myparser.cpp"
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
#line 335 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 1006 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 344 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(dec_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(2 - 2);
	
#line 1023 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 359 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(10 - 11);
	
#line 1041 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 366 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);
	
#line 1058 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 372 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(10 - 11);
	
#line 1076 "myparser.cpp"
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
#line 379 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);
	
#line 1093 "myparser.cpp"
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
#line 389 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 1110 "myparser.cpp"
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
#line 395 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 1127 "myparser.cpp"
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
#line 408 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);
	
#line 1146 "myparser.cpp"
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
#line 416 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);	
	
#line 1165 "myparser.cpp"
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
		{ "ELSE", 286 },
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
		"$accept: c_program",
		"c_program: MAIN LPRACE RPRACE LBRACE code RBRACE",
		"c_program: MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"c_program: VOID MAIN LPRACE RPRACE LBRACE code RBRACE",
		"c_program: VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"c_program: INT MAIN LPRACE RPRACE LBRACE code RBRACE",
		"c_program: INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE",
		"code: stmt",
		"code: code stmt",
		"stmt: exp SIMICOLON",
		"stmt: asgn_stmt SIMICOLON",
		"stmt: dec_stmt SIMICOLON",
		"stmt: if_stmt SIMICOLON",
		"stmt: while_stmt SIMICOLON",
		"stmt: for_stmt SIMICOLON",
		"type: INT",
		"type: DOUBLE",
		"type: FLOAT",
		"type: CHAR",
		"type: BOOL",
		"type: VOID",
		"op: ari_op",
		"op: rel_op",
		"op: log_op",
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
		"dec_stmt: type id",
		"if_stmt: IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE exp RPRACE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE",
		"if_stmt: IF LPRACE id RPRACE LBRACE stmt RBRACE",
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
		{ 3, 2, 11 },
		{ 3, 2, 12 },
		{ 3, 2, 13 },
		{ 4, 1, 14 },
		{ 4, 1, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 4, 1, 19 },
		{ 5, 1, 20 },
		{ 5, 1, 21 },
		{ 5, 1, 22 },
		{ 6, 1, 23 },
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
		{ 7, 1, 36 },
		{ 7, 1, 37 },
		{ 7, 1, 38 },
		{ 7, 1, 39 },
		{ 7, 1, 40 },
		{ 7, 1, 41 },
		{ 8, 1, 42 },
		{ 8, 1, 43 },
		{ 8, 1, 44 },
		{ 9, 1, 45 },
		{ 9, 3, 46 },
		{ 10, 3, 47 },
		{ 10, 3, 48 },
		{ 10, 1, 49 },
		{ 10, 1, 50 },
		{ 11, 3, 51 },
		{ 11, 3, 52 },
		{ 12, 2, 53 },
		{ 13, 11, 54 },
		{ 13, 7, 55 },
		{ 13, 11, 56 },
		{ 13, 7, 57 },
		{ 14, 7, 58 },
		{ 14, 7, 59 },
		{ 15, 11, 60 },
		{ 15, 11, 61 }
	};
	yyreduction = reduction;

	yytokenaction_size = 151;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 134, YYAT_SHIFT, 56 },
		{ 134, YYAT_SHIFT, 57 },
		{ 134, YYAT_SHIFT, 58 },
		{ 134, YYAT_SHIFT, 59 },
		{ 134, YYAT_SHIFT, 60 },
		{ 134, YYAT_SHIFT, 61 },
		{ 134, YYAT_SHIFT, 62 },
		{ 134, YYAT_SHIFT, 63 },
		{ 134, YYAT_SHIFT, 64 },
		{ 134, YYAT_SHIFT, 65 },
		{ 134, YYAT_SHIFT, 66 },
		{ 134, YYAT_SHIFT, 67 },
		{ 134, YYAT_SHIFT, 68 },
		{ 134, YYAT_SHIFT, 69 },
		{ 134, YYAT_SHIFT, 70 },
		{ 134, YYAT_SHIFT, 71 },
		{ 134, YYAT_SHIFT, 72 },
		{ 134, YYAT_SHIFT, 73 },
		{ 134, YYAT_SHIFT, 74 },
		{ 134, YYAT_SHIFT, 75 },
		{ 134, YYAT_SHIFT, 76 },
		{ 134, YYAT_SHIFT, 77 },
		{ 128, YYAT_SHIFT, 32 },
		{ 103, YYAT_SHIFT, 92 },
		{ 122, YYAT_ERROR, 0 },
		{ 102, YYAT_SHIFT, 83 },
		{ 102, YYAT_SHIFT, 115 },
		{ 146, YYAT_SHIFT, 150 },
		{ 122, YYAT_SHIFT, 128 },
		{ 145, YYAT_SHIFT, 149 },
		{ 128, YYAT_SHIFT, 34 },
		{ 103, YYAT_SHIFT, 116 },
		{ 144, YYAT_SHIFT, 148 },
		{ 134, YYAT_SHIFT, 138 },
		{ 108, YYAT_SHIFT, 56 },
		{ 108, YYAT_SHIFT, 57 },
		{ 108, YYAT_SHIFT, 58 },
		{ 108, YYAT_SHIFT, 59 },
		{ 108, YYAT_SHIFT, 60 },
		{ 108, YYAT_SHIFT, 61 },
		{ 108, YYAT_SHIFT, 62 },
		{ 108, YYAT_SHIFT, 63 },
		{ 108, YYAT_SHIFT, 64 },
		{ 108, YYAT_SHIFT, 65 },
		{ 108, YYAT_SHIFT, 66 },
		{ 108, YYAT_SHIFT, 67 },
		{ 108, YYAT_SHIFT, 68 },
		{ 108, YYAT_SHIFT, 69 },
		{ 108, YYAT_SHIFT, 70 },
		{ 108, YYAT_SHIFT, 71 },
		{ 108, YYAT_SHIFT, 72 },
		{ 108, YYAT_SHIFT, 73 },
		{ 108, YYAT_SHIFT, 74 },
		{ 108, YYAT_SHIFT, 75 },
		{ 108, YYAT_SHIFT, 76 },
		{ 108, YYAT_SHIFT, 77 },
		{ 106, YYAT_SHIFT, 56 },
		{ 106, YYAT_SHIFT, 57 },
		{ 106, YYAT_SHIFT, 58 },
		{ 106, YYAT_SHIFT, 59 },
		{ 106, YYAT_SHIFT, 60 },
		{ 106, YYAT_SHIFT, 61 },
		{ 106, YYAT_SHIFT, 62 },
		{ 106, YYAT_SHIFT, 63 },
		{ 106, YYAT_SHIFT, 64 },
		{ 106, YYAT_SHIFT, 65 },
		{ 106, YYAT_SHIFT, 66 },
		{ 106, YYAT_SHIFT, 67 },
		{ 106, YYAT_SHIFT, 68 },
		{ 106, YYAT_SHIFT, 69 },
		{ 106, YYAT_SHIFT, 70 },
		{ 106, YYAT_SHIFT, 71 },
		{ 106, YYAT_SHIFT, 72 },
		{ 106, YYAT_SHIFT, 73 },
		{ 106, YYAT_SHIFT, 74 },
		{ 106, YYAT_SHIFT, 75 },
		{ 106, YYAT_SHIFT, 76 },
		{ 106, YYAT_SHIFT, 77 },
		{ 142, YYAT_SHIFT, 23 },
		{ 142, YYAT_SHIFT, 24 },
		{ 142, YYAT_SHIFT, 25 },
		{ 142, YYAT_SHIFT, 26 },
		{ 142, YYAT_SHIFT, 27 },
		{ 142, YYAT_SHIFT, 28 },
		{ 0, YYAT_SHIFT, 1 },
		{ 9, YYAT_SHIFT, 14 },
		{ 8, YYAT_SHIFT, 12 },
		{ 7, YYAT_SHIFT, 10 },
		{ 143, YYAT_SHIFT, 147 },
		{ 0, YYAT_SHIFT, 2 },
		{ 138, YYAT_SHIFT, 142 },
		{ 137, YYAT_SHIFT, 141 },
		{ 136, YYAT_SHIFT, 140 },
		{ 135, YYAT_SHIFT, 139 },
		{ 133, YYAT_SHIFT, 137 },
		{ 130, YYAT_SHIFT, 136 },
		{ 129, YYAT_SHIFT, 135 },
		{ 126, YYAT_SHIFT, 132 },
		{ 125, YYAT_SHIFT, 131 },
		{ 124, YYAT_SHIFT, 130 },
		{ 123, YYAT_SHIFT, 129 },
		{ 121, YYAT_SHIFT, 127 },
		{ 114, YYAT_SHIFT, 120 },
		{ 113, YYAT_SHIFT, 119 },
		{ 112, YYAT_SHIFT, 118 },
		{ 111, YYAT_SHIFT, 117 },
		{ 142, YYAT_SHIFT, 29 },
		{ 101, YYAT_SHIFT, 114 },
		{ 142, YYAT_SHIFT, 30 },
		{ 142, YYAT_SHIFT, 31 },
		{ 100, YYAT_SHIFT, 113 },
		{ 99, YYAT_SHIFT, 112 },
		{ 98, YYAT_SHIFT, 111 },
		{ 95, YYAT_SHIFT, 110 },
		{ 93, YYAT_SHIFT, 109 },
		{ 83, YYAT_SHIFT, 33 },
		{ 53, YYAT_SHIFT, 104 },
		{ 49, YYAT_SHIFT, 97 },
		{ 0, YYAT_SHIFT, 3 },
		{ 9, YYAT_SHIFT, 15 },
		{ 8, YYAT_SHIFT, 13 },
		{ 7, YYAT_SHIFT, 11 },
		{ 48, YYAT_SHIFT, 96 },
		{ 46, YYAT_SHIFT, 94 },
		{ 44, YYAT_SHIFT, 92 },
		{ 42, YYAT_SHIFT, 90 },
		{ 41, YYAT_SHIFT, 89 },
		{ 40, YYAT_SHIFT, 88 },
		{ 39, YYAT_SHIFT, 87 },
		{ 38, YYAT_SHIFT, 85 },
		{ 37, YYAT_SHIFT, 84 },
		{ 36, YYAT_SHIFT, 78 },
		{ 33, YYAT_SHIFT, 55 },
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
		{ -173, 1, YYAT_ERROR, 0 },
		{ -141, 1, YYAT_ERROR, 0 },
		{ -142, 1, YYAT_ERROR, 0 },
		{ -147, 1, YYAT_ERROR, 0 },
		{ 147, 1, YYAT_ERROR, 0 },
		{ -149, 1, YYAT_ERROR, 0 },
		{ -150, 1, YYAT_ERROR, 0 },
		{ -175, 1, YYAT_ERROR, 0 },
		{ -176, 1, YYAT_ERROR, 0 },
		{ -177, 1, YYAT_ERROR, 0 },
		{ -152, 1, YYAT_ERROR, 0 },
		{ -150, 1, YYAT_ERROR, 0 },
		{ -154, 1, YYAT_ERROR, 0 },
		{ -152, 1, YYAT_ERROR, 0 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ -154, 1, YYAT_ERROR, 0 },
		{ -155, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -156, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -157, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -160, 1, YYAT_ERROR, 0 },
		{ -161, 1, YYAT_ERROR, 0 },
		{ -162, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -167, 1, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ -169, 1, YYAT_DEFAULT, 122 },
		{ -170, 1, YYAT_DEFAULT, 102 },
		{ -165, 1, YYAT_DEFAULT, 142 },
		{ -172, 1, YYAT_ERROR, 0 },
		{ -173, 1, YYAT_ERROR, 0 },
		{ -174, 1, YYAT_ERROR, 0 },
		{ -175, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 83 },
		{ -168, 1, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -171, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -172, 1, YYAT_DEFAULT, 142 },
		{ -177, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 83 },
		{ -180, 1, YYAT_DEFAULT, 134 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_DEFAULT, 83 },
		{ 0, 0, YYAT_REDUCE, 24 },
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
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ -187, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -180, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -181, 1, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -184, 1, YYAT_DEFAULT, 134 },
		{ -185, 1, YYAT_REDUCE, 51 },
		{ -186, 1, YYAT_DEFAULT, 134 },
		{ -189, 1, YYAT_REDUCE, 51 },
		{ -274, 1, YYAT_ERROR, 0 },
		{ -269, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ -207, 1, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ -229, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ -188, 1, YYAT_ERROR, 0 },
		{ -189, 1, YYAT_ERROR, 0 },
		{ -190, 1, YYAT_ERROR, 0 },
		{ -191, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -199, 1, YYAT_DEFAULT, 122 },
		{ -272, 1, YYAT_DEFAULT, 134 },
		{ -194, 1, YYAT_ERROR, 0 },
		{ -195, 1, YYAT_ERROR, 0 },
		{ -196, 1, YYAT_ERROR, 0 },
		{ -197, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 128 },
		{ -273, 1, YYAT_DEFAULT, 83 },
		{ -190, 1, YYAT_REDUCE, 56 },
		{ -191, 1, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ -202, 1, YYAT_DEFAULT, 134 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -200, 1, YYAT_ERROR, 0 },
		{ -201, 1, YYAT_ERROR, 0 },
		{ -202, 1, YYAT_ERROR, 0 },
		{ -203, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ 0, 0, YYAT_DEFAULT, 142 },
		{ -179, 1, YYAT_DEFAULT, 128 },
		{ -206, 1, YYAT_ERROR, 0 },
		{ -262, 1, YYAT_ERROR, 0 },
		{ -265, 1, YYAT_ERROR, 0 },
		{ -267, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 62 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 46;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 142, 146 },
		{ 142, 43 },
		{ 134, 81 },
		{ 134, 80 },
		{ 134, 79 },
		{ 134, 82 },
		{ 142, 44 },
		{ 142, 36 },
		{ 142, 37 },
		{ 142, 39 },
		{ 142, 40 },
		{ 142, 41 },
		{ 142, 42 },
		{ 52, 103 },
		{ 141, 145 },
		{ 52, 102 },
		{ 128, 54 },
		{ 128, 134 },
		{ 51, 101 },
		{ 51, 100 },
		{ 50, 99 },
		{ 50, 98 },
		{ 47, 95 },
		{ 47, 35 },
		{ 140, 144 },
		{ 139, 143 },
		{ 127, 133 },
		{ 120, 126 },
		{ 119, 125 },
		{ 118, 124 },
		{ 117, 123 },
		{ 116, 122 },
		{ 115, 121 },
		{ 95, 86 },
		{ 92, 108 },
		{ 83, 107 },
		{ 81, 106 },
		{ 55, 105 },
		{ 45, 93 },
		{ 43, 91 },
		{ 32, 53 },
		{ 22, 49 },
		{ 21, 48 },
		{ 19, 46 },
		{ 17, 38 },
		{ 0, 4 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 44, -1 },
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
		{ 42, 47 },
		{ 0, -1 },
		{ 41, 47 },
		{ 0, -1 },
		{ 40, 47 },
		{ 39, 47 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 30, 128 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, 95 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 30, -1 },
		{ 0, -1 },
		{ 36, 47 },
		{ 0, 95 },
		{ 20, 142 },
		{ 0, 95 },
		{ 0, 95 },
		{ 11, -1 },
		{ 9, -1 },
		{ 4, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 28, -1 },
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
		{ 26, 128 },
		{ 0, -1 },
		{ 26, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, 128 },
		{ 0, 95 },
		{ 0, -1 },
		{ 30, 142 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 128 },
		{ 21, 128 },
		{ 27, 142 },
		{ 26, 142 },
		{ 25, 142 },
		{ 24, 142 },
		{ 0, 134 },
		{ 0, 134 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 16, 128 },
		{ 7, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 134 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 142 },
		{ 21, 142 },
		{ 11, 142 },
		{ -3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
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
#line 436 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			// freopen("./example.txt", "r",stdin);
			 freopen("D:/input.txt", "r",stdin);

			n = parser.yyparse();
			//tree.print_tree(tree.root);不执行

			freopen("CON", "r", stdin);
			tree.print_tree(tree.root);
		}
	}
	system("pause");
	return n;
}


