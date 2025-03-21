all: racional.o main.o
	g++ racional.o main.o -o programa

racional.o:
	g++ -c defs/racional.cpp

main.o: racional.o
	g++ -c main.cpp

clean:
	rm -f *.o programa

run:
	make all
	./programa
	make clean