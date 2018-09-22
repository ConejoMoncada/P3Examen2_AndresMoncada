#include "Jugador.h"

Jugador::Jugador():Item(){
    nombre = "J";
    num = 0;
}

Jugador::Jugador(string nom,bool sts, bool crl, int nr, int nc,int n):Item(nr,nc){
    nombre = nom;
    status = sts;
    ctrl = crl;
    num = n;
}

string Jugador::getNombre(){
    return nombre;
}
bool Jugador::getstatus(){
    return status;
}

bool Jugador::getCtrl(){
    return ctrl;
}

int Jugador::getNum(){
    return num;
}
void Jugador::odioDynamicCast(){
    int h = 6;
}

Jugador::~Jugador(){

}

