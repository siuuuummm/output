all: main

main: memset.o libft.o
	$(CC) -o main memset.o libft.o

memset.o: memset.c
	$(CC) -c memset.c

libft.o: libft.c
	$(CC) -c libft.c

run: main
	./main

clean:
	rm -f main memset.o libft.o