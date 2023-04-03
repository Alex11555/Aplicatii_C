#include <iostream>

using namespace std;
int V[30][30],n;
void citire(int V[][30],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        cout<<"V["<<i<<"]["<<j<<"] ";
        cin>>V[i][j];
    }
}

int nrm()
{
    int S=0,m,i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        S=S+V[i][j];
   m=S/2;
   return m;
}

int gc()
{
    int m;
    m=n*(n-1)/2;
    return m;

}

int main()
{
    cin>>n;
    citire(V,n);
    cout<<gc()-nrm();
    return 0;
}
