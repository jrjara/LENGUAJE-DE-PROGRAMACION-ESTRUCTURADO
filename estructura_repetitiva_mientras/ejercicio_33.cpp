// : Calcular la suma y el producto de los N primeros números naturales múltiplos de 3

#include<iostream>
using namespace std;

int main ()
{
    int num, suma=0, prod=1;
    
    cout<<"\nIngresa un numero: ";
    cin>>num;

    if (num==0)
    {
        prod=0;
    }
    for (int i = 1; i <= num; i++)
    {
        suma=suma+(i*3);
        prod=prod*(i*3);
    }
    cout<<"\n";
    cout<<"La suma es: "<<suma<<"\n";
    cout<<"El producto es: "<<prod<<"\n";

    return 0;
}