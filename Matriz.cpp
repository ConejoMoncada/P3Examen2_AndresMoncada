#include "Matriz.h"

#include<iostream>
#include<typeinfo>
using namespace std;

Matriz::Matriz(){
    jf = 1;
    jc = 1;
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
        items[i][14] = new Obstaculo(i,12);
    }

    for(int i = 0; i < 14; i++){
        items[0][i] = new Obstaculo(0,i);
    }

    for(int i = 0; i < 14; i++){
        items[12][i] = new Obstaculo(10,i);
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
    cout << "Ingrese el nombre del Jugador 1: ";
    cin >> nombre;
    items[1][1] = new Jugador(nombre,true,true,1,1,1);
    items[1][13] = new Jugador("CPU 2",true,false,1,13,2);
    items[6][7] = new Jugador("CPU 3",true,false,6,7,3);
    items[11][1] = new Jugador("CPU 4",true,false,11,1,4);
    items[11][13] = new Jugador("CPU 5",true,false,11,13,5);
}

void Matriz::setIconos(){
    Obstaculo* o = nullptr;
    Jugador* jg = nullptr;
    Bomba* b = nullptr;
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 15; j++){
            if (items[i][j] != NULL){
                o = dynamic_cast<Obstaculo*>(items[i][j]);
                jg = dynamic_cast<Jugador*>(items[i][j]);
                b = dynamic_cast<Bomba*>(items[i][j]);
                           
                if(o != NULL)
                    tablero[i][j] = 'O';
                else if(jg != NULL){
                    
                    switch(jg->getNum()){
                        case 1: tablero[i][j] = '1';
                            break;
                        case 2: tablero[i][j] = '2';
                            break;
                        case 3: tablero[i][j] = '3';
                            break;
                        case 4: tablero[i][j] = '4';
                            break;
                        case 5: tablero[i][j] = '5';
                            break;
                    }
                }
                else if(b != NULL)
                    tablero[i][j] = 'B';
                else
                    tablero[i][j] = ' ';
            }
            else
                tablero[i][j] = ' ';
        }
    }
}

void Matriz::mover(string input){
    char dir;
    for (int i = 0; i< input.length(); i++){
        dir = input[i];
        switch(dir){
            case 'w':
            case 'W':{
                if(jf > 1){
                    if(items[jf-1][jc] == NULL){
                        items[jf-1][jc] = items[jf][jc];
                        items[jf][jc] = NULL;
                        jf--;
                    }
                }
            }break;
            case 'a':
            case 'A':{
                if(jc > 1){
                    if(items[jf][jc-1] == NULL){
                        items[jf][jc-1] = items[jf][jc];
                        items[jf][jc] = NULL;
                        jc--;
                    }
                }
            }break;
            case 's':
            case 'S':{
                if(jf < 11){
                    if(items[jf+1][jc] == NULL){
                        items[jf+1][jc] = items[jf][jc];
                        items[jf][jc] = NULL;
                        jf = jf+1;
                    }
                }
            }break;
            case 'd':
            case 'D':{
                if(jc < 13){
                    if(items[jf][jc+1] == NULL){
                        items[jf][jc+1] = items[jf][jc];
                        items[jf][jc] = NULL;
                        jc = jc+1;
                    }
                }
            }break;
        }
    }
    cout << endl;
}

void Matriz::print(){
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 15; j++){
            cout << tablero[i][j];
        }
        cout << endl;
    }
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