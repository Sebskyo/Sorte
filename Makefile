CC=gcc
CFLAGS=-Wall

default: build

nomess: build clean

build: main.o list.o sort.o
	$(CC) $(CFLAGS) -o sorte main.o list.o sort.o

main.o: main.c list.h sort.h
	$(CC) $(CFLAGS) -c main.c
list.o: list.c list.h
	$(CC) $(CFLAGS) -c list.c
sort.o: sort.c sort.h
	$(CC) $(CFLAGS) -c sort.c

clean:
	rm *.o