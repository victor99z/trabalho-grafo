#pragma once

class Vertice;

class Aresta{
    public:
        Aresta(Vertice* const v1, Vertice* const v2);

        Vertice* getVertice_1() const;
        Vertice* getVertice_2() const;
        unsigned int getId() const;
        void toString() const;

    private:
        unsigned int id;
        static unsigned int nextId;
        Vertice* const v1;
        Vertice* const v2;
};