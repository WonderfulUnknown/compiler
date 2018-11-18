#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 59 of your 30 day trial period.
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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 11/18/18
# Time: 20:57:13
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [ \t\n]+

    2  int

    3  double

    4  float

    5  char

    6  bool

    7  void

    8  "+"

    9  "-"

   10  "*"

   11  "/"

   12  "%"

   13  "++"

   14  "--"

   15  "&"

   16  "|"

   17  "^"

   18  "~"

   19  "<<"

   20  ">>"

   21  "=="

   22  ">"

   23  "<"

   24  ">="

   25  "<="

   26  "!="

   27  "&&"

   28  "||"

   29  "!"

   30  if

   31  else

   32  while

   33  for

   34  break

   35  return

   36  main

   37  "="

   38  "{"

   39  "}"

   40  "("

   41  ")"

   42  "["

   43  "]"

   44  ","

   45  ";"

   46  ":"

   47  ([A-Za-z]|[_])([A-Za-z]|[0-9]|[_])*

   48  -?[0-9]+(\.[0-9]+)?([eE][-+]?[0-9]+)?

   49  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 5
	0x22 - 0x24 (3)    goto 3
	0x25               goto 6
	0x26               goto 7
	0x27               goto 3
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2e               goto 3
	0x2f               goto 14
	0x30 - 0x39 (10)   goto 15
	0x3a               goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 21
	0x5b               goto 22
	0x5c               goto 3
	0x5d               goto 23
	0x5e               goto 24
	0x5f               goto 21
	0x60               goto 3
	0x61               goto 21
	0x62               goto 25
	0x63               goto 26
	0x64               goto 27
	0x65               goto 28
	0x66               goto 29
	0x67 - 0x68 (2)    goto 21
	0x69               goto 30
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 31
	0x6e - 0x71 (4)    goto 21
	0x72               goto 32
	0x73 - 0x75 (3)    goto 21
	0x76               goto 33
	0x77               goto 34
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 35
	0x7c               goto 36
	0x7d               goto 37
	0x7e               goto 38
	0x7f - 0xff (129)  goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 4
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 5
	0x22 - 0x24 (3)    goto 3
	0x25               goto 6
	0x26               goto 7
	0x27               goto 3
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2e               goto 3
	0x2f               goto 14
	0x30 - 0x39 (10)   goto 15
	0x3a               goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 21
	0x5b               goto 22
	0x5c               goto 3
	0x5d               goto 23
	0x5e               goto 24
	0x5f               goto 21
	0x60               goto 3
	0x61               goto 21
	0x62               goto 25
	0x63               goto 26
	0x64               goto 27
	0x65               goto 28
	0x66               goto 29
	0x67 - 0x68 (2)    goto 21
	0x69               goto 30
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 31
	0x6e - 0x71 (4)    goto 21
	0x72               goto 32
	0x73 - 0x75 (3)    goto 21
	0x76               goto 33
	0x77               goto 34
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 35
	0x7c               goto 36
	0x7d               goto 37
	0x7e               goto 38
	0x7f - 0xff (129)  goto 3


state 3
	match 49


state 4
	0x09 - 0x0a (2)    goto 4
	0x20               goto 4

	match 1


state 5
	0x3d               goto 39

	match 29


state 6
	match 12


state 7
	0x26               goto 40

	match 15


state 8
	match 40


state 9
	match 41


state 10
	match 10


state 11
	0x2b               goto 41

	match 8


state 12
	match 44


state 13
	0x2d               goto 42
	0x30 - 0x39 (10)   goto 15

	match 9


state 14
	match 11


state 15
	0x2e               goto 43
	0x30 - 0x39 (10)   goto 15
	0x45               goto 44
	0x65               goto 44

	match 48


state 16
	match 46


state 17
	match 45


state 18
	0x3c               goto 45
	0x3d               goto 46

	match 23


state 19
	0x3d               goto 47

	match 37


state 20
	0x3d               goto 48
	0x3e               goto 49

	match 22


state 21
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 47


state 22
	match 42


state 23
	match 43


state 24
	match 17


state 25
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 50
	0x70 - 0x71 (2)    goto 21
	0x72               goto 51
	0x73 - 0x7a (8)    goto 21

	match 47


state 26
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 52
	0x69 - 0x7a (18)   goto 21

	match 47


state 27
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 53
	0x70 - 0x7a (11)   goto 21

	match 47


state 28
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 54
	0x6d - 0x7a (14)   goto 21

	match 47


state 29
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 55
	0x6d - 0x6e (2)    goto 21
	0x6f               goto 56
	0x70 - 0x7a (11)   goto 21

	match 47


state 30
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x65 (5)    goto 21
	0x66               goto 57
	0x67 - 0x6d (7)    goto 21
	0x6e               goto 58
	0x6f - 0x7a (12)   goto 21

	match 47


state 31
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 59
	0x62 - 0x7a (25)   goto 21

	match 47


state 32
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 60
	0x66 - 0x7a (21)   goto 21

	match 47


state 33
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 61
	0x70 - 0x7a (11)   goto 21

	match 47


state 34
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 62
	0x69 - 0x7a (18)   goto 21

	match 47


state 35
	match 38


state 36
	0x7c               goto 63

	match 16


state 37
	match 39


state 38
	match 18


state 39
	match 26


state 40
	match 27


state 41
	match 13


state 42
	match 14


state 43
	0x30 - 0x39 (10)   goto 64


state 44
	0x2b               goto 65
	0x2d               goto 65
	0x30 - 0x39 (10)   goto 66


state 45
	match 19


state 46
	match 25


state 47
	match 21


state 48
	match 24


state 49
	match 20


state 50
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 67
	0x70 - 0x7a (11)   goto 21

	match 47


state 51
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 68
	0x66 - 0x7a (21)   goto 21

	match 47


state 52
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 69
	0x62 - 0x7a (25)   goto 21

	match 47


state 53
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 70
	0x76 - 0x7a (5)    goto 21

	match 47


state 54
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x72 (18)   goto 21
	0x73               goto 71
	0x74 - 0x7a (7)    goto 21

	match 47


state 55
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 72
	0x70 - 0x7a (11)   goto 21

	match 47


state 56
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 73
	0x73 - 0x7a (8)    goto 21

	match 47


state 57
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 30


state 58
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 74
	0x75 - 0x7a (6)    goto 21

	match 47


state 59
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 75
	0x6a - 0x7a (17)   goto 21

	match 47


state 60
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 76
	0x75 - 0x7a (6)    goto 21

	match 47


state 61
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 77
	0x6a - 0x7a (17)   goto 21

	match 47


state 62
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 78
	0x6a - 0x7a (17)   goto 21

	match 47


state 63
	match 28


state 64
	0x30 - 0x39 (10)   goto 64
	0x45               goto 44
	0x65               goto 44

	match 48


state 65
	0x30 - 0x39 (10)   goto 66


state 66
	0x30 - 0x39 (10)   goto 66

	match 48


state 67
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 79
	0x6d - 0x7a (14)   goto 21

	match 47


state 68
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 80
	0x62 - 0x7a (25)   goto 21

	match 47


state 69
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 81
	0x73 - 0x7a (8)    goto 21

	match 47


state 70
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 21
	0x62               goto 82
	0x63 - 0x7a (24)   goto 21

	match 47


state 71
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 83
	0x66 - 0x7a (21)   goto 21

	match 47


state 72
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 84
	0x62 - 0x7a (25)   goto 21

	match 47


state 73
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 33


state 74
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 2


state 75
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6d (13)   goto 21
	0x6e               goto 85
	0x6f - 0x7a (12)   goto 21

	match 47


state 76
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 86
	0x76 - 0x7a (5)    goto 21

	match 47


state 77
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x63 (3)    goto 21
	0x64               goto 87
	0x65 - 0x7a (22)   goto 21

	match 47


state 78
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 88
	0x6d - 0x7a (14)   goto 21

	match 47


state 79
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 6


state 80
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6a (10)   goto 21
	0x6b               goto 89
	0x6c - 0x7a (15)   goto 21

	match 47


state 81
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 5


state 82
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 90
	0x6d - 0x7a (14)   goto 21

	match 47


state 83
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 31


state 84
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 91
	0x75 - 0x7a (6)    goto 21

	match 47


state 85
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 36


state 86
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 92
	0x73 - 0x7a (8)    goto 21

	match 47


state 87
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 7


state 88
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 93
	0x66 - 0x7a (21)   goto 21

	match 47


state 89
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 34


state 90
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 94
	0x66 - 0x7a (21)   goto 21

	match 47


state 91
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 4


state 92
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6d (13)   goto 21
	0x6e               goto 95
	0x6f - 0x7a (12)   goto 21

	match 47


state 93
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 32


state 94
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 3


state 95
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 35


#############################################################################
# Summary
#############################################################################

1 start state(s)
49 expression(s), 95 state(s)


#############################################################################
# End of File
#############################################################################
