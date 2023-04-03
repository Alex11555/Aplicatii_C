#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");

int main()
{
    int n,V[20][20],k;
    f>>n;
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        f>>V[i][j];
    for(i=1;i<=n;i++)
            {for(j=1;j<=n;j++)
            if(i+j<n+1)
            cout<<V[i][j]<<" ";
            cout<<endl;
            }
    return 0;
}

