//Dado el número de un canal de televisión, determine cual es el nombre del canal

#include<iostream>
using namespace std;
int main(){
    int num=0;
    string result;

    cout<<"Ingrese un numero sea: 2, 4, 7 o 10:\n";
    cin>>num;

    switch (num)
    {
    case 2:
        result="Frecuencia Latina";
        break;
    
    case 4:
        result="America TV";
        break;

    case 7:
        result="TVPeru";
        break;

    case 10:
        result="RPP";
        break;
    
    default:
        break;
    }

    cout<<"\n";
    cout<<"El nombre del canal es: "<<result<<"\n";

    return 0;
}