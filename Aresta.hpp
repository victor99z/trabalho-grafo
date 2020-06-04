#pragma once

#include <list>
class Vertice;

class Aresta{
    public:
        Aresta();
        ~Aresta();

        void adicionarVertice(Vertice*);
        void removerVertice(Vertice*);

        unsigned int getId() const;

    private:
        unsigned int id;
        static unsigned int nextId;
        std::list<Vertice* const> verticesLigados;
};