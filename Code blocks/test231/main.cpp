#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

ifstream f("citire.in");
int main()
{
    int V[50],i,k,n;
    f>>n;
    cin>>k;

    for(i=1;i<=n;i++)
        f>>V[i];
    for(i=n;i>=k;i--)
    V[i+1]=V[i];
    cin>>V[k];
    n++;
    for(i=1;i<=n;i++)
        cout<<V[i]<<" ";
    return 0;
}
