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
        int num;
    public:
        Jugador();
        Jugador(string,bool,bool,int,int,int);

        string getNombre();
        bool getstatus();
        bool getCtrl();
        int getNum();

        void odioDynamicCast();

        ~Jugador();
};
#endif