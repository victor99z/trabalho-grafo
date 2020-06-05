#include <iostream>
#include "Vertice.hpp"
#include "Aresta.hpp"
#include "Grafo.hpp"

int main(){

    Grafo* g0{ new Grafo };

    Vertice v1;
    Vertice v2;
    Vertice v3;

    Aresta a1{ &v1, &v2 };
    Aresta a2{ &v2, &v3 };
    Aresta a3{ &v1, &v3 };

    g0->adicionarAresta(&a1);
    g0->adicionarVertice(&v3);
    g0->toString();
    g0->removerAresta(&a1);
    std::cout << "\nAtualizando...\n" << std::endl;
    g0->toString();

    delete g0;

    return EXIT_SUCCESS;
}
