CC=gcc-4.7

CFLAGS=

OBJ=stack.o

stack.o:
		$(CC) -c -o stack.o stack.c

main_int: stack.o
		$(CC) main_int.c -o main_int stack.o

main_struct: stack.o
		$(CC) main_struct.c -o main_struct stack.o

main_perf: stack.o
		$(CC) main_perf.c -o main_perf stack.o

all: main_int main_struct main_perf
