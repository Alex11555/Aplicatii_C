#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream f("citire.txt");
ofstream g("iesire.txt");
int main()
{
    int n,V[50],i,aux,OK;
    f>>n;
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
        for(i=1;i<=n;i++)
            g<<V[i]<<" ";
            return 0;


}
