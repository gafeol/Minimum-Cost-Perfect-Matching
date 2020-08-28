CC=g++
CXXFLAGS=-std=c++11

all: example mcm

example: Example.cpp BinaryHeap.cpp Matching.cpp Graph.cpp BinaryHeap.h Matching.h Graph.h
	$(CC) Example.cpp BinaryHeap.cpp Matching.cpp Graph.cpp -o example $(CXXFLAGS)

mcm: MCM.cpp MCM.hpp
	$(CC) MCM.cpp -o mcm $(CXXFLAGS)