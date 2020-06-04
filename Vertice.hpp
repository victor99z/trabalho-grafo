#pragma once
#include <list>
#include "Aresta.hpp"

class Vertice{
    public:
        Vertice();
        ~Vertice();

        unsigned int getId() const;

        void adicionarAresta(Aresta* aresta);
        void removerAresta(Aresta* aresta);

        void toString();

    private:
        std::list<Aresta*> arestasLigadas;
        unsigned int id;
        static unsigned int nextId;
};