/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 107 of your 30 day trial period.
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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 01/06/19
* Time: 16:05:03
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 27 ".\\myparser.y"

	// place any extra class members here

#line 69 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 42 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE TreeNode*	//所有的$都是TreeNode*类型
#endif

#line 82 "myparser.h"
#define INT 257
#define DOUBLE 258
#define FLOAT 259
#define CHAR 260
#define BOOL 261
#define VOID 262
#define PLUS 263
#define MINUS 264
#define MUL 265
#define DIV 266
#define MOD 267
#define INC 268
#define DEC 269
#define INAD 270
#define IOR 271
#define XOR 272
#define NOT 273
#define SHL 274
#define SHR 275
#define EQ 276
#define GT 277
#define LT 278
#define GE 279
#define LE 280
#define NEQ 281
#define AND 282
#define OR 283
#define OPPOSITE 284
#define IF 285
#define ELSE 286
#define WHILE 287
#define FOR 288
#define BREAK 289
#define RETURN 290
#define CIN 291
#define COUT 292
#define MAIN 293
#define ENDL 294
#define ASSIGN 295
#define LBRACE 296
#define RBRACE 297
#define LPRACE 298
#define RPRACE 299
#define LSBRACE 300
#define RSBRACE 301
#define COMMA 302
#define SIMICOLON 303
#define COLON 304
#define ID 305
#define NUMBER 306
#define UNKNOWN 307
#endif
