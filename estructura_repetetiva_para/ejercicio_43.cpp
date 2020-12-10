/*  Dado un rango numérico entero positivo a y b, obtener la suma y la cantidad de los números
pares, impares y múltiplos de 3. */

#include<iostream>
#include<stdlib.h>
using namespace std;

int main ()
{
    int num1, num2, par=0, ipar=0, suma=0, mul=0;
    
    cout<<"\nIngresa primer numero: ";
    cin>>num1;
    cout<<"\nIngresa segundo numero: ";
    cin>>num2;
    
    for (int i = num1; i <= num2; i++)
    {
        if (i%2==0)
        {
            par=par+1;
        }
        else
        {
            ipar=ipar+1;
        }
        if (i%3==0)
        {
            mul=mul+1;
        }
        suma=suma+i;
    }
    
    
    cout<<"\n";
    cout<<"El resultado de numeros pares es: "<<par<<"\n";
    cout<<"El resultado de numeros impares es: "<<ipar<<"\n";
    cout<<"El resultado de multiplo de 3 es: "<<mul<<"\n";
    cout<<"La suma total es: "<<suma<<"\n";
    
    system("pause");
    return 0;
}