CC=g++

all: main

main: main.cpp point.hpp
	$(CC) main.cpp -o main

clean:
	rm -f *.o main
