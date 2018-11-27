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
# Time: 20:11:26
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : c_program $end

    1  c_program : MAIN LPRACE RPRACE LBRACE code RBRACE
    2            | MAIN LPRACE VOID RPRACE LBRACE code RBRACE
    3            | VOID MAIN LPRACE RPRACE LBRACE code RBRACE
    4            | VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE
    5            | INT MAIN LPRACE RPRACE LBRACE code RBRACE
    6            | INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE

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
	$accept : . c_program $end

	INT  shift 1
	VOID  shift 2
	MAIN  shift 3

	c_program  goto 4


state 1
	c_program : INT . MAIN LPRACE RPRACE LBRACE code RBRACE
	c_program : INT . MAIN LPRACE VOID RPRACE LBRACE code RBRACE

	MAIN  shift 5


state 2
	c_program : VOID . MAIN LPRACE RPRACE LBRACE code RBRACE
	c_program : VOID . MAIN LPRACE VOID RPRACE LBRACE code RBRACE

	MAIN  shift 6


state 3
	c_program : MAIN . LPRACE RPRACE LBRACE code RBRACE
	c_program : MAIN . LPRACE VOID RPRACE LBRACE code RBRACE

	LPRACE  shift 7


state 4
	$accept : c_program . $end  (0)

	$end  accept


state 5
	c_program : INT MAIN . LPRACE RPRACE LBRACE code RBRACE
	c_program : INT MAIN . LPRACE VOID RPRACE LBRACE code RBRACE

	LPRACE  shift 8


state 6
	c_program : VOID MAIN . LPRACE RPRACE LBRACE code RBRACE
	c_program : VOID MAIN . LPRACE VOID RPRACE LBRACE code RBRACE

	LPRACE  shift 9


state 7
	c_program : MAIN LPRACE . RPRACE LBRACE code RBRACE
	c_program : MAIN LPRACE . VOID RPRACE LBRACE code RBRACE

	VOID  shift 10
	RPRACE  shift 11


state 8
	c_program : INT MAIN LPRACE . RPRACE LBRACE code RBRACE
	c_program : INT MAIN LPRACE . VOID RPRACE LBRACE code RBRACE

	VOID  shift 12
	RPRACE  shift 13


state 9
	c_program : VOID MAIN LPRACE . RPRACE LBRACE code RBRACE
	c_program : VOID MAIN LPRACE . VOID RPRACE LBRACE code RBRACE

	VOID  shift 14
	RPRACE  shift 15


state 10
	c_program : MAIN LPRACE VOID . RPRACE LBRACE code RBRACE

	RPRACE  shift 16


state 11
	c_program : MAIN LPRACE RPRACE . LBRACE code RBRACE

	LBRACE  shift 17


state 12
	c_program : INT MAIN LPRACE VOID . RPRACE LBRACE code RBRACE

	RPRACE  shift 18


state 13
	c_program : INT MAIN LPRACE RPRACE . LBRACE code RBRACE

	LBRACE  shift 19


state 14
	c_program : VOID MAIN LPRACE VOID . RPRACE LBRACE code RBRACE

	RPRACE  shift 20


state 15
	c_program : VOID MAIN LPRACE RPRACE . LBRACE code RBRACE

	LBRACE  shift 21


state 16
	c_program : MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 22


state 17
	c_program : MAIN LPRACE RPRACE LBRACE . code RBRACE

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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	code  goto 39
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 43
	id  goto 44


state 18
	c_program : INT MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 45


state 19
	c_program : INT MAIN LPRACE RPRACE LBRACE . code RBRACE

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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	code  goto 46
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 43
	id  goto 44


state 20
	c_program : VOID MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 47


state 21
	c_program : VOID MAIN LPRACE RPRACE LBRACE . code RBRACE

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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	code  goto 48
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 43
	id  goto 44


state 22
	c_program : MAIN LPRACE VOID RPRACE LBRACE . code RBRACE

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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	code  goto 49
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 43
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
	id : ID .  (46)

	.  reduce 46


state 34
	exp : NUMBER .  (50)

	.  reduce 50


state 35
	stmt : exp . SIMICOLON
	exp : exp . op exp

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	SIMICOLON  shift 77

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


state 36
	stmt : if_stmt . SIMICOLON

	SIMICOLON  shift 82


state 37
	stmt : while_stmt . SIMICOLON

	SIMICOLON  shift 83


state 38
	stmt : for_stmt . SIMICOLON

	SIMICOLON  shift 84


state 39
	c_program : MAIN LPRACE RPRACE LBRACE code . RBRACE
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
	RBRACE  shift 85
	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 86
	id  goto 44


state 40
	stmt : dec_stmt . SIMICOLON

	SIMICOLON  shift 87


state 41
	dec_stmt : type . id

	ID  shift 33

	id  goto 88


state 42
	stmt : asgn_stmt . SIMICOLON
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 89
	SIMICOLON  shift 90


state 43
	code : stmt .  (7)

	.  reduce 7


state 44
	id : id . COMMA ID
	exp : id .  (51)
	asgn_stmt : id . ASSIGN exp

	ASSIGN  shift 91
	COMMA  shift 92
	.  reduce 51


state 45
	c_program : INT MAIN LPRACE VOID RPRACE LBRACE . code RBRACE

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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	code  goto 93
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 43
	id  goto 44


state 46
	c_program : INT MAIN LPRACE RPRACE LBRACE code . RBRACE
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 86
	id  goto 44


state 47
	c_program : VOID MAIN LPRACE VOID RPRACE LBRACE . code RBRACE

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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	code  goto 95
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 43
	id  goto 44


state 48
	c_program : VOID MAIN LPRACE RPRACE LBRACE code . RBRACE
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 86
	id  goto 44


state 49
	c_program : MAIN LPRACE VOID RPRACE LBRACE code . RBRACE
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 86
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
	for_stmt : FOR LPRACE . id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR LPRACE . asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	ID  shift 33

	asgn_stmt  goto 102
	id  goto 103


state 53
	exp : LPRACE exp . RPRACE
	exp : exp . op exp

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	RPRACE  shift 104

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


54: shift-reduce conflict (shift 92, reduce 51) on COMMA
state 54
	id : id . COMMA ID
	exp : id .  (51)

	COMMA  shift 92
	.  reduce 51


state 55
	ari_op : PLUS .  (24)

	.  reduce 24


state 56
	ari_op : MINUS .  (25)

	.  reduce 25


state 57
	ari_op : MUL .  (26)

	.  reduce 26


state 58
	ari_op : DIV .  (27)

	.  reduce 27


state 59
	ari_op : MOD .  (28)

	.  reduce 28


state 60
	ari_op : INC .  (29)

	.  reduce 29


state 61
	ari_op : DEC .  (30)

	.  reduce 30


state 62
	ari_op : INAD .  (31)

	.  reduce 31


state 63
	ari_op : IOR .  (32)

	.  reduce 32


state 64
	ari_op : XOR .  (33)

	.  reduce 33


state 65
	ari_op : NOT .  (34)

	.  reduce 34


state 66
	ari_op : SHL .  (35)

	.  reduce 35


state 67
	ari_op : SHR .  (36)

	.  reduce 36


state 68
	rel_op : EQ .  (37)

	.  reduce 37


state 69
	rel_op : GT .  (38)

	.  reduce 38


state 70
	rel_op : LT .  (39)

	.  reduce 39


state 71
	rel_op : GE .  (40)

	.  reduce 40


state 72
	rel_op : LE .  (41)

	.  reduce 41


state 73
	rel_op : NEQ .  (42)

	.  reduce 42


state 74
	log_op : AND .  (43)

	.  reduce 43


state 75
	log_op : OR .  (44)

	.  reduce 44


state 76
	log_op : OPPOSITE .  (45)

	.  reduce 45


state 77
	stmt : exp SIMICOLON .  (9)

	.  reduce 9


state 78
	op : log_op .  (23)

	.  reduce 23


state 79
	op : rel_op .  (22)

	.  reduce 22


state 80
	exp : exp op . exp

	LPRACE  shift 32
	ID  shift 33
	NUMBER  shift 34

	exp  goto 105
	id  goto 54


state 81
	op : ari_op .  (21)

	.  reduce 21


state 82
	stmt : if_stmt SIMICOLON .  (12)

	.  reduce 12


state 83
	stmt : while_stmt SIMICOLON .  (13)

	.  reduce 13


state 84
	stmt : for_stmt SIMICOLON .  (14)

	.  reduce 14


state 85
	c_program : MAIN LPRACE RPRACE LBRACE code RBRACE .  (1)

	.  reduce 1


state 86
	code : code stmt .  (8)

	.  reduce 8


state 87
	stmt : dec_stmt SIMICOLON .  (11)

	.  reduce 11


state 88
	dec_stmt : type id .  (54)
	id : id . COMMA ID

	COMMA  shift 92
	.  reduce 54


state 89
	asgn_stmt : asgn_stmt COMMA . id

	ID  shift 33

	id  goto 106


state 90
	stmt : asgn_stmt SIMICOLON .  (10)

	.  reduce 10


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
	c_program : INT MAIN LPRACE VOID RPRACE LBRACE code . RBRACE
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 86
	id  goto 44


state 94
	c_program : INT MAIN LPRACE RPRACE LBRACE code RBRACE .  (5)

	.  reduce 5


state 95
	c_program : VOID MAIN LPRACE VOID RPRACE LBRACE code . RBRACE
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 86
	id  goto 44


state 96
	c_program : VOID MAIN LPRACE RPRACE LBRACE code RBRACE .  (3)

	.  reduce 3


state 97
	c_program : MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (2)

	.  reduce 2


state 98
	if_stmt : IF LPRACE exp . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	exp : exp . op exp
	if_stmt : IF LPRACE exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	RPRACE  shift 111

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


99: shift-reduce conflict (shift 112, reduce 51) on RPRACE
state 99
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE
	if_stmt : IF LPRACE id . RPRACE LBRACE stmt RBRACE ELSE LBRACE stmt RBRACE
	id : id . COMMA ID
	exp : id .  (51)

	RPRACE  shift 112
	COMMA  shift 92
	.  reduce 51


state 100
	while_stmt : WHILE LPRACE exp . RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	RPRACE  shift 113

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


101: shift-reduce conflict (shift 114, reduce 51) on RPRACE
state 101
	id : id . COMMA ID
	while_stmt : WHILE LPRACE id . RPRACE LBRACE stmt RBRACE
	exp : id .  (51)

	RPRACE  shift 114
	COMMA  shift 92
	.  reduce 51


state 102
	asgn_stmt : asgn_stmt . COMMA id
	for_stmt : FOR LPRACE asgn_stmt . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	COMMA  shift 89
	SIMICOLON  shift 115


state 103
	for_stmt : FOR LPRACE id . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	id : id . COMMA ID
	asgn_stmt : id . ASSIGN exp

	ASSIGN  shift 91
	COMMA  shift 92
	SIMICOLON  shift 116


state 104
	exp : LPRACE exp RPRACE .  (49)

	.  reduce 49


105: shift-reduce conflict (shift 55, reduce 48) on PLUS
105: shift-reduce conflict (shift 56, reduce 48) on MINUS
105: shift-reduce conflict (shift 57, reduce 48) on MUL
105: shift-reduce conflict (shift 58, reduce 48) on DIV
105: shift-reduce conflict (shift 59, reduce 48) on MOD
105: shift-reduce conflict (shift 60, reduce 48) on INC
105: shift-reduce conflict (shift 61, reduce 48) on DEC
105: shift-reduce conflict (shift 62, reduce 48) on INAD
105: shift-reduce conflict (shift 63, reduce 48) on IOR
105: shift-reduce conflict (shift 64, reduce 48) on XOR
105: shift-reduce conflict (shift 65, reduce 48) on NOT
105: shift-reduce conflict (shift 66, reduce 48) on SHL
105: shift-reduce conflict (shift 67, reduce 48) on SHR
105: shift-reduce conflict (shift 68, reduce 48) on EQ
105: shift-reduce conflict (shift 69, reduce 48) on GT
105: shift-reduce conflict (shift 70, reduce 48) on LT
105: shift-reduce conflict (shift 71, reduce 48) on GE
105: shift-reduce conflict (shift 72, reduce 48) on LE
105: shift-reduce conflict (shift 73, reduce 48) on NEQ
105: shift-reduce conflict (shift 74, reduce 48) on AND
105: shift-reduce conflict (shift 75, reduce 48) on OR
105: shift-reduce conflict (shift 76, reduce 48) on OPPOSITE
state 105
	exp : exp op exp .  (48)
	exp : exp . op exp

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	.  reduce 48

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


106: shift-reduce conflict (shift 92, reduce 53) on COMMA
state 106
	id : id . COMMA ID
	asgn_stmt : asgn_stmt COMMA id .  (53)

	COMMA  shift 92
	.  reduce 53


state 107
	exp : exp . op exp
	asgn_stmt : id ASSIGN exp .  (52)

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	.  reduce 52

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


state 108
	id : id COMMA ID .  (47)

	.  reduce 47


state 109
	c_program : INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (6)

	.  reduce 6


state 110
	c_program : VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (4)

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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 123
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 124
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 125
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 126
	id  goto 44


state 121
	exp : exp . op exp
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	SIMICOLON  shift 127

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


state 122
	for_stmt : FOR LPRACE id SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	SIMICOLON  shift 128

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


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

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	RPRACE  shift 137

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


state 134
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE
	exp : exp . op exp

	PLUS  shift 55
	MINUS  shift 56
	MUL  shift 57
	DIV  shift 58
	MOD  shift 59
	INC  shift 60
	DEC  shift 61
	INAD  shift 62
	IOR  shift 63
	XOR  shift 64
	NOT  shift 65
	SHL  shift 66
	SHR  shift 67
	EQ  shift 68
	GT  shift 69
	LT  shift 70
	GE  shift 71
	LE  shift 72
	NEQ  shift 73
	AND  shift 74
	OR  shift 75
	OPPOSITE  shift 76
	RPRACE  shift 138

	log_op  goto 78
	rel_op  goto 79
	op  goto 80
	ari_op  goto 81


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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 143
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 144
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 145
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

	exp  goto 35
	if_stmt  goto 36
	while_stmt  goto 37
	for_stmt  goto 38
	dec_stmt  goto 40
	type  goto 41
	asgn_stmt  goto 42
	stmt  goto 146
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
State 105 contains 22 shift-reduce conflict(s)
State 106 contains 1 shift-reduce conflict(s)


44 token(s), 16 nonterminal(s)
63 grammar rule(s), 151 state(s)


##############################################################################
# End of File
##############################################################################
