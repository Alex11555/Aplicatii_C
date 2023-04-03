#include <iostream>

using namespace std;

int main()
{
    int x,d=2,p;
    cin>>x;
    while(x>1)
    {p=0;
        while(x%d==0)
        {
            p++;
            x=x/d;
        }
        if(p)
            cout<<d<<"^"<<p<<" ";
        d++;
    }
    return 0;
}
