#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 66 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 11/25/18
# Time: 19:53:37
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : stmt $end

    1  stmt : exp SIMICOLON
    2       | asgn_stmt SIMICOLON
    3       | dec_stmt SIMICOLON
    4       | if_stmt SIMICOLON
    5       | while_stmt SIMICOLON
    6       | for_stmt SIMICOLON

    7  type : INT
    8       | DOUBLE
    9       | FLOAT
   10       | CHAR
   11       | BOOL
   12       | VOID

   13  op : ari_op
   14     | rel_op
   15     | log_op

   16  ari_op : PLUS
   17         | MINUS
   18         | MUL
   19         | DIV
   20         | MOD
   21         | INC
   22         | DEC
   23         | INAD
   24         | IOR
   25         | XOR
   26         | NOT
   27         | SHL
   28         | SHR

   29  rel_op : EQ
   30         | GT
   31         | LT
   32         | GE
   33         | LE
   34         | NEQ

   35  log_op : AND
   36         | OR
   37         | OPPOSITE

   38  id : ID
   39     | id COMMA ID

   40  exp : exp op exp
   41      | LPRACE exp RPRACE
   42      | NUMBER

   43  asgn_stmt : id ASSIGN exp
   44            | asgn_stmt COMMA id

   45  dec_stmt : type id

   46  if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   47          | IF LPRACE exp RPRACE LBRACE stmt RBRACE
   48          | IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   49          | IF LPRACE id RPRACE LBRACE stmt RBRACE

   50  while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE
   51             | WHILE LPRACE id RPRACE LBRACE stmt RBRACE

   52  for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
   53           | FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE


##############################################################################
# States
##############################################################################

state 0
	$accept : . stmt $end

	INT  shift 1
	DOUBLE  shift 2
	FLOAT  shift 3
	CHAR  shift 4
	BOOL  shift 5
	VOID  shift 6
	IF  shift 7
	WHILE  shift 8
	FOR  shift 9
	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 13
	dec_stmt  goto 14
	while_stmt  goto 15
	type  goto 16
	stmt  goto 17
	asgn_stmt  goto 18
	if_stmt  goto 19
	for_stmt  goto 20
	id  goto 21


state 1
	type : INT .  (7)

	.  reduce 7


state 2
	type : DOUBLE .  (8)

	.  reduce 8


state 3
	type : FLOAT .  (9)

	.  reduce 9


state 4
	type : CHAR .  (10)

	.  reduce 10


state 5
	type : BOOL .  (11)

	.  reduce 11


state 6
	type : VOID .  (12)

	.  reduce 12


state 7
	if_stmt : IF . LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE exp RPRACE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	LPRACE  shift 22


state 8
	while_stmt : WHILE . LPRACE exp RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE . LPRACE id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 23


state 9
	for_stmt : FOR . LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR . LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 24


state 10
	exp : LPRACE . exp RPRACE

	LPRACE  shift 10
	NUMBER  shift 12

	exp  goto 25


state 11
	id : ID .  (38)

	.  reduce 38


state 12
	exp : NUMBER .  (42)

	.  reduce 42


state 13
	stmt : exp . SIMICOLON
	exp : exp . op exp

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	SIMICOLON  shift 48

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 14
	stmt : dec_stmt . SIMICOLON

	SIMICOLON  shift 53


state 15
	stmt : while_stmt . SIMICOLON

	SIMICOLON  shift 54


state 16
	dec_stmt : type . id

	ID  shift 11

	id  goto 55


state 17
	$accept : stmt . $end  (0)

	$end  accept


state 18
	stmt : asgn_stmt . SIMICOLON
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 56
	SIMICOLON  shift 57


state 19
	stmt : if_stmt . SIMICOLON

	SIMICOLON  shift 58


state 20
	stmt : for_stmt . SIMICOLON

	SIMICOLON  shift 59


state 21
	id : id . COMMA ID
	asgn_stmt : id . ASSIGN exp

	ASSIGN  shift 60
	COMMA  shift 61


state 22
	if_stmt : IF LPRACE . exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . exp RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 62
	id  goto 63


state 23
	while_stmt : WHILE LPRACE . exp RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE LPRACE . id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 64
	id  goto 65


state 24
	for_stmt : FOR LPRACE . id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR LPRACE . asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	ID  shift 11

	asgn_stmt  goto 66
	id  goto 67


state 25
	exp : exp . op exp
	exp : LPRACE exp . RPRACE

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	RPRACE  shift 68

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 26
	ari_op : PLUS .  (16)

	.  reduce 16


state 27
	ari_op : MINUS .  (17)

	.  reduce 17


state 28
	ari_op : MUL .  (18)

	.  reduce 18


state 29
	ari_op : DIV .  (19)

	.  reduce 19


state 30
	ari_op : MOD .  (20)

	.  reduce 20


state 31
	ari_op : INC .  (21)

	.  reduce 21


state 32
	ari_op : DEC .  (22)

	.  reduce 22


state 33
	ari_op : INAD .  (23)

	.  reduce 23


state 34
	ari_op : IOR .  (24)

	.  reduce 24


state 35
	ari_op : XOR .  (25)

	.  reduce 25


state 36
	ari_op : NOT .  (26)

	.  reduce 26


state 37
	ari_op : SHL .  (27)

	.  reduce 27


state 38
	ari_op : SHR .  (28)

	.  reduce 28


state 39
	rel_op : EQ .  (29)

	.  reduce 29


state 40
	rel_op : GT .  (30)

	.  reduce 30


state 41
	rel_op : LT .  (31)

	.  reduce 31


state 42
	rel_op : GE .  (32)

	.  reduce 32


state 43
	rel_op : LE .  (33)

	.  reduce 33


state 44
	rel_op : NEQ .  (34)

	.  reduce 34


state 45
	log_op : AND .  (35)

	.  reduce 35


state 46
	log_op : OR .  (36)

	.  reduce 36


state 47
	log_op : OPPOSITE .  (37)

	.  reduce 37


state 48
	stmt : exp SIMICOLON .  (1)

	.  reduce 1


state 49
	exp : exp op . exp

	LPRACE  shift 10
	NUMBER  shift 12

	exp  goto 69


state 50
	op : ari_op .  (13)

	.  reduce 13


state 51
	op : log_op .  (15)

	.  reduce 15


state 52
	op : rel_op .  (14)

	.  reduce 14


state 53
	stmt : dec_stmt SIMICOLON .  (3)

	.  reduce 3


state 54
	stmt : while_stmt SIMICOLON .  (5)

	.  reduce 5


state 55
	dec_stmt : type id .  (45)
	id : id . COMMA ID

	COMMA  shift 61
	.  reduce 45


state 56
	asgn_stmt : asgn_stmt COMMA . id

	ID  shift 11

	id  goto 70


state 57
	stmt : asgn_stmt SIMICOLON .  (2)

	.  reduce 2


state 58
	stmt : if_stmt SIMICOLON .  (4)

	.  reduce 4


state 59
	stmt : for_stmt SIMICOLON .  (6)

	.  reduce 6


state 60
	asgn_stmt : id ASSIGN . exp

	LPRACE  shift 10
	NUMBER  shift 12

	exp  goto 71


state 61
	id : id COMMA . ID

	ID  shift 72


state 62
	if_stmt : IF LPRACE exp . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	exp : exp . op exp
	if_stmt : IF LPRACE exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	RPRACE  shift 73

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 63
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE
	id : id . COMMA ID
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	RPRACE  shift 74
	COMMA  shift 61


state 64
	exp : exp . op exp
	while_stmt : WHILE LPRACE exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	RPRACE  shift 75

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 65
	id : id . COMMA ID
	while_stmt : WHILE LPRACE id . RPRACE LBRACE stmt RBRACE

	RPRACE  shift 76
	COMMA  shift 61


state 66
	asgn_stmt : asgn_stmt . COMMA id
	for_stmt : FOR LPRACE asgn_stmt . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	COMMA  shift 56
	SIMICOLON  shift 77


state 67
	id : id . COMMA ID
	for_stmt : FOR LPRACE id . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	asgn_stmt : id . ASSIGN exp

	ASSIGN  shift 60
	COMMA  shift 61
	SIMICOLON  shift 78


state 68
	exp : LPRACE exp RPRACE .  (41)

	.  reduce 41


69: shift-reduce conflict (shift 26, reduce 40) on PLUS
69: shift-reduce conflict (shift 27, reduce 40) on MINUS
69: shift-reduce conflict (shift 28, reduce 40) on MUL
69: shift-reduce conflict (shift 29, reduce 40) on DIV
69: shift-reduce conflict (shift 30, reduce 40) on MOD
69: shift-reduce conflict (shift 31, reduce 40) on INC
69: shift-reduce conflict (shift 32, reduce 40) on DEC
69: shift-reduce conflict (shift 33, reduce 40) on INAD
69: shift-reduce conflict (shift 34, reduce 40) on IOR
69: shift-reduce conflict (shift 35, reduce 40) on XOR
69: shift-reduce conflict (shift 36, reduce 40) on NOT
69: shift-reduce conflict (shift 37, reduce 40) on SHL
69: shift-reduce conflict (shift 38, reduce 40) on SHR
69: shift-reduce conflict (shift 39, reduce 40) on EQ
69: shift-reduce conflict (shift 40, reduce 40) on GT
69: shift-reduce conflict (shift 41, reduce 40) on LT
69: shift-reduce conflict (shift 42, reduce 40) on GE
69: shift-reduce conflict (shift 43, reduce 40) on LE
69: shift-reduce conflict (shift 44, reduce 40) on NEQ
69: shift-reduce conflict (shift 45, reduce 40) on AND
69: shift-reduce conflict (shift 46, reduce 40) on OR
69: shift-reduce conflict (shift 47, reduce 40) on OPPOSITE
state 69
	exp : exp op exp .  (40)
	exp : exp . op exp

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	.  reduce 40

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 70
	id : id . COMMA ID
	asgn_stmt : asgn_stmt COMMA id .  (44)

	.  reduce 44


state 71
	exp : exp . op exp
	asgn_stmt : id ASSIGN exp .  (43)

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	.  reduce 43

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 72
	id : id COMMA ID .  (39)

	.  reduce 39


state 73
	if_stmt : IF LPRACE exp RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 79


state 74
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	LBRACE  shift 80


state 75
	while_stmt : WHILE LPRACE exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 81


state 76
	while_stmt : WHILE LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 82


state 77
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 10
	NUMBER  shift 12

	exp  goto 83


state 78
	for_stmt : FOR LPRACE id SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 10
	NUMBER  shift 12

	exp  goto 84


state 79
	if_stmt : IF LPRACE exp RPRACE LBRACE . stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE LBRACE . stmt RBRACE

	INT  shift 1
	DOUBLE  shift 2
	FLOAT  shift 3
	CHAR  shift 4
	BOOL  shift 5
	VOID  shift 6
	IF  shift 7
	WHILE  shift 8
	FOR  shift 9
	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 13
	dec_stmt  goto 14
	while_stmt  goto 15
	type  goto 16
	stmt  goto 85
	asgn_stmt  goto 18
	if_stmt  goto 19
	for_stmt  goto 20
	id  goto 21


state 80
	if_stmt : IF LPRACE id RPRACE LBRACE . stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE . stmt RBRACE ELSE LBRACE stmt RBRACE

	INT  shift 1
	DOUBLE  shift 2
	FLOAT  shift 3
	CHAR  shift 4
	BOOL  shift 5
	VOID  shift 6
	IF  shift 7
	WHILE  shift 8
	FOR  shift 9
	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 13
	dec_stmt  goto 14
	while_stmt  goto 15
	type  goto 16
	stmt  goto 86
	asgn_stmt  goto 18
	if_stmt  goto 19
	for_stmt  goto 20
	id  goto 21


state 81
	while_stmt : WHILE LPRACE exp RPRACE LBRACE . stmt RBRACE

	INT  shift 1
	DOUBLE  shift 2
	FLOAT  shift 3
	CHAR  shift 4
	BOOL  shift 5
	VOID  shift 6
	IF  shift 7
	WHILE  shift 8
	FOR  shift 9
	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 13
	dec_stmt  goto 14
	while_stmt  goto 15
	type  goto 16
	stmt  goto 87
	asgn_stmt  goto 18
	if_stmt  goto 19
	for_stmt  goto 20
	id  goto 21


state 82
	while_stmt : WHILE LPRACE id RPRACE LBRACE . stmt RBRACE

	INT  shift 1
	DOUBLE  shift 2
	FLOAT  shift 3
	CHAR  shift 4
	BOOL  shift 5
	VOID  shift 6
	IF  shift 7
	WHILE  shift 8
	FOR  shift 9
	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 13
	dec_stmt  goto 14
	while_stmt  goto 15
	type  goto 16
	stmt  goto 88
	asgn_stmt  goto 18
	if_stmt  goto 19
	for_stmt  goto 20
	id  goto 21


state 83
	exp : exp . op exp
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	SIMICOLON  shift 89

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 84
	exp : exp . op exp
	for_stmt : FOR LPRACE id SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	SIMICOLON  shift 90

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 85
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 91


state 86
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE

	RBRACE  shift 92


state 87
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 93


state 88
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 94


state 89
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 10
	NUMBER  shift 12

	exp  goto 95


state 90
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 10
	NUMBER  shift 12

	exp  goto 96


state 91
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE .  (47)

	ELSE  shift 97
	.  reduce 47


state 92
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE .  (49)
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE

	ELSE  shift 98
	.  reduce 49


state 93
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE .  (50)

	.  reduce 50


state 94
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt RBRACE .  (51)

	.  reduce 51


state 95
	exp : exp . op exp
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	RPRACE  shift 99

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 96
	exp : exp . op exp
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 26
	MINUS  shift 27
	MUL  shift 28
	DIV  shift 29
	MOD  shift 30
	INC  shift 31
	DEC  shift 32
	INAD  shift 33
	IOR  shift 34
	XOR  shift 35
	NOT  shift 36
	SHL  shift 37
	SHR  shift 38
	EQ  shift 39
	GT  shift 40
	LT  shift 41
	GE  shift 42
	LE  shift 43
	NEQ  shift 44
	AND  shift 45
	OR  shift 46
	OPPOSITE  shift 47
	RPRACE  shift 100

	op  goto 49
	ari_op  goto 50
	log_op  goto 51
	rel_op  goto 52


state 97
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 101


state 98
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 102


state 99
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 103


state 100
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 104


state 101
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE . stmt RBRACE

	INT  shift 1
	DOUBLE  shift 2
	FLOAT  shift 3
	CHAR  shift 4
	BOOL  shift 5
	VOID  shift 6
	IF  shift 7
	WHILE  shift 8
	FOR  shift 9
	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 13
	dec_stmt  goto 14
	while_stmt  goto 15
	type  goto 16
	stmt  goto 105
	asgn_stmt  goto 18
	if_stmt  goto 19
	for_stmt  goto 20
	id  goto 21


state 102
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE . stmt RBRACE

	INT  shift 1
	DOUBLE  shift 2
	FLOAT  shift 3
	CHAR  shift 4
	BOOL  shift 5
	VOID  shift 6
	IF  shift 7
	WHILE  shift 8
	FOR  shift 9
	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 13
	dec_stmt  goto 14
	while_stmt  goto 15
	type  goto 16
	stmt  goto 106
	asgn_stmt  goto 18
	if_stmt  goto 19
	for_stmt  goto 20
	id  goto 21


state 103
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE . stmt RBRACE

	INT  shift 1
	DOUBLE  shift 2
	FLOAT  shift 3
	CHAR  shift 4
	BOOL  shift 5
	VOID  shift 6
	IF  shift 7
	WHILE  shift 8
	FOR  shift 9
	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 13
	dec_stmt  goto 14
	while_stmt  goto 15
	type  goto 16
	stmt  goto 107
	asgn_stmt  goto 18
	if_stmt  goto 19
	for_stmt  goto 20
	id  goto 21


state 104
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE . stmt RBRACE

	INT  shift 1
	DOUBLE  shift 2
	FLOAT  shift 3
	CHAR  shift 4
	BOOL  shift 5
	VOID  shift 6
	IF  shift 7
	WHILE  shift 8
	FOR  shift 9
	LPRACE  shift 10
	ID  shift 11
	NUMBER  shift 12

	exp  goto 13
	dec_stmt  goto 14
	while_stmt  goto 15
	type  goto 16
	stmt  goto 108
	asgn_stmt  goto 18
	if_stmt  goto 19
	for_stmt  goto 20
	id  goto 21


state 105
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 109


state 106
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 110


state 107
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 111


state 108
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 112


state 109
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (46)

	.  reduce 46


state 110
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (48)

	.  reduce 48


state 111
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (52)

	.  reduce 52


state 112
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (53)

	.  reduce 53


##############################################################################
# Summary
##############################################################################

State 69 contains 22 shift-reduce conflict(s)


43 token(s), 14 nonterminal(s)
54 grammar rule(s), 113 state(s)


##############################################################################
# End of File
##############################################################################
