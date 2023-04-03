#include <iostream>

using namespace std;

int ROTUND(int x)
{
    if(x%2!=0)
        return 0;
    int r1,r2;
    r1=x%2;
    x=x/2;
    while(x)
    {
        r2=x%2;
        if(r1==r2)
            return 0;
        else
        {
            x=x/2;
            r1=r2;
        }
    }
    return 1;
}

int main()
{
    int x;
    cin>>x;
    if(ROTUND(x))
        cout<<"Da";
    else
        cout<<"Nu";
    return 0;
}
