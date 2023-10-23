all: main

main: test-list-module.o list-module.o
	$(CC) -o main test-list-module.o list-module.o

test-list-module.o: test-list-module.c
	$(CC) -c test-list-module.c

list-module.o: list-module.c
	$(CC) -c list-module.c

run: main
	./main

clean:
	rm -f main test-list-module.o list-module.o

