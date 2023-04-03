#include <iostream>

using namespace std;

const int MAX=1000;
int V[100],VF[MAX]={0},k=0,n;

int main()
{
    cin>>n;
    int i,x;
    for(i=1;i<=n;i++)
    {cin>>V[i];
    VF[V[i]]++;
    }
    for(x=1;x<=MAX;x++)
        while(VF[x])
    {
        k++;
        V[k]=x;
        VF[x]--;
    }
    for(x=1;x<=k;x++)
    cout<<V[x]<<" ";
    return 0;
}
