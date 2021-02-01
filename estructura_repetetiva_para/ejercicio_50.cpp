#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main ()
{
    int n,m,num,a,b,Rf,R,P,e,c;

    cout<<"Ingrese el primer numero: ";cin>>n;
    cout<<"Ingrese el segundo numero: ";cin>>m;
    cout<<endl<<"LOS NUMEROS CAPICUAS SON LOS SIGUENTES: "<<endl<<endl;

    for(n=n+1;n<m;n++)
    {
        a=n;
        b=n;
        Rf=0;
        P=0;
        while (a>0)
        {
            num=a%10;
            a=a/10;
            P=P+1;
        }

        P=P-1;

        while (b>0)
        {
            c=b%10;
            b=b/10;
            e=pow(10,P);
            R=c*e;
            Rf=Rf+R;
            P=P-1;
        }

        if(Rf==n)
        {
        cout<<n<<endl;
        }
        cout<<endl;
    }
 return 0;
}