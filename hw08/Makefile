all: main

main.o: main.cc Image.h 
	g++ -c main.cc

Image.o: Image.cc Image.h
	g++ -c Image.cc
	
main:	main.o Image.o 
	g++ -o main main.o Image.o