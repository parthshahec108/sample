# The variables will be for compiler use.
CC=gcc

CFLAGS=-c -Wall

# Compile our programs and make binaries from them
all: program_1 program_2 program_3

program_1: program_1.o
	$(CC) program_1.o -o program_1

program_1.o: program_1.c
	$(CC) $(CFLAGS) program_1.c

program_2: program_2.o
	$(CC) program_2.o -o program_2

program_2.o: program_2.c
	$(CC) $(CFLAGS) program_2.c

program_3: program_3.o
	$(CC) program_3.o -o program_3

program_3.o: program_3.c
	$(CC) $(CFLAGS) program_3.c

clean:
	rm *o program_1 program_2 program_3 

