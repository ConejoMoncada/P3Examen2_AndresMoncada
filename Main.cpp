#include"Matriz.h"
#include<iostream>
using namespace std;

int main(){
    bool fin;
    Matriz* mat = new Matriz();
    mat->setIconos();
    mat->print();
    string a;
    do{
        cout << "Ingrese sus movimientos o ingrese 'fin' para salir: " << endl;
        cin >> a;
        fin = (a == "fin");
        mat->mover(a);
        mat->setIconos();
        mat->print();
    }while(!fin);
    delete mat;
    return 0;
}