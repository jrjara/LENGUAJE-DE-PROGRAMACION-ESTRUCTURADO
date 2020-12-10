#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int i, x,y,elv=1;
	
	cout<<"Ingrese el valor de x: ";cin>>x;
	cout<<"Ingrese el valor de y: ";cin>>y;
	
    i=1;
    while (i<=y)
    {
        elv=elv*x;
    }
    

	cout<<"\nEl resultado de la elevacion es: "<<elv;
	
	getch();
	return 0;
}
