#include "Item.h"

Item::Item(){

}

Item::Item(int nr,int nc){
    r = nr;
    c = nc;
}

int Item::getR(){
    return r;
}

int Item::getC(){
    return c;
}

void Item::setR(int nr){
    r = nr;
}

void Item::setC(int nc){
    c = nc;
}

void Item::odioDynamicCast(){
    int d = 8;
}

Item::~Item(){

}
