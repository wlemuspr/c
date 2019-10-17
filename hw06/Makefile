all: main

Angle.o: Angle.cc Angle.h
	g++ -c Angle.cc
	
main.o: main.cc Angle.h 
	g++ -c main.cc
	
main:	main.o Angle.o 
	g++ -o main main.o Angle.o 