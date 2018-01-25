program: test.o main.o komunikat.o
	gcc -lm test.o main.o komunikat.o -o program
komunikat.o: komunikat.c komunikat.h
	gcc -Wall -c komunikat.c -o komunikat.o
main.o: main.c test.h
	gcc -Wall -c main.c -o main.o
test.o: test.c test.h komunikat.h
	gcc -Wall -c test.c -o test.o
	
.PHONY:clean
	
clean:
	rm -f program test.o main.o komunikat.o
