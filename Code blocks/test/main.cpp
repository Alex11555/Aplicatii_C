#include <iostream>

using namespace std;
int V[100],n,x;

int citire(int V[],int n)
{
    int i;
    for(i=1;i<=n;i++)
        cin>>V[i];
}

void BS()
{
    int OK=1;
    int i;
    for(i=1;i<n;i++)
        if(V[i]>V[i+1])
    {
        swap(V[i],V[i+1]);
        OK=0;
    }
    if(!OK)
        BS();
}

int det(int p,int u)
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
            if(V[m]>x)
            det(p,m-1);
        else
            det(m+1,u);
    }

}
int VAS(int x, int n)
{
 if (n<=2) return 2;
     else return 2*x + VAS(x-1,n-1);
}


int main()
{
    cin>>n;
    cin>>x;
    cout<<VAS(n,x);
    return 0;


}
