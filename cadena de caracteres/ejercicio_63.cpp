/* Dado un frase devuelva la frase con asteriscos en lugar de espacios en blancos */
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string frase, frase2="", c;
    int i;

    cout<<"Introduce una frase: "; getline (cin, frase);

    for ( i = 0; i < frase.length(); i++)
    {
        c=frase.substr(i, 1);
        if (c==" ")
        {
            c="*";
        }
        frase2+=c;
    }

    cout<<"\n";
    cout<<"Resultado: "<<frase2<<"\n";
}