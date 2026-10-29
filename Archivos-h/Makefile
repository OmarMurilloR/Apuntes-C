#ejecutable: index.o archivo.o
#	gcc -o index.o archivo.o
#index.o: index.c
#	gcc -c index.c
#archivo.o: archivo.c
#	gcc -c archivo.c
#clean:
#	rm *.o

# Primer metodo
#ejecutable: index.c archivo.c archivo.h
#	gcc index.c archivo.c -o ejecutable

# Segundo metodo
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

ejecutable.exe: archivo.h archivo.c index.c
	$(CC) $(CFLAGS) archivo.c index.c -o ejecutable.exe

clean:
	rm -f ejecutable.exe ejecutable

.PHONY: clean