//Obtenga el nombre del estado civil según la siguiente tabla

/*
    |--------|--------------|
    |Codigo  | Estado Civil |    
    |--------|--------------|
    | 0      |  Soltero     |       
    | 1      |  Casado      | 
    | 2      |  Divorciado  |
    | 3      |  Viudo       |   
    */

#include<iostream>
#include<string>
using namespace std;
int main(){
    string result= "";
    int num;

    cout<<"Ingrese un mumero del 0 a 3: ";
    cin>>num;

    switch (num)
    {
    case 0:
        result="SOLTERO";
        break;
    
    case 1:
        result="CASADO";
        break;
    
    case 2:
        result="DIVORCIADO";
        break;

    case 3:
        result="VIUDO";
        break;

    default:
        result="Numero no especificado dentro del rango";
        break;
    }


    cout<<"\n";
    cout<<"Es: "<<result<<"\n";
    

    return 0;
}