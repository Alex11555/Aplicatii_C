#include <iostream>
#include <fstream>
using namespace std;

ifstream f("fisier.in");

int main()
{
    int V[50],x,i,OK,aux,n,p=1,u,m,OK1=0;
    f>>n;
    cin>>x;
    u=n;
    for(i=1;i<=n;i++)
        f>>V[i];

        do
        {
            OK=1;
            for(i=1;i<=n;i++)
                if(V[i]>V[i+1])
            {
                aux=V[i];
                V[i]=V[i+1];
                V[i+1]=aux;
                OK=0;
            }
        }
        while(!OK);
        while(p<u)
        {
            m=(p+u)/2;

        if(V[m]==x)
            {cout<<"gasit pe pozitia: "<<m;
            OK1=1;
            break;}
        else
            if(V[m]<x)
                p=m+1;
            else
                u=m-1;
        }
        if(!OK1)
        cout<<"Nu exista";
        return 0;
}
