# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o Node.o Tree.o
	$(CXX) $(CXXFLAGS) -o main main.o Node.o Tree.o


main.o: main.cpp Node.h Tree.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Node.o: Node.h

Tree.o: Tree.h Node.h

.PHONY:  clean

clean:
	rm -f *.o
