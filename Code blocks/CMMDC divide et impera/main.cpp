#include <iostream>

int V[100],m;

int CMMDC(int x,int y)
{
    int r=x%y;
    while(r)
    {
        x=y;
        y=r;
        r=x%y;
    }
    return y;
}

int CM_DEI(int p,int u)
{
    int a,b;
     if(p==u)
    return V[p];
    else
    {
        m=(p+u)/2;
        a=CM_DEI(p,m);
        b=CM_DEI(m+1,u);
        return CMMDC(a,b);
    }

}
int main()
{
    int n;
cin>>n;

    int i;
    for(i=1;i<=n;i++)
        cin>>V[i];

    CITIRE(V,n);
    cout<<CM_DEI(1,n);
    return 0;
}
