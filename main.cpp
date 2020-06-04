#include <iostream>
#include "Vertice.hpp"
#include "Aresta.hpp"
#include "Grafo.hpp"

int main(){

    Vertice* v1{ new Vertice{} };
    Vertice* v2{ new Vertice{} };
    
    std::cout << v1->getId() << std::endl;
    std::cout << v2->getId() << std::endl;

    free(v1);
    free(v2);

    std::cout << v1->getId() << std::endl;
    std::cout << v2->getId() << std::endl;
 
   
    return EXIT_SUCCESS;
}
