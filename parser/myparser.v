#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 68 of your 30 day trial period.
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
# Date: 11/28/18
# Time: 00:55:09
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : program $end

    1  program : MAIN LPRACE RPRACE LBRACE code RBRACE
    2          | MAIN LPRACE VOID RPRACE LBRACE code RBRACE
    3          | VOID MAIN LPRACE RPRACE LBRACE code RBRACE
    4          | VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE
    5          | INT MAIN LPRACE RPRACE LBRACE code RBRACE
    6          | INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE

    7  code : stmt
    8       | code stmt

    9  stmt : exp SIMICOLON
   10       | asgn_stmt SIMICOLON
   11       | dec_stmt SIMICOLON
   12       | if_stmt
   13       | while_stmt
   14       | for_stmt

   15  type : INT
   16       | DOUBLE
   17       | FLOAT
   18       | CHAR
   19       | BOOL
   20       | VOID

   21  op : ari_op
   22     | rel_op
   23     | log_op
   24     | ASSIGN

   25  ari_op : PLUS
   26         | MINUS
   27         | MUL
   28         | DIV
   29         | MOD
   30         | INC
   31         | DEC
   32         | INAD
   33         | IOR
   34         | XOR
   35         | NOT
   36         | SHL
   37         | SHR

   38  rel_op : EQ
   39         | GT
   40         | LT
   41         | GE
   42         | LE
   43         | NEQ

   44  log_op : AND
   45         | OR
   46         | OPPOSITE

   47  id : ID
   48     | id COMMA ID

   49  exp : exp op exp
   50      | LPRACE exp RPRACE
   51      | NUMBER
   52      | id

   53  asgn_stmt : id ASSIGN exp
   54            | asgn_stmt COMMA id

   55  dec_stmt : type id

   56  if_stmt : IF LPRACE exp RPRACE stmt

   57  while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE
   58             | WHILE LPRACE id RPRACE LBRACE stmt RBRACE

   59  for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
   60           | FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE


##############################################################################
# States
##############################################################################

state 0
	$accept : . program $end

	INT  shift 1
	VOID  shift 2
	MAIN  shift 3

	program  goto 4


state 1
	program : INT . MAIN LPRACE RPRACE LBRACE code RBRACE
	program : INT . MAIN LPRACE VOID RPRACE LBRACE code RBRACE

	MAIN  shift 5


state 2
	program : VOID . MAIN LPRACE RPRACE LBRACE code RBRACE
	program : VOID . MAIN LPRACE VOID RPRACE LBRACE code RBRACE

	MAIN  shift 6


state 3
	program : MAIN . LPRACE RPRACE LBRACE code RBRACE
	program : MAIN . LPRACE VOID RPRACE LBRACE code RBRACE

	LPRACE  shift 7


state 4
	$accept : program . $end  (0)

	$end  accept


state 5
	program : INT MAIN . LPRACE RPRACE LBRACE code RBRACE
	program : INT MAIN . LPRACE VOID RPRACE LBRACE code RBRACE

	LPRACE  shift 8


state 6
	program : VOID MAIN . LPRACE RPRACE LBRACE code RBRACE
	program : VOID MAIN . LPRACE VOID RPRACE LBRACE code RBRACE

	LPRACE  shift 9


state 7
	program : MAIN LPRACE . RPRACE LBRACE code RBRACE
	program : MAIN LPRACE . VOID RPRACE LBRACE code RBRACE

	VOID  shift 10
	RPRACE  shift 11


state 8
	program : INT MAIN LPRACE . RPRACE LBRACE code RBRACE
	program : INT MAIN LPRACE . VOID RPRACE LBRACE code RBRACE

	VOID  shift 12
	RPRACE  shift 13


state 9
	program : VOID MAIN LPRACE . RPRACE LBRACE code RBRACE
	program : VOID MAIN LPRACE . VOID RPRACE LBRACE code RBRACE

	VOID  shift 14
	RPRACE  shift 15


state 10
	program : MAIN LPRACE VOID . RPRACE LBRACE code RBRACE

	RPRACE  shift 16


state 11
	program : MAIN LPRACE RPRACE . LBRACE code RBRACE

	LBRACE  shift 17


state 12
	program : INT MAIN LPRACE VOID . RPRACE LBRACE code RBRACE

	RPRACE  shift 18


state 13
	program : INT MAIN LPRACE RPRACE . LBRACE code RBRACE

	LBRACE  shift 19


state 14
	program : VOID MAIN LPRACE VOID . RPRACE LBRACE code RBRACE

	RPRACE  shift 20


state 15
	program : VOID MAIN LPRACE RPRACE . LBRACE code RBRACE

	LBRACE  shift 21


state 16
	program : MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 22


state 17
	program : MAIN LPRACE RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	code  goto 35
	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 18
	program : INT MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 45


state 19
	program : INT MAIN LPRACE RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	code  goto 46
	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 20
	program : VOID MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 47


state 21
	program : VOID MAIN LPRACE RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	code  goto 48
	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 22
	program : MAIN LPRACE VOID RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	code  goto 49
	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 23
	type : INT .  (15)

	.  reduce 15


state 24
	type : DOUBLE .  (16)

	.  reduce 16


state 25
	type : FLOAT .  (17)

	.  reduce 17


state 26
	type : CHAR .  (18)

	.  reduce 18


state 27
	type : BOOL .  (19)

	.  reduce 19


state 28
	type : VOID .  (20)

	.  reduce 20


state 29
	if_stmt : IF . LPRACE exp RPRACE stmt

	LPRACE  shift 50


state 30
	while_stmt : WHILE . LPRACE id RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE . LPRACE exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 51


state 31
	for_stmt : FOR . LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR . LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 52


state 32
	exp : LPRACE . exp RPRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 53
	id  goto 54


state 33
	id : ID .  (47)

	.  reduce 47


state 34
	exp : NUMBER .  (51)

	.  reduce 51


state 35
	program : MAIN LPRACE RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 55
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 56
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 36
	stmt : asgn_stmt . SIMICOLON
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 57
	SIMICOLON  shift 58


state 37
	stmt : exp . SIMICOLON
	exp : exp . op exp

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	SIMICOLON  shift 82

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


state 38
	stmt : if_stmt .  (12)

	.  reduce 12


state 39
	stmt : dec_stmt . SIMICOLON

	SIMICOLON  shift 87


state 40
	stmt : while_stmt .  (13)

	.  reduce 13


state 41
	code : stmt .  (7)

	.  reduce 7


state 42
	stmt : for_stmt .  (14)

	.  reduce 14


state 43
	dec_stmt : type . id

	ID  shift 33

	id  goto 88


44: shift-reduce conflict (shift 89, reduce 52) on ASSIGN
state 44
	id : id . COMMA ID
	asgn_stmt : id . ASSIGN exp
	exp : id .  (52)

	ASSIGN  shift 89
	COMMA  shift 90
	.  reduce 52


state 45
	program : INT MAIN LPRACE VOID RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	code  goto 91
	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 46
	program : INT MAIN LPRACE RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 92
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 56
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 47
	program : VOID MAIN LPRACE VOID RPRACE LBRACE . code RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	code  goto 93
	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 41
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 48
	program : VOID MAIN LPRACE RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 94
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 56
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 49
	program : MAIN LPRACE VOID RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 95
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 56
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 50
	if_stmt : IF LPRACE . exp RPRACE stmt

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 96
	id  goto 54


state 51
	while_stmt : WHILE LPRACE . id RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE LPRACE . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 97
	id  goto 98


state 52
	for_stmt : FOR LPRACE . id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR LPRACE . asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	ID  shift 33

	asgn_stmt  goto 99
	id  goto 100


state 53
	exp : exp . op exp
	exp : LPRACE exp . RPRACE

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	RPRACE  shift 101

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


54: shift-reduce conflict (shift 90, reduce 52) on COMMA
state 54
	id : id . COMMA ID
	exp : id .  (52)

	COMMA  shift 90
	.  reduce 52


state 55
	program : MAIN LPRACE RPRACE LBRACE code RBRACE .  (1)

	.  reduce 1


state 56
	code : code stmt .  (8)

	.  reduce 8


state 57
	asgn_stmt : asgn_stmt COMMA . id

	ID  shift 33

	id  goto 102


state 58
	stmt : asgn_stmt SIMICOLON .  (10)

	.  reduce 10


state 59
	ari_op : PLUS .  (25)

	.  reduce 25


state 60
	ari_op : MINUS .  (26)

	.  reduce 26


state 61
	ari_op : MUL .  (27)

	.  reduce 27


state 62
	ari_op : DIV .  (28)

	.  reduce 28


state 63
	ari_op : MOD .  (29)

	.  reduce 29


state 64
	ari_op : INC .  (30)

	.  reduce 30


state 65
	ari_op : DEC .  (31)

	.  reduce 31


state 66
	ari_op : INAD .  (32)

	.  reduce 32


state 67
	ari_op : IOR .  (33)

	.  reduce 33


state 68
	ari_op : XOR .  (34)

	.  reduce 34


state 69
	ari_op : NOT .  (35)

	.  reduce 35


state 70
	ari_op : SHL .  (36)

	.  reduce 36


state 71
	ari_op : SHR .  (37)

	.  reduce 37


state 72
	rel_op : EQ .  (38)

	.  reduce 38


state 73
	rel_op : GT .  (39)

	.  reduce 39


state 74
	rel_op : LT .  (40)

	.  reduce 40


state 75
	rel_op : GE .  (41)

	.  reduce 41


state 76
	rel_op : LE .  (42)

	.  reduce 42


state 77
	rel_op : NEQ .  (43)

	.  reduce 43


state 78
	log_op : AND .  (44)

	.  reduce 44


state 79
	log_op : OR .  (45)

	.  reduce 45


state 80
	log_op : OPPOSITE .  (46)

	.  reduce 46


state 81
	op : ASSIGN .  (24)

	.  reduce 24


state 82
	stmt : exp SIMICOLON .  (9)

	.  reduce 9


state 83
	op : log_op .  (23)

	.  reduce 23


state 84
	op : ari_op .  (21)

	.  reduce 21


state 85
	op : rel_op .  (22)

	.  reduce 22


state 86
	exp : exp op . exp

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 103
	id  goto 54


state 87
	stmt : dec_stmt SIMICOLON .  (11)

	.  reduce 11


state 88
	id : id . COMMA ID
	dec_stmt : type id .  (55)

	COMMA  shift 90
	.  reduce 55


state 89
	asgn_stmt : id ASSIGN . exp

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 104
	id  goto 54


state 90
	id : id COMMA . ID

	ID  shift 105


state 91
	program : INT MAIN LPRACE VOID RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 106
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 56
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 92
	program : INT MAIN LPRACE RPRACE LBRACE code RBRACE .  (5)

	.  reduce 5


state 93
	program : VOID MAIN LPRACE VOID RPRACE LBRACE code . RBRACE
	code : code . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	RBRACE  shift 107
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 56
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 94
	program : VOID MAIN LPRACE RPRACE LBRACE code RBRACE .  (3)

	.  reduce 3


state 95
	program : MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (2)

	.  reduce 2


state 96
	exp : exp . op exp
	if_stmt : IF LPRACE exp . RPRACE stmt

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	RPRACE  shift 108

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


state 97
	while_stmt : WHILE LPRACE exp . RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	RPRACE  shift 109

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


98: shift-reduce conflict (shift 110, reduce 52) on RPRACE
state 98
	while_stmt : WHILE LPRACE id . RPRACE LBRACE stmt RBRACE
	id : id . COMMA ID
	exp : id .  (52)

	RPRACE  shift 110
	COMMA  shift 90
	.  reduce 52


state 99
	asgn_stmt : asgn_stmt . COMMA id
	for_stmt : FOR LPRACE asgn_stmt . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	COMMA  shift 57
	SIMICOLON  shift 111


state 100
	for_stmt : FOR LPRACE id . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	id : id . COMMA ID
	asgn_stmt : id . ASSIGN exp

	ASSIGN  shift 89
	COMMA  shift 90
	SIMICOLON  shift 112


state 101
	exp : LPRACE exp RPRACE .  (50)

	.  reduce 50


state 102
	asgn_stmt : asgn_stmt COMMA id .  (54)
	id : id . COMMA ID

	.  reduce 54


103: shift-reduce conflict (shift 59, reduce 49) on PLUS
103: shift-reduce conflict (shift 60, reduce 49) on MINUS
103: shift-reduce conflict (shift 61, reduce 49) on MUL
103: shift-reduce conflict (shift 62, reduce 49) on DIV
103: shift-reduce conflict (shift 63, reduce 49) on MOD
103: shift-reduce conflict (shift 64, reduce 49) on INC
103: shift-reduce conflict (shift 65, reduce 49) on DEC
103: shift-reduce conflict (shift 66, reduce 49) on INAD
103: shift-reduce conflict (shift 67, reduce 49) on IOR
103: shift-reduce conflict (shift 68, reduce 49) on XOR
103: shift-reduce conflict (shift 69, reduce 49) on NOT
103: shift-reduce conflict (shift 70, reduce 49) on SHL
103: shift-reduce conflict (shift 71, reduce 49) on SHR
103: shift-reduce conflict (shift 72, reduce 49) on EQ
103: shift-reduce conflict (shift 73, reduce 49) on GT
103: shift-reduce conflict (shift 74, reduce 49) on LT
103: shift-reduce conflict (shift 75, reduce 49) on GE
103: shift-reduce conflict (shift 76, reduce 49) on LE
103: shift-reduce conflict (shift 77, reduce 49) on NEQ
103: shift-reduce conflict (shift 78, reduce 49) on AND
103: shift-reduce conflict (shift 79, reduce 49) on OR
103: shift-reduce conflict (shift 80, reduce 49) on OPPOSITE
103: shift-reduce conflict (shift 81, reduce 49) on ASSIGN
state 103
	exp : exp op exp .  (49)
	exp : exp . op exp

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	.  reduce 49

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


state 104
	exp : exp . op exp
	asgn_stmt : id ASSIGN exp .  (53)

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	.  reduce 53

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


state 105
	id : id COMMA ID .  (48)

	.  reduce 48


state 106
	program : INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (6)

	.  reduce 6


state 107
	program : VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (4)

	.  reduce 4


state 108
	if_stmt : IF LPRACE exp RPRACE . stmt

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 113
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 109
	while_stmt : WHILE LPRACE exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 114


state 110
	while_stmt : WHILE LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 115


state 111
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 116
	id  goto 54


state 112
	for_stmt : FOR LPRACE id SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 117
	id  goto 54


state 113
	if_stmt : IF LPRACE exp RPRACE stmt .  (56)

	.  reduce 56


state 114
	while_stmt : WHILE LPRACE exp RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 118
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 115
	while_stmt : WHILE LPRACE id RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 119
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 116
	exp : exp . op exp
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	SIMICOLON  shift 120

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


state 117
	for_stmt : FOR LPRACE id SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	SIMICOLON  shift 121

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


state 118
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 122


state 119
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 123


state 120
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 124
	id  goto 54


state 121
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 125
	id  goto 54


state 122
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE .  (57)

	.  reduce 57


state 123
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt RBRACE .  (58)

	.  reduce 58


state 124
	exp : exp . op exp
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	RPRACE  shift 126

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


state 125
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 59
	MINUS  shift 60
	MUL  shift 61
	DIV  shift 62
	MOD  shift 63
	INC  shift 64
	DEC  shift 65
	INAD  shift 66
	IOR  shift 67
	XOR  shift 68
	NOT  shift 69
	SHL  shift 70
	SHR  shift 71
	EQ  shift 72
	GT  shift 73
	LT  shift 74
	GE  shift 75
	LE  shift 76
	NEQ  shift 77
	AND  shift 78
	OR  shift 79
	OPPOSITE  shift 80
	ASSIGN  shift 81
	RPRACE  shift 127

	log_op  goto 83
	ari_op  goto 84
	rel_op  goto 85
	op  goto 86


state 126
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 128


state 127
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 129


state 128
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 130
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 129
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE . stmt RBRACE

	INT  shift 23
	DOUBLE  shift 24
	FLOAT  shift 25
	CHAR  shift 26
	BOOL  shift 27
	VOID  shift 28
	IF  shift 29
	WHILE  shift 30
	FOR  shift 31
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	asgn_stmt  goto 36
	exp  goto 37
	if_stmt  goto 38
	dec_stmt  goto 39
	while_stmt  goto 40
	stmt  goto 131
	for_stmt  goto 42
	type  goto 43
	id  goto 44


state 130
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 132


state 131
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 133


state 132
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (59)

	.  reduce 59


state 133
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (60)

	.  reduce 60


##############################################################################
# Summary
##############################################################################

State 44 contains 1 shift-reduce conflict(s)
State 54 contains 1 shift-reduce conflict(s)
State 98 contains 1 shift-reduce conflict(s)
State 103 contains 23 shift-reduce conflict(s)


43 token(s), 16 nonterminal(s)
61 grammar rule(s), 134 state(s)


##############################################################################
# End of File
##############################################################################
