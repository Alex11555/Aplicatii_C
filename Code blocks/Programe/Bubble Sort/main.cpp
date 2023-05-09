#include <iostream>

using namespace std;

int main()
{
    int M[50];
    int i,n,aux,OK,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>M[i];
    do
    { OK=1;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        if(M[i]>M[j])
    {
        OK=0;
        aux=M[i];
        M[i]=M[j];
        M[j]=aux;
    }
    }while(!OK);

    for(i=1;i<=n;i++)
        cout<<M[i]<<" ";


    return 0;
}
