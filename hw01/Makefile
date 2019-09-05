all: main

main.o: main.cc multiply.h
	g++ -c main.cc
	
multiply.o: multiply.cc multiply.h
	g++ -c multiply.cc
	
main:	multiply.o main.o
	g++ -o main main.o multiply.o