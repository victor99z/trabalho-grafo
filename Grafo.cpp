#include "Grafo.hpp"

void Grafo::adicionarVertice(Vertice* vertice){
    vertices.push_back(vertice);
}
void Grafo::adicionarAresta(Aresta* aresta){
    vertices.push_back(aresta->getVertice_1());
    vertices.push_back(aresta->getVertice_2());
    arestas.push_back(aresta);
}
void Grafo::removerAresta(Aresta* aresta){
    vertices.remove(aresta->getVertice_1());
    vertices.remove(aresta->getVertice_2());
    arestas.remove(aresta);
}
void Grafo::removerVertice(Vertice* vertice){
    vertices.remove(vertice);
}
void Grafo::toString(){

    std::list<Vertice*>::iterator it_vertice;
    std::list<Aresta*>::iterator it_aresta;

    for(it_vertice = vertices.begin(); it_vertice != vertices.end(); it_vertice++){
        (*it_vertice)->toString();
    }

    for(it_aresta = arestas.begin(); it_aresta != arestas.end(); it_aresta++){
        (*it_aresta)->toString();
    }
}