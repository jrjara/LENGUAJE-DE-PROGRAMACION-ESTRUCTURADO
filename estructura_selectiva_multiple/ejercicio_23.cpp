//Dado los siguientes operadores aritméticos +, -, * y /, devuelva el nombre del operador. 

#include<iostream>
#include<string>
using namespace std;
int main(){
    char operador;
    string result="";

    cout<<"Ingrese el operador sea: +, -, *, o /:\n";
    cin>>operador;

    if (operador == '+')
    {
        result="SUMA";
    }
   else if (operador== '-')
   {
       result="RESTA";
   }
   else if (operador== '*')
   {
       result="MULTIPLICACION";
   }
   else if (operador== '/')
   {
       result="DIVISION";
   }
   
    cout<<"\n";
    cout<<"El resultado es: "<<result<<"\n";
    

    return 0;
}