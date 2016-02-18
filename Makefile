CC=gcc
CFLAGS=-Wall

default: build

build: main.o list.o
	$(CC) $(CFLAGS) -o sorte main.o list.o

main.o: main.c list.h
	$(CC) $(CFLAGS) -c main.c
list.o: list.c list.h
	$(CC) $(CFLAGS) -c list.c

clean:
	rm *.o