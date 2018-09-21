#ifndef ESPINA_H
#define ESPINA_H

#include "Bomba.h"

class Espina: public Bomba{
    public:
        Espina();
        Espina(int,int,bool);

        ~Espina();
};
#endif