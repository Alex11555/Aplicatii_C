#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream f("date.in");

int main()
{
    int Vf[1000]={0},OK=1,maxi=0,mini=1000,x,nr=0;

    while(f>>x)
    {
        Vf[x]++;
        if(maxi<x)
            maxi=x;
        if(mini>x)
            mini=x;
    }
    int i;
    for(i=mini;i<=maxi;i++)
    {
        if(Vf[i]%2!=0)
            nr++;
    }
    if(nr>1)
        cout<<"NU";
    else
        cout<<"DA";
    return 0;

}
