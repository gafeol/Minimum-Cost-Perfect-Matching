CC=g++
CXXFLAGS=-std=c++11

all: example mcm

example: Example.cpp BinaryHeap.cpp Matching.cpp Graph.cpp BinaryHeap.h Matching.h Graph.h
	$(CC) Example.cpp BinaryHeap.cpp Matching.cpp Graph.cpp -o example $(CXXFLAGS)

mcm: MCM.cpp Example.cpp BinaryHeap.cpp Matching.cpp Graph.cpp MCM.hpp BinaryHeap.h Matching.h Graph.h
	$(CC) MCM.cpp Example.cpp BinaryHeap.cpp Matching.cpp Graph.cpp -o mcm $(CXXFLAGS)