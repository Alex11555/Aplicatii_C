#include <iostream>

using namespace std;

int V[100],n;

int citire(int V[],int m)
{
    int i;
    for(i=1;i<=m;i++)
        cin>>V[i];
}

int div(int p,int u)
{
    int a,b,m,i;
    if(p==u)
        return V[p];
    else
    {
        m=(p+u)/2;
        a=div(p,m);
        b=div(m+1,u);
        if(a>b)
            return b;
        else
            return a;
}
}

int main()
{
    cin>>n;
    citire(V,n);
    cout<<div(1,n);
}
