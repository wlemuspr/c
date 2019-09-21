all: main

readPPM.o: readPPM.cc readPPM.h
	g++ -c readPPM.cc
	
writePPM.o: writePPM.cc writePPM.h
	g++ -c writePPM.cc

main.o: main.cc readPPM.h
	g++ -c main.cc
	
main:	main.o readPPM.o writePPM.o
	g++ -o main main.o readPPM.o writePPM.o