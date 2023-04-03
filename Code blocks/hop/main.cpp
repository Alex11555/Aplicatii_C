#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int V[15][15];
    int i,j,n;
    cin>>n;

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        cin>>V[i][j];
    cout<<&V[3];
}


