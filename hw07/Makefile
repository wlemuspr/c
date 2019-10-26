all: main

main.o: main.cc Angle.h 
	g++ -c main.cc

Angle.o: Angle.cc Angle.h
	g++ -c Angle.cc

log.o: log.cc log.h
	g++ -c log.cc

fish.o: fish.cc fish.h	
	g++ -c fish.cc

population.o: population.cc population.h
	g++ -c population.cc
	
main:	main.o log.o Angle.o fish.o population.o 
	g++ -o main main.o log.o Angle.o fish.o population.o