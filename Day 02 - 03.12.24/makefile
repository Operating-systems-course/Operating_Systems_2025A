CC = gcc
Flags = -Wall -g

all: main

main:app.o function.o
	$(CC) $(Flags) -o main app.o function.o


app.o:app.c function.h
	$(CC) $(Flags) -c app.c 

function.o: function.c function.h
	$(CC) $(Flags) -c function.c 
	
run:
	./main 

clean:
	rm -f *.out *.o

