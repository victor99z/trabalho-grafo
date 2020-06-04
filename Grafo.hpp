#pragma once

#include "Vertice.hpp"
#include "Aresta.hpp"

class Grafo{
    public:
        Grafo(/* args */);
        ~Grafo();

        void adicionarVertice(Vertice* vertice);
        void adicionarAresta(Aresta* aresta);
        void removerAresta(Aresta* aresta);
        void removerVertice(Vertice* vertice);
        void toString();

    private:
        std::list<Vertice*> vertices;
        std::list<Aresta*> arestas;
};

