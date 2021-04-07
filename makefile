exucutable: main.o DrinkTypes.o
	g++ -o main main.o DrinkTypes.o

main.o: main.cpp DrinkTypes.h
	g++ -c main.cpp -o main.o
