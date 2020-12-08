// Dada una fecha determine cuántos días faltan para que acabe el año.

#include<iostream>
using namespace std;
int main(){
    int dia, mes, anio, fal, n=0, d=0;
    string result;
    
    cout<<"Ingrese el dia: ";
    cin>>dia;
    cout<<"Ingrese el mes: ";
    cin>>mes;
    cout<<"Ingrese el año: ";
    cin>>anio;

    if ((anio%4==0) &&! (anio%100==0 && anio%100!=0))
    {
        n=29;
    }
    else
    {
        n=28;
    }

    switch (mes)
    {
    case 1:
        d=0;
        break;
    
    case 2:
        d=31;
        break;
    
    case 3:
        d=31+n;
        break;
    
    case 4:
        d=31+n+31;
        break;

    case 5:
        d=31+n+31+30;;
        break;

    case 6:
        d=31+n+31+30+31;
        break;
    
    case 7:
        d=31+n+31+30+31+30;;
        break;
    
    case 8:
        d=31+n+31+30+31+30+31;;
        break;
    
    case 9:
        d=31+n+31+30+31+30+31+31;;
        break;
    
    case 10:
        d=31+n+31+30+31+30+31+31+30;;
        break;
    
    case 11:
        d=31+n+31+30+31+30+31+31+30+31;;
        break;
    
    case 12:
        d=31+n+31+30+31+30+31+31+30+31+30;;
        break;
    
    default:
        break;
    }

    fal=((337+n)-(dia+d));


    cout<<"\nLa fecha actual es: "<<+dia+mes+anio<<" y falta "<<+fal<<" dias para finalizar el año";

    return 0;

}