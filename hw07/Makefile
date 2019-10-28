all: main

main.o: main.cc Angle.h 
	g++ -c main.cc

Angle.o: Angle.cc Angle.h
	g++ -c Angle.cc

fish.o: fish.cc fish.h	
	g++ -c fish.cc

population.o: population.cc population.h
	g++ -c population.cc
	
main:	main.o Angle.o fish.o population.o 
	g++ -o main main.o Angle.o fish.o population.o