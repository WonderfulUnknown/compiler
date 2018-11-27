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
# Date: 11/27/18
# Time: 21:51:10
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
   12       | if_stmt SIMICOLON
   13       | while_stmt SIMICOLON
   14       | for_stmt SIMICOLON

   15  type : INT
   16       | DOUBLE
   17       | FLOAT
   18       | CHAR
   19       | BOOL
   20       | VOID

   21  op : ari_op
   22     | rel_op
   23     | log_op

   24  ari_op : PLUS
   25         | MINUS
   26         | MUL
   27         | DIV
   28         | MOD
   29         | INC
   30         | DEC
   31         | INAD
   32         | IOR
   33         | XOR
   34         | NOT
   35         | SHL
   36         | SHR

   37  rel_op : EQ
   38         | GT
   39         | LT
   40         | GE
   41         | LE
   42         | NEQ

   43  log_op : AND
   44         | OR
   45         | OPPOSITE

   46  id : ID
   47     | id COMMA ID

   48  exp : exp op exp
   49      | LPRACE exp RPRACE
   50      | NUMBER
   51      | id

   52  asgn_stmt : id ASSIGN exp
   53            | asgn_stmt COMMA id

   54  dec_stmt : type id

   55  if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   56          | IF LPRACE exp RPRACE LBRACE stmt RBRACE
   57          | IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
   58          | IF LPRACE id RPRACE LBRACE stmt RBRACE

   59  while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE
   60             | WHILE LPRACE id RPRACE LBRACE stmt RBRACE

   61  for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
   62           | FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE


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

	stmt  goto 35
	code  goto 36
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
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

	stmt  goto 35
	code  goto 46
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
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

	stmt  goto 35
	code  goto 48
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
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

	stmt  goto 35
	code  goto 49
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
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
	if_stmt : IF . LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF . LPRACE exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 50


state 30
	while_stmt : WHILE . LPRACE exp RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE . LPRACE id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 51


state 31
	for_stmt : FOR . LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR . LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 52


state 32
	exp : LPRACE . exp RPRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 53
	id  goto 54


state 33
	id : ID .  (46)

	.  reduce 46


state 34
	exp : NUMBER .  (50)

	.  reduce 50


state 35
	code : stmt .  (7)

	.  reduce 7


state 36
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

	stmt  goto 56
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 37
	stmt : dec_stmt . SIMICOLON

	SIMICOLON  shift 57


state 38
	stmt : if_stmt . SIMICOLON

	SIMICOLON  shift 58


state 39
	stmt : for_stmt . SIMICOLON

	SIMICOLON  shift 59


state 40
	stmt : asgn_stmt . SIMICOLON
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 60
	SIMICOLON  shift 61


state 41
	dec_stmt : type . id

	ID  shift 33

	id  goto 62


state 42
	stmt : exp . SIMICOLON
	exp : exp . op exp

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	SIMICOLON  shift 85

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


state 43
	stmt : while_stmt . SIMICOLON

	SIMICOLON  shift 90


state 44
	id : id . COMMA ID
	asgn_stmt : id . ASSIGN exp
	exp : id .  (51)

	ASSIGN  shift 91
	COMMA  shift 92
	.  reduce 51


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

	stmt  goto 35
	code  goto 93
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
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
	RBRACE  shift 94
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	stmt  goto 56
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
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

	stmt  goto 35
	code  goto 95
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
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
	RBRACE  shift 96
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	stmt  goto 56
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
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
	RBRACE  shift 97
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	stmt  goto 56
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 50
	if_stmt : IF LPRACE . exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 98
	id  goto 99


state 51
	while_stmt : WHILE LPRACE . exp RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE LPRACE . id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 100
	id  goto 101


state 52
	for_stmt : FOR LPRACE . asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR LPRACE . id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	ID  shift 33

	asgn_stmt  goto 102
	id  goto 103


state 53
	exp : exp . op exp
	exp : LPRACE exp . RPRACE

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	RPRACE  shift 104

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


54: shift-reduce conflict (shift 92, reduce 51) on COMMA
state 54
	id : id . COMMA ID
	exp : id .  (51)

	COMMA  shift 92
	.  reduce 51


state 55
	program : MAIN LPRACE RPRACE LBRACE code RBRACE .  (1)

	.  reduce 1


state 56
	code : code stmt .  (8)

	.  reduce 8


state 57
	stmt : dec_stmt SIMICOLON .  (11)

	.  reduce 11


state 58
	stmt : if_stmt SIMICOLON .  (12)

	.  reduce 12


state 59
	stmt : for_stmt SIMICOLON .  (14)

	.  reduce 14


state 60
	asgn_stmt : asgn_stmt COMMA . id

	ID  shift 33

	id  goto 105


state 61
	stmt : asgn_stmt SIMICOLON .  (10)

	.  reduce 10


state 62
	id : id . COMMA ID
	dec_stmt : type id .  (54)

	COMMA  shift 92
	.  reduce 54


state 63
	ari_op : PLUS .  (24)

	.  reduce 24


state 64
	ari_op : MINUS .  (25)

	.  reduce 25


state 65
	ari_op : MUL .  (26)

	.  reduce 26


state 66
	ari_op : DIV .  (27)

	.  reduce 27


state 67
	ari_op : MOD .  (28)

	.  reduce 28


state 68
	ari_op : INC .  (29)

	.  reduce 29


state 69
	ari_op : DEC .  (30)

	.  reduce 30


state 70
	ari_op : INAD .  (31)

	.  reduce 31


state 71
	ari_op : IOR .  (32)

	.  reduce 32


state 72
	ari_op : XOR .  (33)

	.  reduce 33


state 73
	ari_op : NOT .  (34)

	.  reduce 34


state 74
	ari_op : SHL .  (35)

	.  reduce 35


state 75
	ari_op : SHR .  (36)

	.  reduce 36


state 76
	rel_op : EQ .  (37)

	.  reduce 37


state 77
	rel_op : GT .  (38)

	.  reduce 38


state 78
	rel_op : LT .  (39)

	.  reduce 39


state 79
	rel_op : GE .  (40)

	.  reduce 40


state 80
	rel_op : LE .  (41)

	.  reduce 41


state 81
	rel_op : NEQ .  (42)

	.  reduce 42


state 82
	log_op : AND .  (43)

	.  reduce 43


state 83
	log_op : OR .  (44)

	.  reduce 44


state 84
	log_op : OPPOSITE .  (45)

	.  reduce 45


state 85
	stmt : exp SIMICOLON .  (9)

	.  reduce 9


state 86
	op : rel_op .  (22)

	.  reduce 22


state 87
	op : ari_op .  (21)

	.  reduce 21


state 88
	op : log_op .  (23)

	.  reduce 23


state 89
	exp : exp op . exp

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 106
	id  goto 54


state 90
	stmt : while_stmt SIMICOLON .  (13)

	.  reduce 13


state 91
	asgn_stmt : id ASSIGN . exp

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 107
	id  goto 54


state 92
	id : id COMMA . ID

	ID  shift 108


state 93
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
	RBRACE  shift 109
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	stmt  goto 56
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 94
	program : INT MAIN LPRACE RPRACE LBRACE code RBRACE .  (5)

	.  reduce 5


state 95
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
	RBRACE  shift 110
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	stmt  goto 56
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 96
	program : VOID MAIN LPRACE RPRACE LBRACE code RBRACE .  (3)

	.  reduce 3


state 97
	program : MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (2)

	.  reduce 2


state 98
	exp : exp . op exp
	if_stmt : IF LPRACE exp . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	RPRACE  shift 111

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


99: shift-reduce conflict (shift 112, reduce 51) on RPRACE
state 99
	id : id . COMMA ID
	exp : id .  (51)
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	RPRACE  shift 112
	COMMA  shift 92
	.  reduce 51


state 100
	exp : exp . op exp
	while_stmt : WHILE LPRACE exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	RPRACE  shift 113

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


101: shift-reduce conflict (shift 114, reduce 51) on RPRACE
state 101
	id : id . COMMA ID
	exp : id .  (51)
	while_stmt : WHILE LPRACE id . RPRACE LBRACE stmt RBRACE

	RPRACE  shift 114
	COMMA  shift 92
	.  reduce 51


state 102
	asgn_stmt : asgn_stmt . COMMA id
	for_stmt : FOR LPRACE asgn_stmt . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	COMMA  shift 60
	SIMICOLON  shift 115


state 103
	id : id . COMMA ID
	asgn_stmt : id . ASSIGN exp
	for_stmt : FOR LPRACE id . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	ASSIGN  shift 91
	COMMA  shift 92
	SIMICOLON  shift 116


state 104
	exp : LPRACE exp RPRACE .  (49)

	.  reduce 49


105: shift-reduce conflict (shift 92, reduce 53) on COMMA
state 105
	asgn_stmt : asgn_stmt COMMA id .  (53)
	id : id . COMMA ID

	COMMA  shift 92
	.  reduce 53


106: shift-reduce conflict (shift 63, reduce 48) on PLUS
106: shift-reduce conflict (shift 64, reduce 48) on MINUS
106: shift-reduce conflict (shift 65, reduce 48) on MUL
106: shift-reduce conflict (shift 66, reduce 48) on DIV
106: shift-reduce conflict (shift 67, reduce 48) on MOD
106: shift-reduce conflict (shift 68, reduce 48) on INC
106: shift-reduce conflict (shift 69, reduce 48) on DEC
106: shift-reduce conflict (shift 70, reduce 48) on INAD
106: shift-reduce conflict (shift 71, reduce 48) on IOR
106: shift-reduce conflict (shift 72, reduce 48) on XOR
106: shift-reduce conflict (shift 73, reduce 48) on NOT
106: shift-reduce conflict (shift 74, reduce 48) on SHL
106: shift-reduce conflict (shift 75, reduce 48) on SHR
106: shift-reduce conflict (shift 76, reduce 48) on EQ
106: shift-reduce conflict (shift 77, reduce 48) on GT
106: shift-reduce conflict (shift 78, reduce 48) on LT
106: shift-reduce conflict (shift 79, reduce 48) on GE
106: shift-reduce conflict (shift 80, reduce 48) on LE
106: shift-reduce conflict (shift 81, reduce 48) on NEQ
106: shift-reduce conflict (shift 82, reduce 48) on AND
106: shift-reduce conflict (shift 83, reduce 48) on OR
106: shift-reduce conflict (shift 84, reduce 48) on OPPOSITE
state 106
	exp : exp op exp .  (48)
	exp : exp . op exp

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	.  reduce 48

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


state 107
	exp : exp . op exp
	asgn_stmt : id ASSIGN exp .  (52)

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	.  reduce 52

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


state 108
	id : id COMMA ID .  (47)

	.  reduce 47


state 109
	program : INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (6)

	.  reduce 6


state 110
	program : VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (4)

	.  reduce 4


state 111
	if_stmt : IF LPRACE exp RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 117


state 112
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE
	if_stmt : IF LPRACE id RPRACE . LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE

	LBRACE  shift 118


state 113
	while_stmt : WHILE LPRACE exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 119


state 114
	while_stmt : WHILE LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 120


state 115
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 121
	id  goto 54


state 116
	for_stmt : FOR LPRACE id SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 122
	id  goto 54


state 117
	if_stmt : IF LPRACE exp RPRACE LBRACE . stmt RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE LBRACE . stmt RBRACE

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

	stmt  goto 123
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 118
	if_stmt : IF LPRACE id RPRACE LBRACE . stmt RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE . stmt RBRACE ELSE LBRACE stmt RBRACE

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

	stmt  goto 124
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 119
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

	stmt  goto 125
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 120
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

	stmt  goto 126
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 121
	exp : exp . op exp
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	SIMICOLON  shift 127

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


state 122
	exp : exp . op exp
	for_stmt : FOR LPRACE id SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	SIMICOLON  shift 128

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


state 123
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 129


state 124
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE
	if_stmt : IF LPRACE id RPRACE LBRACE stmt . RBRACE ELSE LBRACE stmt RBRACE

	RBRACE  shift 130


state 125
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 131


state 126
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 132


state 127
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 133
	id  goto 54


state 128
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 134
	id  goto 54


state 129
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE .  (56)

	ELSE  shift 135
	.  reduce 56


state 130
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE .  (58)
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE . ELSE LBRACE stmt RBRACE

	ELSE  shift 136
	.  reduce 58


state 131
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE .  (59)

	.  reduce 59


state 132
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt RBRACE .  (60)

	.  reduce 60


state 133
	exp : exp . op exp
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	RPRACE  shift 137

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


state 134
	exp : exp . op exp
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 63
	MINUS  shift 64
	MUL  shift 65
	DIV  shift 66
	MOD  shift 67
	INC  shift 68
	DEC  shift 69
	INAD  shift 70
	IOR  shift 71
	XOR  shift 72
	NOT  shift 73
	SHL  shift 74
	SHR  shift 75
	EQ  shift 76
	GT  shift 77
	LT  shift 78
	GE  shift 79
	LE  shift 80
	NEQ  shift 81
	AND  shift 82
	OR  shift 83
	OPPOSITE  shift 84
	RPRACE  shift 138

	rel_op  goto 86
	ari_op  goto 87
	log_op  goto 88
	op  goto 89


state 135
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 139


state 136
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE . LBRACE stmt RBRACE

	LBRACE  shift 140


state 137
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 141


state 138
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 142


state 139
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE . stmt RBRACE

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

	stmt  goto 143
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 140
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE . stmt RBRACE

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

	stmt  goto 144
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 141
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

	stmt  goto 145
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 142
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

	stmt  goto 146
	dec_stmt  goto 37
	if_stmt  goto 38
	for_stmt  goto 39
	asgn_stmt  goto 40
	type  goto 41
	exp  goto 42
	while_stmt  goto 43
	id  goto 44


state 143
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 147


state 144
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt . RBRACE

	RBRACE  shift 148


state 145
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 149


state 146
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 150


state 147
	if_stmt : IF LPRACE exp RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (55)

	.  reduce 55


state 148
	if_stmt : IF LPRACE id RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE .  (57)

	.  reduce 57


state 149
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (61)

	.  reduce 61


state 150
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (62)

	.  reduce 62


##############################################################################
# Summary
##############################################################################

State 54 contains 1 shift-reduce conflict(s)
State 99 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 105 contains 1 shift-reduce conflict(s)
State 106 contains 22 shift-reduce conflict(s)


44 token(s), 16 nonterminal(s)
63 grammar rule(s), 151 state(s)


##############################################################################
# End of File
##############################################################################
