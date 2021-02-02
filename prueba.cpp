/* Dado un frase devuelva la frase con asteriscos en lugar de espacios en blancos */
#include<iostream>
using namespace std;
int main() {
	//VARIABLES
int i,j;
int x[2][2]; int y[2][2]; int z[2][2];
//ENTRADA
cout<<"X: \n";
	cout<<"Numero (0,0) :"; cin>>x[0][0];
	cout<<"Numero (0,1) :"; cin>>x[0][1];
	cout<<"Numero (1,0) :"; cin>>x[1][0];
	cout<<"Numero (1,1) :"; cin>>x[1][1];
	cout<<" \n";
    cout<<"Y: \n";
	cout<<"Numero (0,0) :"; cin>>y[0][0];
	cout<<"Numero (0,1) :"; cin>>y[0][1];
	cout<<"Numero (1,0) :"; cin>>y[1][0];
	cout<<"Numero (1,1) :"; cin>>y[1][1];
    for(i=0; i<=1;i++){
 	for(j=0;j<=1;j++)
 	z[i][j]=x[i][j]*y[i][j];
 }
 //SALIDA
    cout<<"Z: \n";
	cout<<"Numero (0,0) :"<<z[0][0];
	cout<<"Numero (0,1) :"<<z[0][1];
	cout<<"Numero (1,0) :"<<z[1][0];
	cout<<"Numero (1,1) :"<<z[1][1];
	return 0;
 }

