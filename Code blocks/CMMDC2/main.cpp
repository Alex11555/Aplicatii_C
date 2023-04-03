#include <iostream>

using namespace std;
int CMMDC(int x,int y)
{
    while(x!=y)
        if(x>y)
        x=x-y;
    else
        y=y-x;
    return x;//return y;
}
int main()
{
int x,y;
cin>>x>>y;
cout<<CMMDC(x,y);

return 0;
}
