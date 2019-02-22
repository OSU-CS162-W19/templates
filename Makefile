CC=g++

all: main stl_stuff

main: main.cpp point.hpp dynarray.hpp
	$(CC) main.cpp -o main

stl_stuff: stl_stuff.cpp
	$(CC) stl_stuff.cpp -o stl_stuff

clean:
	rm -f *.o main stl_stuff
