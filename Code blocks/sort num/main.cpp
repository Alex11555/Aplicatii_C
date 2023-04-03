#include <iostream>

using namespace std;

int V[100],n;

int main()
{
    cin>>n;
    int i,j,aux;
    for(i=1;i<=n;i++)
        cin>>V[i];
    for(i=2;i<=n;i++)
        for(j=i;j>1&&V[j]<V[j-1];j--)
    {
        aux=V[j];
        V[j]=V[j-1];
        V[j-1]=aux;
    }
    for(i=1;i<=n;i++)
        cout<<V[i]<<" ";
    return 0;
}
