CC = gcc
all: main

main: libft.o test.o
	$(CC) -o main libft.o test.o

test.o: test.c
	$(CC) -c test.c

libft.o: libft.c
	$(CC) -c libft.c

run: main
	./main

clean:
	rm -f main libft.o test.o