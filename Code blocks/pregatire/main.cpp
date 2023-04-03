#include <iostream>

using namespace std;

int V[50],n;

int CITIRE(int V[],int n)
{
    int i;
    for(i=1;i<=n;i++)
        cin>>V[i];
}

int suma(int p,int u)
{
    int a,b,m;
    if(p==u)
        return V[p];
    else
    {
        m=(p+u)/2;
        a=suma(p,m);
        b=suma(m+1,u);
        return a*b;
    }
}

int main()
{
    cin>>n;
    CITIRE(V,n);
    cout<<suma(1,n);

    return 0;
}
