parametrosCompilacao= -Wall #-Wshadow
execute=grafo

all: $(execute)

	
$(execute): main.o Grafo.o Aresta.o Vertice.o 
	g++ -o $(execute) main.o Grafo.o Aresta.o Vertice.o  $(parametrosCompilacao)

run:
	clear
	$(execute)
	./grafo

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