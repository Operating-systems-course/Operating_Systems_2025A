CC = gcc
Flags = -Wall -g

all:clean allocate
	./allocate

allocate:
	$(CC) $(Flags) -o allocate allocate.c


leak:
	valgrind --leak-check=full --error-exitcode=1 ./allocate 

clean:
	rm -f *.out *.o allocate

