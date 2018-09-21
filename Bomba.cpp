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

void Bomba::truno(){
    t--;
}

bool Bomba::getVis(){
    return vis;
}

Bomba::~Bomba(){

}