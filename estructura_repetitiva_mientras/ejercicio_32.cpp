/*  Dado un rango de números enteros, obtener la cantidad de números pares e impares que
contiene el rango, sin considerar los múltiplos de 5. */

#include<iostream>
using namespace std;

int main ()
{
    int i,ni, nf, cp=0, cip=0;
    
    cout<<"\nIngresa un numero inicial: ";
    cin>>ni;
    cout<<"\nIngresa un numero final: ";
    cin>>nf;

    i=ni+1;
    while (i<nf)
    {
        if (i%2==0 )
        {
            cp+=1;
        }
        i++;
    }

    i=ni-1;
    while (i<nf)
    {
        if (i%2!=1 )
        {
            cip+=1;
        }
        i++;
    }

    cout<<"\n";
    cout<<"Cantidad de pares es: "<<cp<<"\n";
    cout<<"Cantidad de impares es: "<<cip<<"\n";

    return 0;

}
    