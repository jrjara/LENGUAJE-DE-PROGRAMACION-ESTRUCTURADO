/* Dado el nombre de una persona obtenga el mensaje "Bienvenido: Sr(a) Gustavo, a su tienda
de preferencia" */

#include<iostream>
#include<string>

using namespace std;

int main(){
    string nom, nom2;

    cout<<"Hola: ingrese su nombre por favor: ";
    cin>>nom;

    nom2 = "Bienvenido: Sr(a) " + nom + " a su tienda de preferencia";

    cout<<"\n";
    cout<<nom2<<"\n";
    
    return 0;

}