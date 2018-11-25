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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 11/25/18
* Time: 19:53:37
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

Date: 2018年11月15日
****************************************************************************/
#include <iostream>
// #include <string->h>

#include "mylexer.h"


using namespace std;
#include "Tree.h"
TreeNode *node;

#line 56 "myparser.cpp"
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
#line 31 ".\\myparser.y"

	// place any extra initialisation code here

#line 80 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 36 ".\\myparser.y"

	// place any extra cleanup code here

#line 94 "myparser.cpp"
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
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 100 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 204 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 101 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 217 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 102 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 230 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 103 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 243 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 104 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 256 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 105 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 269 "myparser.cpp"
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
#line 112 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 282 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 113 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 295 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 114 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 308 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 115 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 321 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 116 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 334 "myparser.cpp"
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
#line 117 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 347 "myparser.cpp"
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
#line 122 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 360 "myparser.cpp"
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
#line 123 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 373 "myparser.cpp"
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
#line 124 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 386 "myparser.cpp"
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
#line 129 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 399 "myparser.cpp"
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
#line 130 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 412 "myparser.cpp"
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
#line 131 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 425 "myparser.cpp"
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
#line 132 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 438 "myparser.cpp"
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
#line 133 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 451 "myparser.cpp"
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
#line 134 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 464 "myparser.cpp"
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
#line 135 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 477 "myparser.cpp"
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
#line 136 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 490 "myparser.cpp"
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
#line 137 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 503 "myparser.cpp"
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
#line 138 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 516 "myparser.cpp"
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
#line 139 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 529 "myparser.cpp"
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
#line 140 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 542 "myparser.cpp"
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
#line 141 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 555 "myparser.cpp"
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
#line 146 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 568 "myparser.cpp"
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
#line 147 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 581 "myparser.cpp"
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
#line 148 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 594 "myparser.cpp"
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
#line 149 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 607 "myparser.cpp"
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
#line 150 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 620 "myparser.cpp"
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
#line 151 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 633 "myparser.cpp"
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
#line 156 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 646 "myparser.cpp"
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
#line 157 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 659 "myparser.cpp"
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
#line 158 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 672 "myparser.cpp"
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
#line 165 ".\\myparser.y"
	
		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(dec_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.name = yyattribute(1 - 1)->attr.name;
		(*(YYSTYPE YYFAR*)yyvalptr)->address = yyattribute(1 - 1)->address;
	
#line 689 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 173 ".\\myparser.y"
		
		//可能需要考虑是否可以使用id赋值
		YYSTYPE temp = yyattribute(3 - 3);
		while(temp->brother != NULL)
			temp = temp->brother;
		temp->brother = yyattribute(1 - 3);
	
#line 708 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 188 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(yyattribute(2 - 3)->type.exp_type);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 725 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 193 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(2 - 3);
#line 738 "myparser.cpp"
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
#line 195 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(yyattribute(2 - 1)->type.exp_type);
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.value = yyattribute(2 - 1)->attr.value;
	
#line 754 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 204 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->exp_node(yyattribute(2 - 3)->type.exp_type);
	
#line 769 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 208 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(asgn_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
#line 786 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 217 ".\\myparser.y"

		//type中的值都是mylexer->h中define的值,注意
		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(dec_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(2 - 2);
	
#line 804 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 233 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(10 - 11);
	
#line 822 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 240 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);
	
#line 839 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 246 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(10 - 11);
	
#line 857 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 253 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(if_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);
	
#line 874 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 263 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 891 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 269 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(while_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(6 - 7);		
	
#line 908 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 282 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);
	
#line 927 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[12];
			yyinitdebug((void YYFAR**)yya, 12);
#endif
			{
#line 290 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = node->stmt_node(for_stmt);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 11);
		(*(YYSTYPE YYFAR*)yyvalptr)->child[3]= yyattribute(10 - 11);	
	
#line 946 "myparser.cpp"
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
		"$accept: stmt",
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
		"id: id COMMA ID",
		"exp: exp op exp",
		"exp: LPRACE exp RPRACE",
		"exp: NUMBER",
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
		{ 1, 2, 0 },
		{ 1, 2, 1 },
		{ 1, 2, 2 },
		{ 1, 2, 3 },
		{ 1, 2, 4 },
		{ 1, 2, 5 },
		{ 2, 1, 6 },
		{ 2, 1, 7 },
		{ 2, 1, 8 },
		{ 2, 1, 9 },
		{ 2, 1, 10 },
		{ 2, 1, 11 },
		{ 3, 1, 12 },
		{ 3, 1, 13 },
		{ 3, 1, 14 },
		{ 4, 1, 15 },
		{ 4, 1, 16 },
		{ 4, 1, 17 },
		{ 4, 1, 18 },
		{ 4, 1, 19 },
		{ 4, 1, 20 },
		{ 4, 1, 21 },
		{ 4, 1, 22 },
		{ 4, 1, 23 },
		{ 4, 1, 24 },
		{ 4, 1, 25 },
		{ 4, 1, 26 },
		{ 4, 1, 27 },
		{ 5, 1, 28 },
		{ 5, 1, 29 },
		{ 5, 1, 30 },
		{ 5, 1, 31 },
		{ 5, 1, 32 },
		{ 5, 1, 33 },
		{ 6, 1, 34 },
		{ 6, 1, 35 },
		{ 6, 1, 36 },
		{ 7, 1, 37 },
		{ 7, 3, 38 },
		{ 8, 3, 39 },
		{ 8, 3, 40 },
		{ 8, 1, 41 },
		{ 9, 3, 42 },
		{ 9, 3, 43 },
		{ 10, 2, 44 },
		{ 11, 11, 45 },
		{ 11, 7, 46 },
		{ 11, 11, 47 },
		{ 11, 7, 48 },
		{ 12, 7, 49 },
		{ 12, 7, 50 },
		{ 13, 11, 51 },
		{ 13, 11, 52 }
	};
	yyreduction = reduction;

	yytokenaction_size = 126;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 96, YYAT_SHIFT, 26 },
		{ 96, YYAT_SHIFT, 27 },
		{ 96, YYAT_SHIFT, 28 },
		{ 96, YYAT_SHIFT, 29 },
		{ 96, YYAT_SHIFT, 30 },
		{ 96, YYAT_SHIFT, 31 },
		{ 96, YYAT_SHIFT, 32 },
		{ 96, YYAT_SHIFT, 33 },
		{ 96, YYAT_SHIFT, 34 },
		{ 96, YYAT_SHIFT, 35 },
		{ 96, YYAT_SHIFT, 36 },
		{ 96, YYAT_SHIFT, 37 },
		{ 96, YYAT_SHIFT, 38 },
		{ 96, YYAT_SHIFT, 39 },
		{ 96, YYAT_SHIFT, 40 },
		{ 96, YYAT_SHIFT, 41 },
		{ 96, YYAT_SHIFT, 42 },
		{ 96, YYAT_SHIFT, 43 },
		{ 96, YYAT_SHIFT, 44 },
		{ 96, YYAT_SHIFT, 45 },
		{ 96, YYAT_SHIFT, 46 },
		{ 96, YYAT_SHIFT, 47 },
		{ 67, YYAT_SHIFT, 60 },
		{ 90, YYAT_SHIFT, 10 },
		{ 84, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 56 },
		{ 66, YYAT_SHIFT, 77 },
		{ 108, YYAT_SHIFT, 112 },
		{ 84, YYAT_SHIFT, 90 },
		{ 67, YYAT_SHIFT, 61 },
		{ 67, YYAT_SHIFT, 78 },
		{ 90, YYAT_SHIFT, 12 },
		{ 107, YYAT_SHIFT, 111 },
		{ 96, YYAT_SHIFT, 100 },
		{ 71, YYAT_SHIFT, 26 },
		{ 71, YYAT_SHIFT, 27 },
		{ 71, YYAT_SHIFT, 28 },
		{ 71, YYAT_SHIFT, 29 },
		{ 71, YYAT_SHIFT, 30 },
		{ 71, YYAT_SHIFT, 31 },
		{ 71, YYAT_SHIFT, 32 },
		{ 71, YYAT_SHIFT, 33 },
		{ 71, YYAT_SHIFT, 34 },
		{ 71, YYAT_SHIFT, 35 },
		{ 71, YYAT_SHIFT, 36 },
		{ 71, YYAT_SHIFT, 37 },
		{ 71, YYAT_SHIFT, 38 },
		{ 71, YYAT_SHIFT, 39 },
		{ 71, YYAT_SHIFT, 40 },
		{ 71, YYAT_SHIFT, 41 },
		{ 71, YYAT_SHIFT, 42 },
		{ 71, YYAT_SHIFT, 43 },
		{ 71, YYAT_SHIFT, 44 },
		{ 71, YYAT_SHIFT, 45 },
		{ 71, YYAT_SHIFT, 46 },
		{ 71, YYAT_SHIFT, 47 },
		{ 69, YYAT_SHIFT, 26 },
		{ 69, YYAT_SHIFT, 27 },
		{ 69, YYAT_SHIFT, 28 },
		{ 69, YYAT_SHIFT, 29 },
		{ 69, YYAT_SHIFT, 30 },
		{ 69, YYAT_SHIFT, 31 },
		{ 69, YYAT_SHIFT, 32 },
		{ 69, YYAT_SHIFT, 33 },
		{ 69, YYAT_SHIFT, 34 },
		{ 69, YYAT_SHIFT, 35 },
		{ 69, YYAT_SHIFT, 36 },
		{ 69, YYAT_SHIFT, 37 },
		{ 69, YYAT_SHIFT, 38 },
		{ 69, YYAT_SHIFT, 39 },
		{ 69, YYAT_SHIFT, 40 },
		{ 69, YYAT_SHIFT, 41 },
		{ 69, YYAT_SHIFT, 42 },
		{ 69, YYAT_SHIFT, 43 },
		{ 69, YYAT_SHIFT, 44 },
		{ 69, YYAT_SHIFT, 45 },
		{ 69, YYAT_SHIFT, 46 },
		{ 69, YYAT_SHIFT, 47 },
		{ 104, YYAT_SHIFT, 1 },
		{ 104, YYAT_SHIFT, 2 },
		{ 104, YYAT_SHIFT, 3 },
		{ 104, YYAT_SHIFT, 4 },
		{ 104, YYAT_SHIFT, 5 },
		{ 104, YYAT_SHIFT, 6 },
		{ 65, YYAT_SHIFT, 76 },
		{ 106, YYAT_SHIFT, 110 },
		{ 105, YYAT_SHIFT, 109 },
		{ 65, YYAT_SHIFT, 61 },
		{ 100, YYAT_SHIFT, 104 },
		{ 99, YYAT_SHIFT, 103 },
		{ 98, YYAT_SHIFT, 102 },
		{ 97, YYAT_SHIFT, 101 },
		{ 95, YYAT_SHIFT, 99 },
		{ 92, YYAT_SHIFT, 98 },
		{ 91, YYAT_SHIFT, 97 },
		{ 88, YYAT_SHIFT, 94 },
		{ 87, YYAT_SHIFT, 93 },
		{ 86, YYAT_SHIFT, 92 },
		{ 85, YYAT_SHIFT, 91 },
		{ 83, YYAT_SHIFT, 89 },
		{ 76, YYAT_SHIFT, 82 },
		{ 75, YYAT_SHIFT, 81 },
		{ 74, YYAT_SHIFT, 80 },
		{ 73, YYAT_SHIFT, 79 },
		{ 64, YYAT_SHIFT, 75 },
		{ 63, YYAT_SHIFT, 74 },
		{ 104, YYAT_SHIFT, 7 },
		{ 62, YYAT_SHIFT, 73 },
		{ 104, YYAT_SHIFT, 8 },
		{ 104, YYAT_SHIFT, 9 },
		{ 61, YYAT_SHIFT, 72 },
		{ 56, YYAT_SHIFT, 11 },
		{ 55, YYAT_SHIFT, 61 },
		{ 25, YYAT_SHIFT, 68 },
		{ 23, YYAT_SHIFT, 11 },
		{ 21, YYAT_ERROR, 0 },
		{ 20, YYAT_SHIFT, 59 },
		{ 19, YYAT_SHIFT, 58 },
		{ 18, YYAT_SHIFT, 57 },
		{ 17, YYAT_ACCEPT, 0 },
		{ 15, YYAT_SHIFT, 54 },
		{ 14, YYAT_SHIFT, 53 },
		{ 13, YYAT_SHIFT, 48 },
		{ 9, YYAT_SHIFT, 24 },
		{ 8, YYAT_SHIFT, 23 },
		{ 7, YYAT_SHIFT, 22 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -170, 1, YYAT_ERROR, 0 },
		{ -171, 1, YYAT_ERROR, 0 },
		{ -172, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ -178, 1, YYAT_DEFAULT, 84 },
		{ -179, 1, YYAT_ERROR, 0 },
		{ -180, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 56 },
		{ 119, 1, YYAT_ERROR, 0 },
		{ -182, 1, YYAT_DEFAULT, 66 },
		{ -183, 1, YYAT_ERROR, 0 },
		{ -184, 1, YYAT_ERROR, 0 },
		{ -185, 1, YYAT_DEFAULT, 67 },
		{ 0, 0, YYAT_DEFAULT, 23 },
		{ -188, 1, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_DEFAULT, 56 },
		{ -183, 1, YYAT_DEFAULT, 96 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 23 },
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
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -187, 1, YYAT_REDUCE, 45 },
		{ -191, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ -192, 1, YYAT_ERROR, 0 },
		{ -189, 1, YYAT_DEFAULT, 96 },
		{ -191, 1, YYAT_DEFAULT, 65 },
		{ -192, 1, YYAT_DEFAULT, 96 },
		{ -212, 1, YYAT_ERROR, 0 },
		{ -274, 1, YYAT_ERROR, 0 },
		{ -270, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ -207, 1, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ -229, 1, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ -190, 1, YYAT_ERROR, 0 },
		{ -191, 1, YYAT_ERROR, 0 },
		{ -192, 1, YYAT_ERROR, 0 },
		{ -193, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ 0, 0, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_DEFAULT, 104 },
		{ -201, 1, YYAT_DEFAULT, 84 },
		{ -272, 1, YYAT_DEFAULT, 96 },
		{ -196, 1, YYAT_ERROR, 0 },
		{ -197, 1, YYAT_ERROR, 0 },
		{ -198, 1, YYAT_ERROR, 0 },
		{ -199, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 90 },
		{ -272, 1, YYAT_ERROR, 0 },
		{ -192, 1, YYAT_REDUCE, 47 },
		{ -193, 1, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ -204, 1, YYAT_DEFAULT, 96 },
		{ -263, 1, YYAT_ERROR, 0 },
		{ -202, 1, YYAT_ERROR, 0 },
		{ -203, 1, YYAT_ERROR, 0 },
		{ -204, 1, YYAT_ERROR, 0 },
		{ -205, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_DEFAULT, 104 },
		{ -179, 1, YYAT_DEFAULT, 23 },
		{ -208, 1, YYAT_ERROR, 0 },
		{ -209, 1, YYAT_ERROR, 0 },
		{ -262, 1, YYAT_ERROR, 0 },
		{ -267, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 53 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 36;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 104, 108 },
		{ 104, 16 },
		{ 96, 49 },
		{ 96, 50 },
		{ 96, 52 },
		{ 96, 51 },
		{ 104, 21 },
		{ 104, 13 },
		{ 104, 18 },
		{ 104, 14 },
		{ 104, 19 },
		{ 104, 15 },
		{ 104, 20 },
		{ 24, 67 },
		{ 103, 107 },
		{ 24, 66 },
		{ 23, 65 },
		{ 23, 64 },
		{ 22, 63 },
		{ 22, 62 },
		{ 102, 106 },
		{ 101, 105 },
		{ 90, 96 },
		{ 89, 95 },
		{ 82, 88 },
		{ 81, 87 },
		{ 80, 86 },
		{ 79, 85 },
		{ 78, 84 },
		{ 77, 83 },
		{ 60, 71 },
		{ 56, 70 },
		{ 49, 69 },
		{ 16, 55 },
		{ 10, 25 },
		{ 0, 17 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 34, 104 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 96 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 11, -1 },
		{ 9, -1 },
		{ 6, -1 },
		{ 0, 96 },
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
		{ 24, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, -1 },
		{ 0, -1 },
		{ 0, 96 },
		{ 0, -1 },
		{ 0, 96 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 96 },
		{ 0, -1 },
		{ 0, 96 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 21, -1 },
		{ 20, -1 },
		{ 26, 104 },
		{ 25, 104 },
		{ 24, 104 },
		{ 23, 104 },
		{ 0, 96 },
		{ 0, 96 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 15, -1 },
		{ 14, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 96 },
		{ -1, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, 104 },
		{ 19, 104 },
		{ 13, 104 },
		{ -1, -1 },
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
#line 310 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			n = parser.yyparse();
		}
	}
	return n;
}


