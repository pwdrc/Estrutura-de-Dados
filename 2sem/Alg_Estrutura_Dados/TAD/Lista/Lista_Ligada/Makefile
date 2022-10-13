CC = gcc
CFLAGS = -march=x86_64 -mtune=native -O3 -Wall -pipe
objects = main.o lista.objects

run: main
	./main

main: lista.o main.c 
	${CC} -o main lista.o main.c 

lista.o: lista.c lista.h
	${CC} -c lista.c 

clean: 
	rm main ${objects}