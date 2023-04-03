#include <iostream>

using namespace std;
int V[1000],k=0;
void cuburi(int n)
{
    int b,i,aux,j;
    for(b=1;b<=n;b++)
    {
        k++;
        V[k]=b*b*b;
    }
    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
        if(V[i]<V[j])
    {aux=V[i];
    V[i]=V[j];
    V[j]=aux;

    }
    for(i=1;i<=k;i++)
        cout<<V[i]<<" ";

}

int main()
{
    int n;
    cin>>n;
    cuburi(n);
    return 0;

}
