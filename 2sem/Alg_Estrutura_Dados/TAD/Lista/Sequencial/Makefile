CC = gcc
CFLAGS = -march=x86-64 -mtune=native -O2 -pipe
objects = main.o lista.o

run: main
	./main

main: lista.o main.c
	${CC} -o main lista.o main.c

lista.o: lista.c lista.h
	${CC} -c lista.c

clean: 
	rm main ${objects}