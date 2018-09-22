#include "Bomba.h"

Bomba::Bomba():Item(){
srand(time(NULL));
t = rand() % 3 + 1;
vis = true;
}

Bomba::Bomba(int nr,int nc,bool v):Item(nr,nc){
srand(time(NULL));
t = rand() % 3 + 1;
vis = v;
}

int Bomba::getT(){
    return t;
}

void Bomba::turno(){
    t--;
}

bool Bomba::getVis(){
    return vis;
}
void Bomba::odioDynamicCast(){
    int hola = 3;
}

Bomba::~Bomba(){

}