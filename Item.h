#ifndef ITEM_H
#define ITEM_H

class Item{
    protected:
        int r;
        int c;
    public:
        Item();
        Item(int,int);

        int getR();
        int getC();

        void setR(int);
        void setC(int);

        ~Item();

};
#endif