/*  Obtener la suma y la cantidad de los números divisibles por 3 y 5 a la vez, de los N primeros
números naturales. */

#include<iostream>
#include<stdlib.h>
using namespace std;

int main ()
{
    int i, num, mul3=0, mul5=0;
    
    cout<<"\nIngresa un numero: ";
    cin>>num;
    
    for (i=1 ; i <= num; i++)
    {
        do
        {
            if (i/5==0)
            {
                mul5=mul5+1;
            }
            
        } while (/* condition */);
        
    }
    
    cout<<"\n";
    cout<<"El resultado es: "<<result<<"\n";
    
    system("pause");
    return 0;
}