//Lea un número del 1 al 7 y devuelva el día de la semana, considere que 1 es Domingo

#include<iostream>
using namespace std;
int main(){
    int dia=0;
    string result;

    cout<<"Ingrese el numero del dia de la semana: ";
    cin>>dia;

    switch (dia)
    {
    case 1:
        result="Domingo";
        break;
    
    case 2:
        result="Lunes";
        break;

    case 3:
        result="Martes";
        break;

    case 4:
        result="Miercoles";
        break;

    case 5:
        result="Jueves";
        break;

    case 6:
        result="Viernes";
        break;

    case 7:
        result="Sabado";
        break;
    
    default:
        break;
    }

    cout<<"\n";
    cout<<"El dia de la semana es: "<<result<<"\n";

    return 0;
}