// Calcule la suma de los cuadrados y cubos de los N primeros números naturales

#include<iostream>
#include<stdlib.h>
using namespace std;

int main ()
{
    int num, result=0;
    
    cout<<"\nIngresa un numero: ";
    cin>>num;
    
    for (int i=1 ; i <= num; i++)
    {
        result=result+(i*i);
    }
    
    cout<<"\n";
    cout<<"El resultado es: "<<result<<"\n";
    
    system("pause");
    return 0;
}