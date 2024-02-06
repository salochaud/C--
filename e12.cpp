#include <iostream>
using namespace std;

int main (){

    float practicas, teorica, participacion, nf=0;

    cout<<"Nota de practicas: "; cin>>practicas;
    cout<<"Nota de teorica: "; cin>>teorica;
    cout<<"Nota de participacion: "; cin>>participacion;

    practicas *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10;
    nf=practicas+teorica+participacion;

    cout<<"Nota final: "<<nf;
    return 0;
}