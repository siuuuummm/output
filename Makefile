all: start

start: list-module.o test-list-module.o
	gcc -o start list-module.o test-list-module.o

list-module.o: list-module.c list-module.h
	gcc -c list-module.c

test-list-module.o : test-list-module.c list-module.h
	gcc -c test-list-module.c

clean: 
	rm -f *.o
	rm -f ./start
	rm -f *~