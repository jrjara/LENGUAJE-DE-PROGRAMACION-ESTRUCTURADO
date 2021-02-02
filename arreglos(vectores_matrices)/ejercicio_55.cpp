// lngrese 6 números y determine cuantos números repetidos existen.

#include<iostream>

using namespace std;

int main(){
	int n[6], i=0;
	float repeat=0; 
	
	cout<<"Ingrese 6 numeros: ";

    for (i = 0; i < 6; i++)
    {
        cin>>n[i];
    }
    for (i = 0; i < 6; i++)
    {
        if (n[i] == n[i+1])
        {
            repeat++;
        }  
    }
    
    cout<<"\n Los numeros repetidos son:"<<repeat+1<<endl;

    return 0;
}