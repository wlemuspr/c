all: main

main.o: main.cc Angle.h Fish.h Population.h
	g++ -c main.cc

Angle.o: Angle.cc Angle.h
	g++ -c Angle.cc

Fish.o: Fish.cc Fish.h	
	g++ -c Fish.cc

Population.o: Population.cc Population.h
	g++ -c Population.cc

FlippyFish.o: FlippyFish.cc FlippyFish.h
	g++ -c FlippyFish.cc

DrunkenFish.o: DrunkenFish.cc DrunkenFish.h 
	g++ -c DrunkenFish.cc
	
main:	main.o Angle.o Fish.o Population.o FlippyFish.o DrunkenFish.o
	g++ -o main main.o Angle.o Fish.o Population.o FlippyFish.o DrunkenFish.o