all: main

readPPM.o: readPPM.cc readPPM.h
	g++ -c readPPM.cc
	
writeJPEG.o: writeJPEG.cc writeJPEG.h
	g++ -c writeJPEG.cc

main.o: main.cc readPPM.h writeJPEG.h
	g++ -c main.cc
	
main:	main.o readPPM.o writeJPEG.o
	g++ -o main main.o readPPM.o writeJPEG.o -l libjpeg