/* Según la siguiente tabla, obtener la ciudad que visitará, despues de ingresar su sexo y el puntaje 
obtenido en el examen */

#include<iostream>
#include<string>
using namespace std;
int main(){
    int p;
    string result;
    char sexo;
    

    cout<<"Ea masculino o femenino? (M/F): ";
    cin>>sexo;
    cout<<"Ingrese el numero: ";
    cin>>p;

    switch (sexo)
    {
    case 'M':
        if (p>=18 && p<=35)
        {
            result="AREQUIPA";
        }
        else if (p>=36 && p<=75)
        {
            result="CUSCO";
        }
        else if (p>=76 )
        {
            result="IQUITOS";
        }
        break;
    
    case 'F':
        if (p>=18 && p<=35)
        {
            result="AREQUIPA";
        }
        else if (p>=36 && p<=75)
        {
            result="CUSCO";
        }
        else if (p>=76 )
        {
            result="IQUITOS";
        }
        break;
        
    default:
        break;
    }   

    cout<<"\n";
    cout<<"Es: "<<result<<"\n";

    return 0;
}