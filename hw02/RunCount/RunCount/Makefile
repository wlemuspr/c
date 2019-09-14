all: main

main.o: main.cc RunCount.h
	g++ -c main.cc
	
RunCount.o: RunCount.cc RunCount.h
	g++ -c RunCount.cc
	
main:	RunCount.o main.o
	g++ -o main main.o RunCount.o