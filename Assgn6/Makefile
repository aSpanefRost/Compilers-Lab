tinyc: y.tab.o lex.yy.o ass6_18CS30034_translator.o ass6_18CS30034_target_translator.o
	g++ -g ass6_18CS30034_translator.o ass6_18CS30034_target_translator.o lex.yy.o y.tab.o -lfl -o tinyc
	 ./tinyc < ass6_18CS30034_test1.c
	 ./tinyc < ass6_18CS30034_test2.c
	 ./tinyc < ass6_18CS30034_test3.c
	 ./tinyc < ass6_18CS30034_test4.c
	 ./tinyc < ass6_18CS30034_test5.c

lex.yy.c: ass6_18CS30034.l
	flex ass6_18CS30034.l
y.tab.c: ass6_18CS30034.y
	yacc -dtv ass6_18CS30034.y
ass6_18CS30034_target_translator.o: ass6_18CS30034_target_translator.cxx
	g++ -g -c -no-pie ass6_18CS30034_target_translator.cxx
ass6_18CS30034_translator.o: ass6_18CS30034_translator.cxx
	g++ -g -c -no-pie ass6_18CS30034_translator.cxx
lex.yy.o: lex.yy.c
	g++ -g -c -no-pie lex.yy.c
y.tab.o:    y.tab.c
	g++ -g -no-pie -DYYDEBUG -c y.tab.c
libass2_18CS30034.a: ass2_18CS30034.o
	ar -rcs libass2_18CS30034.a ass2_18CS30034.o

ass2_18CS30034.o: ass2_18CS30034.c myl.h
	gcc -Wall  -c ass2_18CS30034.c -no-pie
clean:
	rm -rf test1 test2 test3 test4 test5 lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o ass6_18CS30034_translator.o pointerhandling.o ass6_18CS30034_target_translator.o ass6_18CS30034_test1.o ass6_18CS30034_test2.o ass6_18CS30034_test3.o ass6_18CS30034_test4.o ass6_18CS30034_test5.o libass2_18CS30034.a ass2_18CS30034.o output.o pointerhandling.out ass6_18CS30034_quad1.out ass6_18CS30034_quad2.out ass6_18CS30034_quad3.out ass6_18CS30034_quad4.out ass6_18CS30034_quad5.out ass6_18CS30034_test1.s ass6_18CS30034_test2.s ass6_18CS30034_test3.s ass6_18CS30034_test4.s ass6_18CS30034_test5.s


test1: ass6_18CS30034_test1.o libass2_18CS30034.a
	gcc -g -no-pie ass6_18CS30034_test1.o -o test1 -L. -lass2_18CS30034
ass6_18CS30034_test1.o: ass6_18CS30034_test1.s myl.h
	gcc -g -Wall  -c ass6_18CS30034_test1.s -no-pie -o ass6_18CS30034_test1.o

test2: ass6_18CS30034_test2.o libass2_18CS30034.a
	gcc -g  -no-pie ass6_18CS30034_test2.o -o test2 -L. -lass2_18CS30034
ass6_18CS30034_test2.o: ass6_18CS30034_test2.s myl.h
	gcc -g -Wall -c ass6_18CS30034_test2.s -no-pie

test3: ass6_18CS30034_test3.o libass2_18CS30034.a
	gcc -g  -no-pie ass6_18CS30034_test3.o -o test3 -L. -lass2_18CS30034
ass6_18CS30034_test3.o: ass6_18CS30034_test3.s myl.h
	gcc -g -Wall  -c ass6_18CS30034_test3.s -no-pie

test4: ass6_18CS30034_test4.o libass2_18CS30034.a
	gcc -g  -no-pie ass6_18CS30034_test4.o -o test4 -L. -lass2_18CS30034
ass6_18CS30034_test4.o: ass6_18CS30034_test4.s myl.h
	gcc -g -Wall  -c ass6_18CS30034_test4.s -no-pie

test5: ass6_18CS30034_test5.o libass2_18CS30034.a
	gcc -g  -no-pie ass6_18CS30034_test5.o -o test5 -L. -lass2_18CS30034
ass6_18CS30034_test5.o: ass6_18CS30034_test5.s myl.h
	gcc -g -Wall -c ass6_18CS30034_test5.s -no-pie

output: output.o libass2_18CS30034.a
	gcc -g  -no-pie output.o -o output -L. -lass2_18CS30034
output.o: output.s myl.h
	gcc -g -Wall -c output.s -no-pie

run:

	./tinyc < ass6_18CS30034_test1.c > ass6_18CS30034_quad1.out

	mv output.s ass6_18CS30034_test1.s

	make test1

	./tinyc < ass6_18CS30034_test2.c > ass6_18CS30034_quad2.out

	mv output.s ass6_18CS30034_test2.s

	make test2

	./tinyc < ass6_18CS30034_test3.c > ass6_18CS30034_quad3.out

	mv output.s ass6_18CS30034_test3.s

	make test3

	./tinyc < ass6_18CS30034_test4.c > ass6_18CS30034_quad4.out

	mv output.s ass6_18CS30034_test4.s

	make test4

	./tinyc < ass6_18CS30034_test5.c > ass6_18CS30034_quad5.out

	mv output.s ass6_18CS30034_test5.s

	make test5

	#Below are the individual commands for compiling each test file
	#./test1
	#./test2
	#./test3
	#./test4
	#./test5

