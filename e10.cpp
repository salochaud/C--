#include <iostream> 
using namespace std;

int main (){
    float a,b,c,d, resultado=0;

    cout<<"Digite la nota del alumno a: ";cin>>a;
    cout<<"Digite la nota del alumno b: ";cin>>b;
    cout<<"Digite la nota del alumno c: ";cin>>c;
    cout<<"Digite la nota del alumno d: ";cin>>d;
   

    resultado= (a+b+c+d)/4;

    cout<<"El promedio de nota de los cuatro alumnos es: "<<resultado;



    return 0;
}