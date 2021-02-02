// Cree una matriz de A de 2X2 y otra B de 2X2 y obtenga una matriz C = A * B

#include<iostream>

using namespace std;

int main() {
    int i,j;
    int a[2][2]; int b[2][2]; int c[2][2];
    
    cout<<"Matriz A: "<<endl;
    cout<<"Ingrese numero correspondiente (0,0): "; cin>>a[0][0];
    cout<<"Ingrese numero correspondiente (0,1): "; cin>>a[0][1];
    cout<<"Ingrese numero correspondiente (1,0): "; cin>>a[1][0];
    cout<<"Ingrese numero correspondiente (1,1): "; cin>>a[1][1];
    cout<<" \n";

    cout<<"Matriz B: \n";
    cout<<"Ingrese numero correspondiente (0,0): "; cin>>b[0][0];
    cout<<"Ingrese numero correspondiente (0,1): "; cin>>b[0][1];
    cout<<"Ingrese numero correspondiente (1,0): "; cin>>b[1][0];
    cout<<"Ingrese numero correspondiente (1,1): "; cin>>b[1][1];

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; i < 1; i++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    
    cout<<"Matriz C: \n";
    cout<<"La multiplicacion de (0,0) es: "<<c[0][0]<<endl;
    cout<<"La multiplicacion de (0,1) es: "<<c[0][1]<<endl;
    cout<<"La multiplicacion de (1,0) es: "<<c[1][0]<<endl;
    cout<<"La multiplicacion de (1,1) es: "<<c[1][1]<<endl;

    return 0;
 }