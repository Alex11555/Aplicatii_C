#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

int main()
{
    int V[50],n,i,aux,OK;
    f>>n;
    for(i=1;i<=n;i++)
        f>>V[i];
    do
    {
        OK=1;
        for(i=1;i<n;i++)
            if(V[i]>V[i+1])
        {
            aux=V[i];
            V[i]=V[i+1];
            V[i+1]=aux;
            OK=0;
        }
    }while(!OK);

    for(i=1;i<=n;i++)
        cout<<V[i]<<" ";

        return 0;



}
