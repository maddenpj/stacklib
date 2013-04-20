CC=gcc

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

queue.o:
		$(CC) -c -o queue.o queue.c

main_int_q: queue.o
		$(CC) main_int_q.c -o main_int_q queue.o

main_struct_q: queue.o
		$(CC) main_struct_q.c -o main_struct_q queue.o

main_perf_q: queue.o
		$(CC) main_perf_q.c -o main_perf_q queue.o

all: main_int main_struct main_perf main_int_q main_struct_q main_perf_q
