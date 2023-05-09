#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    float V[50];
    int i,n;
    cin>>n;
    int p,f,lmax=0;
    for(i=1;i<=n;i++)
        cin>>V[i];
    int l=1;
    int i1,i2,fmax,pmax;
    for(i=1;i<n;i++)
    {
        l=1;
        p=1;
        while(V[i]<V[i+1] && i<n)
        {
            l++;
            i++;
        }
        f=i;
        if(l>lmax)
            {lmax=l;
            fmax=f;
            pmax=p;
            }
    }
     for(i=pmax; i<=fmax; i++)
                cout<<V[i]<<" ";

     return 0;
    }

