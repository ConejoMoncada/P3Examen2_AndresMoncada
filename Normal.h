#ifndef NORMAL_H
#define NORMAL_H

#include "Bomba.h"

class Normal: public Bomba{
    private:
        int rango;
    public:
        Normal();
        Normal(int,int,bool);

        int getRango();

        ~Normal();
};
#endif