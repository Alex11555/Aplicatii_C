#include <iostream>

using namespace std;
int V[50],x,n,i;

int citire(int v[],int n)
{
    for(i=1;i<=n;i++)
        cin>>V[i];
}

void bsort()
{
    int OK=1;
    for(i=1;i<n;i++)
        if(V[i]>V[i+1])
    {
        swap(V[i],V[i+1]);
        OK=0;
    }
    if(!OK)
        bsort();
}

int div(int p,int u)
{
    int m;
    if(p>u)
        return 0;
        else
    {
        m=(p+u)/2;
        if(V[m]==x)
        return m;
        else
            if(x<V[m])
            return div(p,m-1);
            else
                if(x>V[m])
                return div(m+1,u);
    }

    }

int main()
{
    cin>>n;
    cin>>x;
    citire(V,n);
    bsort();
    if(!div(1,n))
        cout<<"Nu se afla";
    else
        cout<<"Se afla";
    return 0;
}
