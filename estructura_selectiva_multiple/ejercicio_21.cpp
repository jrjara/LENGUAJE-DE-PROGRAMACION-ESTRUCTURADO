// Dado el número de un mes, devolver el mes en letras.

#include<iostream>
using namespace std;
int main(){
    int mes=0;
    string result;

    cout<<"Ingrese el numero de un mes: ";
    cin>>mes;

    switch (mes)
    {
    case 1:
        result="Enero";
        break;
    
    case 2:
        result="Febrero";
        break;

    case 3:
        result="Marzo";
        break;

    case 4:
        result="Abril";
        break;

    case 5:
        result="Mayo";
        break;

    case 6:
        result="Junio";
        break;

    case 7:
        result="Julio";
        break;

    case 8:
        result="Agosto";
        break;

    case 9:
        result="Setiembre";
        break;

    case 10:
        result="Octubre";
        break;

    case 11:
        result="Noviembre";
        break;

    case 12:
        result="Diciembre";
        break;
    
    default:
        break;
    }

    cout<<"\n";
    cout<<"El mes es: "<<result<<"\n";

    return 0;
}