#ifndef JUGADOR_H
#define JUGADOR_H

#include "Item.h"
#include<string>
using std::string;

class Jugador: public Item{
    private:
        string nombre;
        bool status;
        bool ctrl;
    public:
        Jugador();
        Jugador(string,bool,bool,int,int);

        string getNombre();
        bool getstatus();
        bool getCtrl();

        ~Jugador();
};
#endif