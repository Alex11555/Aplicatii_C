#include <iostream>

using namespace std;

int main()
{
int x=1,y=1,z,n,i;
cin>>n;
cout<<x<<" "<<y<<" ";
for(i=1;i<=n;i++)
{
    z=x+y;
    cout<<z<<" ";
    x=y;
    y=z;
}
return 0;
}

