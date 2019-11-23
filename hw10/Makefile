all: main

main.o: main.cc Angle.h Fish.h 
	g++ -c main.cc

Angle.o: Angle.cc Angle.h
	g++ -c Angle.cc

Fish.o: Fish.cc Fish.h	
	g++ -c Fish.cc

FlippyFish.o: FlippyFish.cc FlippyFish.h
	g++ -c FlippyFish.cc

DrunkenFish.o: DrunkenFish.cc DrunkenFish.h 
	g++ -c DrunkenFish.cc
	
main:	main.o Angle.o Fish.o FlippyFish.o DrunkenFish.o
	g++ -o main main.o Angle.o Fish.o FlippyFish.o DrunkenFish.o