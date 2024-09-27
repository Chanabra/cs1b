CC = g++

all: main

main: main.o inctax.o
	$(CC) -o main main.o inctax.o

main.o: main.cpp inctax.h myheader.h
	$(CC) -c main.cpp

inctax.o: inctax.cpp inctax.h
	$(CC) -c inctax.cpp

clean:
	rm *.o main
