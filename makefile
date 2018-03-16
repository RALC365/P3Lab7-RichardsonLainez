Ejecutable: Main.o Racional.o 
	g++  Main.o Racional.o -o Ejecutable

Main.o: Main.cpp 
	g++ -c Main.cpp

Racional.o: Racional.h Racional.cpp 
	g++ -c Racional.cpp

