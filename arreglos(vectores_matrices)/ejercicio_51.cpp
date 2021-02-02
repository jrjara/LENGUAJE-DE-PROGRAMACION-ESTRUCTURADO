/* Dado 4 números y almacénelo en un vector, luego obtenga la suma y el promedio de los
valores almacenados. */

#include <iostream>

using namespace std;

int main (void){
	int S=0, i;
	int Promedio;

	int n[4];   // Arreglo
	
	cout<<"Ingrese primer numero: "; cin>>n[0];
	cout<<"Ingrese segundo numero: "; cin>>n[1];
	cout<<"Ingrese tercer numero: "; cin>>n[2];
	cout<<"Ingrese cuarto numero: "; cin>>n[3];
	
    for (i = 0; i <= 3; i++)
    {
        S+=n[i];
        Promedio=(S/4);
    }

    cout<<"La suma es: "<<S;
    cout<<"\n";
    cout<<"El promedio es: "<<Promedio;

    return 0;
}