#include <iostream>

using namespace std;

int main()
{
int x,y,cx,cy;
cin>>x>>y;
cx=x;
cy=y;
int r;
while(y)
{
    r=x%y;
    x=y;
    y=r;
}
cx=cx/x;
cy=cy/x;
cout<<"Fractia simplificata este: "<<cx<<"/"<<cy;


return 0;
}
