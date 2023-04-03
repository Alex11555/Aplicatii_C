#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int x,d,p;
    cin>>x;
    d=2;
    while(x>1)
        {p=0;
        while(x%d==0)
           {x=x/d;
               p++;
           }
           if(p)
            cout<<d<<"^"<<p<<endl;
            d++;
        if(x>1&&d*d<x)
            d=x;}
        return 0;

}
