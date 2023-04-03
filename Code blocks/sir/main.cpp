#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream f("bac.txt");

int main()
{
    int x,y,l1=1,l2=0,lmax=0;
    f>>x;
    while(f>>y)
    {
        if(x==y)
            l1++;
        else
            {if(l1==x)
        {l2=l2+l1;
        if(l2>lmax)
        lmax=l2;
        }
        else
            l2=0;
        l1=1;
        x=y;
            }
    cout<<lmax;

    return 0;
}
}
