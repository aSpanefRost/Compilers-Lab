a.out:	lex.yy.c
		cc lex.yy.c -lfl

lex.yy.c:	ass3_18CS30034.l ass3_18CS30034.c
		flex ass3_18CS30034.l ass3_18CS30034.c

clean:
		rm a.out lex.yy.c

test:
		./a.out <ass3_18CS30034_test.c

ass3_18CS30034.c:
		touch ass3_18CS30034.c 
