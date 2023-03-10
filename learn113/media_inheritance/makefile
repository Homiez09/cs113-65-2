SHELL := bash

CXX = g++
CXXFLAGS = -g

run: main
	./main.out

main: clean Media.o Image.o Video.o main.o
	$(CXX) $(CXXFLAGS) Media.o Image.o Video.o main.o -o main.out

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Media.o:
	$(CXX) $(CXXFLAGS) -c Media.cpp -o Media.o

Image.o:
	$(CXX) $(CXXFLAGS) -c Image.cpp -o Image.o

Video.o:
	$(CXX) $(CXXFLAGS) -c Video.cpp -o Video.o

clean:
	rm -f *.o main.out