#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in");

int divide(int V[],int st,int dr)
{
    int s1,s2,m;
    if(st==dr)
        return V[st];
    else
    {
        m=(st+dr)/2;
        s1=divide(V,st,m);
        s2=divide(V,m+1,dr);
        return s1+s2;
    }
}

int main()
{
    int V[50],n;
    f>>n;
    int i;
    for(i=1;i<=n;i++)
        f>>V[i];
    cout<<divide(V,1,n);


    return 0;
}
