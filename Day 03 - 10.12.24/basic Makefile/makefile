CC = gcc
Flags = -Wall -g

all:main

main:main.o math.o
	$(CC) $(Flags) -o main main.o math.o



main.o:main.c math.h
	$(CC) $(Flags) -c main.c



math.o:math.c math.h
	$(CC) $(Flags) -c math.c



clean:
	rm -f *.out *.o

