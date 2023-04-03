#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream f("numere.txt");

int main()
{int x,Vf[9]={0},V[50],i=1,nr=0,p=1;
while(f>>x)
    {V[i]=x;
    i++;
    nr++;
    }
    for(i=1;i<=nr;i++)
    {
        x=V[i];
        while(x)
    {Vf[x%10]++;
    x=x/10;
    }
    }

    cout<<Vf[9];
    return 0;
}




