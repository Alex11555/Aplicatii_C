#include <iostream>

using namespace std;

int V[100],n;
void citire(int V[],int n)
{
    int i;
    for(i=1;i<=n;i++)
        cin>>V[i];

}

void inter(int A[],int p,int u,int m)
{
    int i=p;
    int j=m+1;
    int k=0;
    int C[100];

    while(i<=m&&j<=u)
        if(V[i]<V[j])
    {
        k++;
        C[k]=V[i];
        i++;

    }
    else
    {
        k++;
        C[k]=V[j];
        j++;
    }
    if(i<=m)
        while(i<=m)
       {
           k++;
        C[k]=V[i];
        i++;
    }
    if(j<=u)
        while(j<=u)
    {
        k++;
        C[k]=V[j];
        j++;
    }
    k=0;
    for(i=p;i<=u;i++)
    {
        k++;
        A[i]=C[k];
    }
}

void MSORT(int V[],int p,int u)
{
    int m;
    if(p<u)
    {
        m=(p+u)/2;
        MSORT(V,p,m);
        MSORT(V,m+1,u);
        inter(V,p,u,m);
    }}

    int main()
    {//merge sort
        cin>>n;
        citire(V,n);
        MSORT(V,1,n);
        for(int i=1;i<=n;i++)
            cout<<V[i]<<" ";

    return 0;
    }
