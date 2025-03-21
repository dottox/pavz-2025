all: punto.o segmento.o main.o
	g++ punto.o segmento.o main.o -o programa

punto.o:
	g++ -c defs/punto.cpp

segmento.o: punto.o
	g++ -c defs/segmento.cpp

main.o: segmento.o punto.o
	g++ -c main.cpp

clean:
	rm -f *.o programa

run:
	make all
	./programa
	make clean