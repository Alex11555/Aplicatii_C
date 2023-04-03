#include <iostream>

using namespace std;

void CITIRE(int V[][15],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>V[i][j];
}
void AFISARE(int V[][15],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
        cout<<V[i][j]<<" ";
        cout<<endl;
    }
}
int nr_div(int x)
{
    int d,nr=0;
    for(d=1;d<=x;d++)
        if(x%d==0)
        nr++;
    return nr;

}

int prim(int x)
{
    int d;
    if(x<2)
        return 0;
    else
        for(d=2;d<=x/2;d++)
        if(x%d==0)
        return 0;
   return 1;
}

int main()
{
    int n,V[15][15],i,j;
    cin>>n;
    CITIRE(V,n);
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {if(i<j && prim(V[i][j]))
    V[i][j]=0;
    if(i+j<n+1)
        V[i][j]=nr_div(V[i][j]);
    }

    AFISARE(V,n);

    return 0;



}
