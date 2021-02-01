// Dado una frase determine cuantas palabras se repiten.

#include<iostream>
#include<string.h>

using namespace std ;

int main(){
    string frase, letra;
    int contar=0, i;

    cout<<"Ingrese una frase: ";
    getline (cin, frase);
    cout<<"Ingrese una palabra para determinar cuantas veces se repite en la frase: ";
    cin>>letra;

    for (i = 0; i <= frase.length()-1; i++)
    {
        if (toupper(frase[i])==toupper(letra[0]))
        {
            contar++;
        }  
    }
    
    cout<<"\n";
    cout<<"La palabra se repite "<<contar;
    cout<<" veces"<<endl;

    return 0;

}