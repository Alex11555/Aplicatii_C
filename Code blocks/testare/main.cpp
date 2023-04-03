#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream f("date.in");

int main()
{
    int Vaux1[50]={0},Vaux2[50]={0},i,x,V[50],nr1=0,nr2=0,aux,n;
    cin>>n;
    for(i=1;i<=n;i++)
    f>>V[i];
    for(i=1;i<=n;i++)
        if(V[i]%2==1)
    {nr1++;
        Vaux1[nr1]=V[i];
    }
    else
    {nr2++;
        Vaux2[nr2]=V[i];
    }
    for(i=1;i<nr1;i++)
        if(Vaux1[i]>Vaux1[i+1])
    {
        aux=Vaux1[i];
        Vaux1[i]=Vaux1[i+1];
        Vaux1[i+1]=aux;
    }
    for(i=1;i<nr2;i++)
        if(Vaux2[i]>Vaux2[i+1])
    {
        aux=Vaux2[i];
        Vaux2[i]=Vaux2[i+1];
        Vaux2[i+1]=aux;
    }
    for(i=1;i<=nr1;i++)
        cout<<Vaux1[i]<<" ";
    for(i=1;i<=nr2;i++)
        cout<<Vaux2[i]<<" ";
    return 0;


}

