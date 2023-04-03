#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.in");

int main()
{
    int Vf[1000]={0},i,mini=1000,maxi=0,nr=0,x;
    while(f>>x)
        {Vf[x]++;
        if(x>maxi)
            maxi=x;
        if(x<mini)
            mini=x;
        }
        for(i=mini;i<=maxi;i++)
            if(Vf[i]%2!=0)
            nr++;
        if(nr>1)
            cout<<"NU";
        else
            cout<<"DA";
        return 0;
}
