tests: a.out
	./a.out < ass5_18CS30034_test1.c > ass5_18CS30034_quads1.out
	./a.out < ass5_18CS30034_test2.c > ass5_18CS30034_quads2.out
	./a.out < ass5_18CS30034_test3.c > ass5_18CS30034_quads3.out
	./a.out < ass5_18CS30034_test4.c > ass5_18CS30034_quads4.out
	./a.out < ass5_18CS30034_test5.c > ass5_18CS30034_quads5.out


a.out: y.tab.o lex.yy.o ass5_18CS30034_translator.o
	g++ lex.yy.o y.tab.o ass5_18CS30034_translator.o -lfl

ass5_18CS30034_translator.o: ass5_18CS30034_translator.cxx ass5_18CS30034_translator.h
	g++ -c ass5_18CS30034_translator.h
	g++ -c ass5_18CS30034_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: ass5_18CS30034.l y.tab.h ass5_18CS30034_translator.h
	flex ass5_18CS30034.l

y.tab.c: ass5_18CS30034.y
	yacc -dtv ass5_18CS30034.y -W -Wno

y.tab.h: ass5_18CS30034.y
	yacc -dtv ass5_18CS30034.y -W -Wno

clean:
	rm lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o ass5_18CS30034_translator.o a.out y.output

ctests:
	rm ass5_18CS30034_quads1.out ass5_18CS30034_quads2.out ass5_18CS30034_quads3.out ass5_18CS30034_quads4.out ass5_18CS30034_quads5.out
