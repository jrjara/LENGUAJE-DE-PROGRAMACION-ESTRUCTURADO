/* Cree el algoritmo para encriptar una frase con el valor del carácter ASCII sumando 2
posiciones. */

#include<iostream>
#include<string.h>

using namespace std ;

int main(){
    int sum=0, i;
    char frase[100];
     
    cout<<"Ingrese una frase: ";
    gets(frase);
     
    for(i = 0; i < 100; i++)
    {
      if (frase[i]!='\0')
      {
       frase[i]=frase[i]+2;
      }
    }
     
    cout<<"\nLa nueva frase encriptada es:\n"<<sum;
    cout<<"\n"<<frase;
         
    return 0;
}
