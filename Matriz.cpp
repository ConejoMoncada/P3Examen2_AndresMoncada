#include "Matriz.h"

Matriz::Matriz(){
    items = new Item** [13];
    for (int i = 0; i < 13; i++){
        items[i] = new Item* [15];
    }

    for (int i = 0; i < 13; i++){
        for(int j=0; j < 15; j++){
            items[i][j] = NULL;
        }
    }

    for(int i = 0; i < 13; i++){
        items[i][0] = new Obstaculo(i,0);
    }

    for(int i = 0; i < 13; i++){
        items[i][12] = new Obstaculo(i,12);
    }

    for(int i = 0; i < 14; i++){
        items[0][i] = new Obstaculo(0,i);
    }

    for(int i = 0; i < 14; i++){
        items[10][i] = new Obstaculo(10,i);
    }

    for(int i = 2; i < 12; i++){
        for (int j = 2; j < 14; j++){
            if(i%2 == 0 && j%2 == 0)
                items[i][j] = new Obstaculo(i,j);
        }
    }

    tablero = new char*[13];
    for (int i = 0; i < 13; i++){
        tablero[i] = new char[15];
    }
}

void Matriz::setIconos(){
    Obstaculo* o;
    Jugador* jg;
    Bomba* b;

    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 15; j++){
            if (items[i][j] != NULL){
                o = static_cast<Obstaculo*>(items[i][j]);
                jg = static_cast<Jugador*>(items[i][j]);
                b = static_cast<Bomba*>(items[i][j]);
            }
            else
                tablero[i][j] = ' ';
        }
    }

    delete o;
    delete jg;
    delete b;
}

Matriz::~Matriz(){
    for(int i = 0; i < 13; i++){
        for (int j = 0; j < 15; j++){
            delete items[i][j];
            items[i][j] = NULL;
        }
    }

    for(int i = 0; i < 13; i++){
        delete items[i];
        items[i] = NULL;
    }

    delete[] items;

    for(int i = 0; i < 13; i++){
        delete[] tablero[i];
        tablero[i] = NULL;
    }
    delete[] tablero;
}