// Dado una frase determine cuantas palabras palíndromos ha ingresado.

#include<iostream>
#include<string.h>

using namespace std ;

int main(){
    char cadena[40], nueva[40];
    int i;

    cout<<"ingrese palabra :"<<endl;
    gets(cadena);

    for (i=(strlen(cadena)-1);i>=0;i--)
    {
        nueva[strlen(cadena)-1-i] = cadena[i];
    }

        nueva[strlen(cadena)]='\0';

    if (strcmp(cadena,nueva)==0)
    {
        cout<<"Es palindroma";
    }else
    {
        cout<<"No es palindroma";
    }

    return 0;
}