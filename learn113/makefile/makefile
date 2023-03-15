SHELL := bash

CXX = g++
CXXFLAGS = -g

run: main
	./main.out > output.txt
	code output.txt

main: clean main.o
	$(CXX) $(CXXFLAGS) main.o -o main.out

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -f *.o main.out output.txt