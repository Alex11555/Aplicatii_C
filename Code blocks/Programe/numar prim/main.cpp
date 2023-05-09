#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int d,OK=1;
    if(x<2)
        OK=0;
    else
        for(d=2;d<=x/2;d++)
        if(x%d==0)
        OK=0;
    if(OK)
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}
