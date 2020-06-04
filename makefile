parametrosCompilacao= -Wall #-Wshadow
execute=grafo

all: $(execute)

$(execute): main.o Aresta.o Vertice.o Grafo.o
	g++ -o grafo main.o Aresta.o Grafo.o Vertice.o $(parametrosCompilacao)

main.o:
	g++ -c main.cpp $(parametrosCompilacao)

Aresta.o: 
	g++ -c Aresta.cpp $(parametrosCompilacao)

Vertice.o: 
	g++ -c Vertice.cpp $(parametrosCompilacao)

Grafo.o:
	g++ -c Grafo.cpp $(parametrosCompilacao)

clean: 
	rm -f *.o $(execute)