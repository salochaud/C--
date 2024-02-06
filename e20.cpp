#include <iostream>
using namespace std;

int main (){
    int n1,n2;

    cout<<"Num1 y Num2: "; cin>>n1>>n2;

    if (n1==n2)
    {cout<<"Ambos son iguales";}
    else if (n1>n2)
    {cout<<"El mayor es: "<<n1;}
    else
    {cout<<"El mayor es: "<<n2;}

    return 0;
}