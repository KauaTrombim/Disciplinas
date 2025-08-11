all: racional.o main.o
	gcc.o main.o -std=c99 racional -Wall

racional.o:
	gcc -c racional.c
main.o:
	gcc -c main.c
clean:
	rm *.o racional