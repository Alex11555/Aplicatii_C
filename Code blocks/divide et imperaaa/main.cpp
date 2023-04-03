#include <iostream>
using namespace std;

int V[100],n;

void citire(int V[],int n)
{
    int i;
    for(i=1;i<=n;i++)
        cin>>V[i];
}

int max(int p,int u)
{
    int a,b,m;
    if(p==u)
        return V[p];
    else
    {
        m=(p+u)/2;
        a=max(p,m);
        b=max(m+1,u);
        if(a>b)
            return a;
        else
            return b;
    }

}

int main()
{
    cin>>n;
    citire(V,n);
    cout<<max(1,n);
    return 0;
}
