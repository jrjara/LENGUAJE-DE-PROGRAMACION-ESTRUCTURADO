// Lea una frase y una palabra y determine si existe o no la palabra en la frase.

#include<iostream>
#include<string.h>
#include <ctype.h>

using namespace std;

int main(){
    char letra;
    string result;
    int a;

    cout<<"Ingrese una letra: ";
    cin>>letra;

    a=(int)toupper(letra);
    a=(int)tolower(letra);
    if (a>=65 && a<=90 || a>=97 && a<=122) 
    {
        result="Existe la palabara";
    }
    else
    {
        result="No existe la palabra";
    }
    
    cout<<"\n";
    cout<<result<<endl;
    
    return 0;



}