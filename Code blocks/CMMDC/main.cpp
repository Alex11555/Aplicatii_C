#include <iostream>
#include <fstream>

using namespace std;
ifstream f("date.in");

int CMMDC(int x,int y)
{
    while(x!=y)
        if(x>y)
        x=x-y;
    else
        y=y-x;
    return x;//return y;
}

int divide(int V[],int st,int dr)
{
    int m,s1,s2;
    if(st==dr)
        return V[st];
    else
    {
        int m=(st+dr)/2;
        s1=divide(V,st,m);
        s2=divide(V,m+1,dr);
        return CMMDC(s1,s2);
    }
}

int main()
{
    int V[10],n,i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>V[i];
    cout<<divide(V,1,n);

    return 0;

}
