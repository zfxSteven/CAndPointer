main.out:main.c delsubstr.o
	gcc -g main.c delsubstr.o findchar.o -o main.out

delsubstr.o:delsubstr.c delsubstr.h findchar.o findchar.h
	gcc -c delsubstr.c  

findchar.o:findchar.h findchar.c
	gcc -c findchar.c

