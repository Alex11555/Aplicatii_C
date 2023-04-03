#include <iostream>
#include <fstream>

using namespace std;
ifstream f("fin.txt");
int main()
{
    int V[50][50],i,j,n,k,aux;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>V[i][j];
            cin>>k;

aux=V[k][k-1];
for(i=k-1;i>=2;i--)
    V[k][i]=V[k][i-1];
V[k][1]=aux;


            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                    cout<<V[i][j]<<" ";
                cout<<endl;
            }
            return 0;
}
