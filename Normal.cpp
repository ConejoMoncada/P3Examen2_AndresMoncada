#include "Normal.h"

Normal::Normal():Bomba(){
rango = rand() % 4 +1;
}

Normal::Normal(int nr, int nc,bool v):Bomba(nr,nc,v){
rango = rand() % 4 +1;
}

int Normal::getRango(){
    return rango;
}

Normal::~Normal(){

}