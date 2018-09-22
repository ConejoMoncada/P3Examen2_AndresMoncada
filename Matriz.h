#ifndef MATRIZ_H
#define MATRIZ_H

#include "Item.h"
#include "Obstaculo.h"
#include "Jugador.h"
#include "Bomba.h"
#include "Normal.h"
#include "Espina.h"
#include "V.h"
#include<vector>
using std::vector;

class Matriz{
    private:
        Item*** items;
        vector<Bomba*> bombas;
        char** tablero;
        int jf,jc;
        string nombre;

    public:
        Matriz();

        vector<Bomba*> getBombas();
        void setIconos();
        void print();
        void mover(string);

        ~Matriz();
};
#endif