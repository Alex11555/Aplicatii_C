#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.in");

int main()
{int x,S=0,Vf[11]={0},i;

while(f>>x)
    Vf[x]++;

    for(i=1;i<=10;i++)
        if(Vf[i])
    {
        S=S+10+i*i*Vf[i];
    }
    cout<<S;
    return 0;
}
