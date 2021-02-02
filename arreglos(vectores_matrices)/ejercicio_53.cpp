/* Dado 6 números y almacénelo en un vector, luego obtenga cuantos números múlüplos de n
ha ingresado. */

#include <iostream>

using namespace std;

int main (){
	int div, cantidad=0, i;
	
	int n[6]; //Arreglos
	
	cout<<"Ingrese primer numero: "; cin>>n[0];
	cout<<"Ingrese segundo numero: "; cin>>n[1];
	cout<<"Ingrese tercer numero: "; cin>>n[2];
	cout<<"Ingrese cuarto numero: "; cin>>n[3];
	cout<<"Ingrese quinto numero: "; cin>>n[4];
	cout<<"Ingrese sexto numero: "; cin>>n[5];
	
	cout<<"Divisor: "; cin>>div;

  for (i = 0; i <= 5; i++)
  {
    if (n[i] % div==0)
    {
      cantidad+=1;
    }
    
  }
  
  cout<<"\n";
  cout<<"Los multiplos de numeros ingresados son: "<<cantidad;

  return 0;
}