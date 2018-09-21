#ifndef MATRIZ_H
#define MATRIZ_H

#include "Item.h"
#include "Bomba.h"
#include<vector>
using std::vector;

class Matriz{
    private:
        Item*** items;
        vector<Bomba*> bombas;
        char** tablero;
        
    public:
        Matriz();

        vector<Bomba*> getBombas();
        void setIconos();
        void print();

        ~Matriz();
};
#endif