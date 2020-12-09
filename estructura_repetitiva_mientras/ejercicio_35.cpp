//  Se requiere saber si existe un determinado dígito en un número dado

#include<iostream>
using namespace std;

int main ()
{
    int num=0, result=0;
    
    cout<<"\nIngresa un numero digito: ";
    cin>>num;
    
   while (num>=1)
   {
       num=num/10;
       result++;
   }
   
   
    cout<<"El resultado es de: "<<result<<" digitos";
    
    return 0;
}