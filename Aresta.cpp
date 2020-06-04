#include "Aresta.hpp"
#include <iostream>

#include "Vertice.hpp"

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

void Aresta::toString(){
    std::cout << "Aresta de id: " << this->id << std::endl;
    std::list<Vertice*>::iterator it;

    for(it = verticesLigados.begin(); it != verticesLigados.end(); it++){
        std::cout << (*it)->getId() << std::endl;
    }
}