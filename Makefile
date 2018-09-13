CC=gcc

parallel:
	$(CC) parallel.c -fsanitize=thread -pthread -g -o parallel

memory:
	$(CC) memory.c -fsanitize=address -g -o memory

all: parallel memory

clean:
	rm memory parallel
