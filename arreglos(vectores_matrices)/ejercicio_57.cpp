// lngrese 6 números en una matriz de 3X2 y obtenga el promedio aritmético.

#include<iostream>
 
using namespace std;

int main(){
	//variables
	int n[3][2], s=0, i, j;
	float promed;

    cout<<"\n elemntos del array:\n";

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin>>n[i][j];
        }   
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            s+=n[i][j];
        } 
    }
    
    promed = s/6;

    cout<<"\n El promedio aritmetico es: "<<promed<<endl;

    return 0; 
}