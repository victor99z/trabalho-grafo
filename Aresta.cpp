#include "Aresta.hpp"
#include <iostream>

#include "Vertice.hpp"

unsigned int Aresta::nextId{0};

Aresta::Aresta(Vertice* const v1, Vertice* const v2)
    :v1{v1}, v2{v2}{
    v1->adicionarAresta(this);
    v2->adicionarAresta(this);
    this->id = nextId;
    Aresta::nextId++;
}

unsigned int Aresta::getId() const{
    return this->id;
}

Vertice* Aresta::getVertice_1() const{
    return v1;
}
Vertice* Aresta::getVertice_2() const{
    return v2;
}

void Aresta::toString() const{
    std::cout << "Aresta de id:" << this->id << std::endl;
    std::cout << "Vertice id: " << v1->getId() << "\t";
    std::cout << "Vertice id: " << v2->getId() << "\n";
    std::cout << "########################" << std::endl;
}