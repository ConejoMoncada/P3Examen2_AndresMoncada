#ifndef BOMBA_H
#define BOMBA_H
#include "Item.h"

#include<stdlib.h>
#include<time.h>
using namespace std;

class Bomba:public Item{
    protected:
        int t;
        int r;
        int c;
        bool vis;
    public:
        Bomba();
        Bomba(int,int,bool);

        int getT();

        void turno();

        void odioDynamicCast();

        bool getVis();

        ~Bomba();
};
#endif