//Primer programa en c++

#include <iostream>
using namespace std;

int main (){

    int n1,n2, suma=0, resta=0,division=0, multiplicacion=0;

    cout<<"Escriba un numero: "; cin>>n1;
    cout<<"Escriba otro numero: "; cin>>n2;

    suma=n1+n2; resta=n1-n2; multiplicacion=n1*n2; division=n1/n2;

    cout<< "Suma: " <<suma;
    cout<< "\nResta: " <<resta;
    cout<< "\nMultiplicacion: " <<multiplicacion;
    cout<< "\nsDivision: " <<division;

    return 0;
}