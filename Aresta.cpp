#include "Aresta.hpp"

unsigned int Aresta::nextId{0};

Aresta::Aresta(){
    this->id = nextId;
    Aresta::nextId++;
}

unsigned int Aresta::getId() const{
    return this->id;
}

void Aresta::adicionarVertice(Vertice* vertice){
    verticesLigados.push_back(vertice);
}
void Aresta::removerVertice(Vertice* vertice){
    verticesLigados.remove(vertice);
}

