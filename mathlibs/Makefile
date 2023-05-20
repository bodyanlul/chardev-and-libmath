CC = gcc
CFLAGS = -Wall -Werror

all: static dynamic

static: libmath.a
	$(CC) $(CFLAGS) -o static_example main.c -L. -lmath -lm

dynamic: libmath.so
	$(CC) $(CFLAGS) -o dynamic_example main.c -L. -lmath -Wl,-rpath,.

libmath.a: square.o square_root.o
	ar rcs libmath.a square.o square_root.o

libmath.so: square.o square_root.o
	$(CC) $(CFLAGS) -shared -o libmath.so square.o square_root.o

square.o: square.c
	$(CC) $(CFLAGS) -c square.c

sqrt.o: square_root.c
	$(CC) $(CFLAGS) -c square_root.c

clean:
	rm -f *.o *.a *.so static_example dynamic_example