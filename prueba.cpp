/* Dado un frase devuelva la frase con asteriscos en lugar de espacios en blancos */
#include <stdio.h>
#include <stdlib.h>

using namespace std ;

int main()
{
    int sum=0,x;
    char frase[50];
     
    cout<<"Introduzca una frase: ";
    gets(frase);
     
    for(x = 0; x < 50;x++)
    {
      if (frase[x]!='\0')
      {
       frase[x]=frase[x]+3;
      }
    }
     
    printf("\nLa nueva frase de longitud %d es:\n",sum);
    printf("\n%s",frase);
         
    return 0;
}
