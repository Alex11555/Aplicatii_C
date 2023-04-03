#include <iostream>

using namespace std;

int main()
{
    int x,r,nr=0,p=1;
    cin>>x;
    while(x)
    {
        r=x%2;
        nr=nr+p*r;
        p=p*10;
        x=x/2;

    }
    cout<<nr;
    return 0;
}
