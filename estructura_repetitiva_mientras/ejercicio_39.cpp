/*  Dado 2 números obtener el MCD (máximo común divisor), utilice el método EUCLIDES
(divisiones sucesivas). */

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
 
int main()
{
    int div, divdo, resto;

    cout<<"Introduzca el Dividendo: ";
    cin>>div;
    cout<<"Ahora, introduzca el Divisor: ";
    cin>>divdo;
;
    resto = divdo%div;
    if(resto == 0){
       printf("\n\n  El MCD es %d", div);
       }
    while(!resto == 0)
    {
     divdo = div;
     div = resto;
     resto = divdo%div;

     if(divdo%div == 0){
        cout<<"\n\n  El MCD es "<<div<<"\n";
        break;
     }
    }
 return 0;
}
