factorial: main.o my_math.o
	g++ -o factorial main.o my_math.o

main.o: main.cpp my_math.h
	g++ -c main.cpp

my_math.o: my_math.cpp my_math.h
	g++ -c my_math.cpp