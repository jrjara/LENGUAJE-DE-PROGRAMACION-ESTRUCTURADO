//En una empresa se ha determinado la siguiente política de descuento:

/*
    |---------------|-----------|-------------------
    |Tarjeta \ Sexo | Hombres   | Mujeres   
    |---------------|-----------|-------------------
    | Obrero        |  15%      | 10%       
    | Empleado      |  20%      | 15%
    |               |           |
    */

#include<iostream>
#include<string>
using namespace std;
int main(){
    const float DES_H=0.15F;
    const float DES_M=0.25F;
    const float DES_H2=0.10F;
    const float DES_M2=0.15F;

    float mdes, m, tp;
    char tc, tarj;
    string r;

    

    cout<<"Ingrese el monto total: ";
    cin>>mdes;
    cout<<"Ea masculino o femenino? (M/F): ";
    cin>>tc;
    cout<<"Ingrese la tarjeta si es Obrero o Empleado (O/E): ";
    cin>>tarj;

    switch (tc)
    {
    case 'M':
        if (tarj='O')
        {
            m=mdes*DES_H;
            tp=mdes - m;
            r="DESCUENTO 15%";

        }
        else
        {
            m=mdes*DES_H2;
            tp=mdes + m;
            r="DESCUENTO 10%";
        }
        break;
    
    case 'F':
        if (tarj='E')
        {
            m=mdes*DES_M;
            tp=mdes - m;
            r="DESCUENTO 10%";

        }
        else
        {
            m=mdes*DES_M2;
            tp=mdes + m;
            r="DESCUENTO 15%";
        }
        break;

    default:
        break;
    }   

    cout<<"\n";
    cout<<r<<"Es: "<<m<<"\n";
    cout<<"Total de descuento: "<<tp<<"\n";

    return 0;
}