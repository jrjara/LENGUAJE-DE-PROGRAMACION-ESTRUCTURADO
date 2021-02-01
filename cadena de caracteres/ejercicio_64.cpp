// Dado una letra determine si esta en minúscula o mayúscula.

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
    if (a>=65 && a<=90)
    {
        result="La letra es mayuscula";
    }
    else if (a>=97 && a<=122)
    {
        result="La letra es minuscula";
    }
    else
    {
        result="No es minuscula ni mayuscula";
    }
    
    cout<<"\n";
    cout<<result<<endl;
    
    return 0;

}