#include "Jugador.h"

Jugador::Jugador():Item(){
    nombre = "J";
}

Jugador::Jugador(string nom,bool sts, bool crl, int nr, int nc):Item(nr,nc){
    nombre = nom;
    status = sts;
    ctrl = crl;
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

Jugador::~Jugador(){
    
}

