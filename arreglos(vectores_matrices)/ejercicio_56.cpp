// lngrese 6 números en una matriz de 3X2 y obtenga la suma de cada fila.

#include<iostream>

using namespace std;

int main(){
    int fila1=0, fila2=0, fila3=0, i, j;	
    int n[3][2];
        
    cout<<"Ingrese numero (0,0): "; cin>>n[0][0];
    cout<<"Ingrese numero (0,1): "; cin>>n[0][1];
    cout<<"Ingrese numero (1,0): "; cin>>n[1][0];
    cout<<"Ingrese numero (1,1): "; cin>>n[1][1];
    cout<<"Ingrese numero (2,0): "; cin>>n[2][0];
    cout<<"Ingrese numero (2,1): "; cin>>n[2][1];

    for (j = 0; j <= 1; j++)
    {
        fila1 += n[0][j]; 
        fila2 += n[1][j]; 
        fila3 += n[2][j];
    }
    
    cout<<"\n";
    cout<<"La suma de la fila 1 es: "<<fila1<<endl;
    cout<<"La suma de la fila 2 es: "<<fila2<<endl;
    cout<<"La suma de la fila 3 es: "<<fila3<<endl;
        
    return 0;
}