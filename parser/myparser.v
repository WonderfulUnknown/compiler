#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 104 of your 30 day trial period.
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
# Date: 01/03/19
# Time: 09:50:37
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
   15       | input_stmt SIMICOLON
   16       | output_stmt SIMICOLON

   17  type : INT
   18       | DOUBLE
   19       | FLOAT
   20       | CHAR
   21       | BOOL
   22       | VOID

   23  op : ari_op
   24     | rel_op
   25     | log_op
   26     | ASSIGN

   27  ari_op : PLUS
   28         | MINUS
   29         | MUL
   30         | DIV
   31         | MOD
   32         | INC
   33         | DEC
   34         | INAD
   35         | IOR
   36         | XOR
   37         | NOT
   38         | SHL
   39         | SHR

   40  rel_op : EQ
   41         | GT
   42         | LT
   43         | GE
   44         | LE
   45         | NEQ

   46  log_op : AND
   47         | OR
   48         | OPPOSITE

   49  id : ID
   50     | id COMMA ID

   51  exp : exp op exp
   52      | LPRACE exp RPRACE
   53      | NUMBER
   54      | id

   55  asgn_stmt : id ASSIGN exp
   56            | asgn_stmt COMMA id
   57            | id ASSIGN asgn_stmt

   58  dec_stmt : type id

   59  if_stmt : IF LPRACE exp RPRACE stmt

   60  while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE
   61             | WHILE LPRACE id RPRACE LBRACE stmt RBRACE

   62  for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
   63           | FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

   64  input_stmt : CIN GT GT id

   65  output_stmt : COUT LT LT id


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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 37
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	code  goto 43
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 18
	program : INT MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 49


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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 37
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	code  goto 50
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 20
	program : VOID MAIN LPRACE VOID RPRACE . LBRACE code RBRACE

	LBRACE  shift 51


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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 37
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	code  goto 52
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 37
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	code  goto 53
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 23
	type : INT .  (17)

	.  reduce 17


state 24
	type : DOUBLE .  (18)

	.  reduce 18


state 25
	type : FLOAT .  (19)

	.  reduce 19


state 26
	type : CHAR .  (20)

	.  reduce 20


state 27
	type : BOOL .  (21)

	.  reduce 21


state 28
	type : VOID .  (22)

	.  reduce 22


state 29
	if_stmt : IF . LPRACE exp RPRACE stmt

	LPRACE  shift 54


state 30
	while_stmt : WHILE . LPRACE exp RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE . LPRACE id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 55


state 31
	for_stmt : FOR . LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR . LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 56


state 32
	input_stmt : CIN . GT GT id

	GT  shift 57


state 33
	output_stmt : COUT . LT LT id

	LT  shift 58


state 34
	exp : LPRACE . exp RPRACE

	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	exp  goto 59
	id  goto 60


state 35
	id : ID .  (49)

	.  reduce 49


state 36
	exp : NUMBER .  (53)

	.  reduce 53


state 37
	code : stmt .  (7)

	.  reduce 7


state 38
	stmt : exp . SIMICOLON
	exp : exp . op exp

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	SIMICOLON  shift 84

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


state 39
	stmt : asgn_stmt . SIMICOLON
	asgn_stmt : asgn_stmt . COMMA id

	COMMA  shift 89
	SIMICOLON  shift 90


state 40
	stmt : if_stmt .  (12)

	.  reduce 12


state 41
	stmt : dec_stmt . SIMICOLON

	SIMICOLON  shift 91


state 42
	stmt : while_stmt .  (13)

	.  reduce 13


state 43
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
	CIN  shift 32
	COUT  shift 33
	RBRACE  shift 92
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 93
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 44
	stmt : for_stmt .  (14)

	.  reduce 14


state 45
	stmt : input_stmt . SIMICOLON

	SIMICOLON  shift 94


state 46
	dec_stmt : type . id

	ID  shift 35

	id  goto 95


47: shift-reduce conflict (shift 96, reduce 54) on ASSIGN
47: shift-reduce conflict (shift 97, reduce 54) on COMMA
state 47
	exp : id .  (54)
	asgn_stmt : id . ASSIGN asgn_stmt
	id : id . COMMA ID
	asgn_stmt : id . ASSIGN exp

	ASSIGN  shift 96
	COMMA  shift 97
	.  reduce 54


state 48
	stmt : output_stmt . SIMICOLON

	SIMICOLON  shift 98


state 49
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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 37
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	code  goto 99
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 50
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
	CIN  shift 32
	COUT  shift 33
	RBRACE  shift 100
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 93
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 51
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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 37
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	code  goto 101
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 52
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
	CIN  shift 32
	COUT  shift 33
	RBRACE  shift 102
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 93
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 53
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
	CIN  shift 32
	COUT  shift 33
	RBRACE  shift 103
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 93
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 54
	if_stmt : IF LPRACE . exp RPRACE stmt

	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	exp  goto 104
	id  goto 60


state 55
	while_stmt : WHILE LPRACE . exp RPRACE LBRACE stmt RBRACE
	while_stmt : WHILE LPRACE . id RPRACE LBRACE stmt RBRACE

	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	exp  goto 105
	id  goto 106


state 56
	for_stmt : FOR LPRACE . asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	for_stmt : FOR LPRACE . id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	ID  shift 35

	asgn_stmt  goto 107
	id  goto 108


state 57
	input_stmt : CIN GT . GT id

	GT  shift 109


state 58
	output_stmt : COUT LT . LT id

	LT  shift 110


state 59
	exp : exp . op exp
	exp : LPRACE exp . RPRACE

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	RPRACE  shift 111

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


60: shift-reduce conflict (shift 97, reduce 54) on COMMA
state 60
	exp : id .  (54)
	id : id . COMMA ID

	COMMA  shift 97
	.  reduce 54


state 61
	ari_op : PLUS .  (27)

	.  reduce 27


state 62
	ari_op : MINUS .  (28)

	.  reduce 28


state 63
	ari_op : MUL .  (29)

	.  reduce 29


state 64
	ari_op : DIV .  (30)

	.  reduce 30


state 65
	ari_op : MOD .  (31)

	.  reduce 31


state 66
	ari_op : INC .  (32)

	.  reduce 32


state 67
	ari_op : DEC .  (33)

	.  reduce 33


state 68
	ari_op : INAD .  (34)

	.  reduce 34


state 69
	ari_op : IOR .  (35)

	.  reduce 35


state 70
	ari_op : XOR .  (36)

	.  reduce 36


state 71
	ari_op : NOT .  (37)

	.  reduce 37


state 72
	ari_op : SHL .  (38)

	.  reduce 38


state 73
	ari_op : SHR .  (39)

	.  reduce 39


state 74
	rel_op : EQ .  (40)

	.  reduce 40


state 75
	rel_op : GT .  (41)

	.  reduce 41


state 76
	rel_op : LT .  (42)

	.  reduce 42


state 77
	rel_op : GE .  (43)

	.  reduce 43


state 78
	rel_op : LE .  (44)

	.  reduce 44


state 79
	rel_op : NEQ .  (45)

	.  reduce 45


state 80
	log_op : AND .  (46)

	.  reduce 46


state 81
	log_op : OR .  (47)

	.  reduce 47


state 82
	log_op : OPPOSITE .  (48)

	.  reduce 48


state 83
	op : ASSIGN .  (26)

	.  reduce 26


state 84
	stmt : exp SIMICOLON .  (9)

	.  reduce 9


state 85
	op : ari_op .  (23)

	.  reduce 23


state 86
	exp : exp op . exp

	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	exp  goto 112
	id  goto 60


state 87
	op : log_op .  (25)

	.  reduce 25


state 88
	op : rel_op .  (24)

	.  reduce 24


state 89
	asgn_stmt : asgn_stmt COMMA . id

	ID  shift 35

	id  goto 113


state 90
	stmt : asgn_stmt SIMICOLON .  (10)

	.  reduce 10


state 91
	stmt : dec_stmt SIMICOLON .  (11)

	.  reduce 11


state 92
	program : MAIN LPRACE RPRACE LBRACE code RBRACE .  (1)

	.  reduce 1


state 93
	code : code stmt .  (8)

	.  reduce 8


state 94
	stmt : input_stmt SIMICOLON .  (15)

	.  reduce 15


state 95
	dec_stmt : type id .  (58)
	id : id . COMMA ID

	COMMA  shift 97
	.  reduce 58


state 96
	asgn_stmt : id ASSIGN . asgn_stmt
	asgn_stmt : id ASSIGN . exp

	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	exp  goto 114
	asgn_stmt  goto 115
	id  goto 47


state 97
	id : id COMMA . ID

	ID  shift 116


state 98
	stmt : output_stmt SIMICOLON .  (16)

	.  reduce 16


state 99
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
	CIN  shift 32
	COUT  shift 33
	RBRACE  shift 117
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 93
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 100
	program : INT MAIN LPRACE RPRACE LBRACE code RBRACE .  (5)

	.  reduce 5


state 101
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
	CIN  shift 32
	COUT  shift 33
	RBRACE  shift 118
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 93
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 102
	program : VOID MAIN LPRACE RPRACE LBRACE code RBRACE .  (3)

	.  reduce 3


state 103
	program : MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (2)

	.  reduce 2


state 104
	exp : exp . op exp
	if_stmt : IF LPRACE exp . RPRACE stmt

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	RPRACE  shift 119

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


state 105
	exp : exp . op exp
	while_stmt : WHILE LPRACE exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	RPRACE  shift 120

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


106: shift-reduce conflict (shift 121, reduce 54) on RPRACE
state 106
	exp : id .  (54)
	id : id . COMMA ID
	while_stmt : WHILE LPRACE id . RPRACE LBRACE stmt RBRACE

	RPRACE  shift 121
	COMMA  shift 97
	.  reduce 54


state 107
	asgn_stmt : asgn_stmt . COMMA id
	for_stmt : FOR LPRACE asgn_stmt . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	COMMA  shift 89
	SIMICOLON  shift 122


state 108
	asgn_stmt : id . ASSIGN asgn_stmt
	id : id . COMMA ID
	for_stmt : FOR LPRACE id . SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE
	asgn_stmt : id . ASSIGN exp

	ASSIGN  shift 96
	COMMA  shift 97
	SIMICOLON  shift 123


state 109
	input_stmt : CIN GT GT . id

	ID  shift 35

	id  goto 124


state 110
	output_stmt : COUT LT LT . id

	ID  shift 35

	id  goto 125


state 111
	exp : LPRACE exp RPRACE .  (52)

	.  reduce 52


112: shift-reduce conflict (shift 61, reduce 51) on PLUS
112: shift-reduce conflict (shift 62, reduce 51) on MINUS
112: shift-reduce conflict (shift 63, reduce 51) on MUL
112: shift-reduce conflict (shift 64, reduce 51) on DIV
112: shift-reduce conflict (shift 65, reduce 51) on MOD
112: shift-reduce conflict (shift 66, reduce 51) on INC
112: shift-reduce conflict (shift 67, reduce 51) on DEC
112: shift-reduce conflict (shift 68, reduce 51) on INAD
112: shift-reduce conflict (shift 69, reduce 51) on IOR
112: shift-reduce conflict (shift 70, reduce 51) on XOR
112: shift-reduce conflict (shift 71, reduce 51) on NOT
112: shift-reduce conflict (shift 72, reduce 51) on SHL
112: shift-reduce conflict (shift 73, reduce 51) on SHR
112: shift-reduce conflict (shift 74, reduce 51) on EQ
112: shift-reduce conflict (shift 75, reduce 51) on GT
112: shift-reduce conflict (shift 76, reduce 51) on LT
112: shift-reduce conflict (shift 77, reduce 51) on GE
112: shift-reduce conflict (shift 78, reduce 51) on LE
112: shift-reduce conflict (shift 79, reduce 51) on NEQ
112: shift-reduce conflict (shift 80, reduce 51) on AND
112: shift-reduce conflict (shift 81, reduce 51) on OR
112: shift-reduce conflict (shift 82, reduce 51) on OPPOSITE
112: shift-reduce conflict (shift 83, reduce 51) on ASSIGN
state 112
	exp : exp op exp .  (51)
	exp : exp . op exp

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	.  reduce 51

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


state 113
	asgn_stmt : asgn_stmt COMMA id .  (56)
	id : id . COMMA ID

	.  reduce 56


state 114
	exp : exp . op exp
	asgn_stmt : id ASSIGN exp .  (55)

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	.  reduce 55

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


state 115
	asgn_stmt : asgn_stmt . COMMA id
	asgn_stmt : id ASSIGN asgn_stmt .  (57)

	.  reduce 57


state 116
	id : id COMMA ID .  (50)

	.  reduce 50


state 117
	program : INT MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (6)

	.  reduce 6


state 118
	program : VOID MAIN LPRACE VOID RPRACE LBRACE code RBRACE .  (4)

	.  reduce 4


state 119
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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 126
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 120
	while_stmt : WHILE LPRACE exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 127


state 121
	while_stmt : WHILE LPRACE id RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 128


state 122
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	exp  goto 129
	id  goto 60


state 123
	for_stmt : FOR LPRACE id SIMICOLON . exp SIMICOLON exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	exp  goto 130
	id  goto 60


state 124
	id : id . COMMA ID
	input_stmt : CIN GT GT id .  (64)

	COMMA  shift 97
	.  reduce 64


state 125
	output_stmt : COUT LT LT id .  (65)
	id : id . COMMA ID

	COMMA  shift 97
	.  reduce 65


state 126
	if_stmt : IF LPRACE exp RPRACE stmt .  (59)

	.  reduce 59


state 127
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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 131
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 128
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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 132
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 129
	exp : exp . op exp
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	SIMICOLON  shift 133

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


state 130
	exp : exp . op exp
	for_stmt : FOR LPRACE id SIMICOLON exp . SIMICOLON exp RPRACE LBRACE stmt RBRACE

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	SIMICOLON  shift 134

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


state 131
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 135


state 132
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 136


state 133
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	exp  goto 137
	id  goto 60


state 134
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON . exp RPRACE LBRACE stmt RBRACE

	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	exp  goto 138
	id  goto 60


state 135
	while_stmt : WHILE LPRACE exp RPRACE LBRACE stmt RBRACE .  (60)

	.  reduce 60


state 136
	while_stmt : WHILE LPRACE id RPRACE LBRACE stmt RBRACE .  (61)

	.  reduce 61


state 137
	exp : exp . op exp
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	RPRACE  shift 139

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


state 138
	exp : exp . op exp
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp . RPRACE LBRACE stmt RBRACE

	PLUS  shift 61
	MINUS  shift 62
	MUL  shift 63
	DIV  shift 64
	MOD  shift 65
	INC  shift 66
	DEC  shift 67
	INAD  shift 68
	IOR  shift 69
	XOR  shift 70
	NOT  shift 71
	SHL  shift 72
	SHR  shift 73
	EQ  shift 74
	GT  shift 75
	LT  shift 76
	GE  shift 77
	LE  shift 78
	NEQ  shift 79
	AND  shift 80
	OR  shift 81
	OPPOSITE  shift 82
	ASSIGN  shift 83
	RPRACE  shift 140

	ari_op  goto 85
	op  goto 86
	log_op  goto 87
	rel_op  goto 88


state 139
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 141


state 140
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE . LBRACE stmt RBRACE

	LBRACE  shift 142


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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 143
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


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
	CIN  shift 32
	COUT  shift 33
	LPRACE  shift 34
	ID  shift 35
	NUMBER  shift 36

	stmt  goto 144
	exp  goto 38
	asgn_stmt  goto 39
	if_stmt  goto 40
	dec_stmt  goto 41
	while_stmt  goto 42
	for_stmt  goto 44
	input_stmt  goto 45
	type  goto 46
	id  goto 47
	output_stmt  goto 48


state 143
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 145


state 144
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt . RBRACE

	RBRACE  shift 146


state 145
	for_stmt : FOR LPRACE asgn_stmt SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (62)

	.  reduce 62


state 146
	for_stmt : FOR LPRACE id SIMICOLON exp SIMICOLON exp RPRACE LBRACE stmt RBRACE .  (63)

	.  reduce 63


##############################################################################
# Summary
##############################################################################

State 47 contains 2 shift-reduce conflict(s)
State 60 contains 1 shift-reduce conflict(s)
State 106 contains 1 shift-reduce conflict(s)
State 112 contains 23 shift-reduce conflict(s)


45 token(s), 18 nonterminal(s)
66 grammar rule(s), 147 state(s)


##############################################################################
# End of File
##############################################################################
