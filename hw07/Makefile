all: main

main.o: main.cc Angle.h 
	g++ -c main.cc

Angle.o: Angle.cc Angle.h
	g++ -c Angle.cc

Fish.o: Fish.cc Fish.h	
	g++ -c Fish.cc

Population.o: Population.cc Population.h
	g++ -c Population.cc
	
main:	main.o Angle.o Fish.o Population.o 
	g++ -o main main.o Angle.o Fish.o Population.o