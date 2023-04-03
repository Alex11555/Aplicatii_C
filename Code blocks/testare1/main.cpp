#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{

int Vf[1000]={0},x,maxi=0,nr=0,i,aux;
while(f>>x)
    {Vf[x]++;
    if(maxi<x)
        maxi=x;
    }

    for(i=1;i<=maxi;i++)
    {
        if(Vf[i]!=0 && i%2==1)
        {
            aux=Vf[i];
            while(aux)
            {cout<<i<<" ";
            aux--;
        }

    }
    }
    for(i=1;i<=maxi;i++)
    {
        if(Vf[i]!=0 && i%2==0)
        {
            aux=Vf[i];
            while(aux)
            {cout<<i<<" ";
            aux--;
        }

    }

}
return 0;
}


