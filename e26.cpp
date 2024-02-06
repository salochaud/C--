#include <iostream>
using namespace std;

int main (){

    int edad;

    cout<<"Escriba edad: "; cin>>edad;

    if (edad >= 18 && edad <= 25)
    {cout<<"Esta en el rango";}
    else
    {cout<<"No esta en el rango";}

    return 0;
}