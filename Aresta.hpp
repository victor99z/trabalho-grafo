#pragma once

#include <list>

class Vertice;

class Aresta{
    public:
        Aresta();
        ~Aresta();

        void adicionarVertice(Vertice* vertice);
        void removerVertice(Vertice* vertice);

        unsigned int getId() const;

        void toString();

    private:
        unsigned int id;
        static unsigned int nextId;
        std::list<Vertice*> verticesLigados;
};