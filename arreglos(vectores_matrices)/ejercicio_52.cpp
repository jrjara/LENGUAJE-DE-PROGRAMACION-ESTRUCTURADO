// Dado 4 números y almacénelo en un vector, el números mayor y menor.

#include <iostream>

using namespace std;

int main (){
	int Mayor=0, Menor=0, i;

	int n[4];   // Arreglo

	cout<<"Ingrese primer numero: "; cin>>n[0];
	cout<<"Ingrese segundo numero: "; cin>>n[1];
	cout<<"Ingrese tercer numero: "; cin>>n[2];
	cout<<"Ingrese cuarto numero: "; cin>>n[3];
	
  for (i = 0; i <= 3; i++)
  {
    if (i==0)
    {
      Mayor=n[i];
	    Menor=n[i];
    }else if (n[i]>Mayor)
    {
      Mayor=n[i];
    }
    if (n[i]<Menor)
    {
      Menor=n[i];
    }
  }
  
  cout<<"\n";
  cout<<"El Mayor es: "<<Mayor<<endl;
  cout<<"El Menor es: "<<Menor;

  return 0;
}