all:
	flex angryc.l
	yacc -dy angryc.y
	gcc lex.yy.c y.tab.c utils.c -ll -ly 