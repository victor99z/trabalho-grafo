#include "Vertice.hpp"
#include <iostream>

unsigned int Vertice::nextId{0};

Vertice::Vertice(){
    this->id = nextId;
    Vertice::nextId++;
}

unsigned int Vertice::getId() const{
    return this->id;
}

void Vertice::adicionarAresta(Aresta* aresta){
    arestasLigadas.push_back(aresta);
}
void Vertice::removerAresta(Aresta* aresta){
    arestasLigadas.remove(aresta);
}

void Vertice::toString(){
    std::cout << "Vertice de id: " << this->id << std::endl;
    std::list<Aresta*>::iterator it;

    for(it = arestasLigadas.begin(); it != arestasLigadas.end(); it++){
        std::cout << (*it)->getId() << std::endl;
    }
}