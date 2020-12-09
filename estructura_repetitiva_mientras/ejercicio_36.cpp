// Dado un número, determinar cual es el porcentaje de números pares, impares y neutros (0)

#include<iostream>
using namespace std;

int main ()
{
    int num, fac=1;
    
    cout<<"\nIngresa el numero para calcular el factoriar: ";
    cin>>num;
    
    fac=1;
    while(num!=0){
        fac=fac*num;
        num--;
    }
    cout<<"El resultado de factorial es: "<<fac<<"\n";
    
    return 0;
}