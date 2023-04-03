#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char S[101],*p,V[50][50],L;
    int nr=0,i;
    cin.get(S,100);
    p=strtok(S," ");
    while(p)
    {nr++;
        strcpy(V[nr],p);
        p=strtok(NULL," ");


    }
    for(i=1;i<=nr;i++)
        if(strlen(V[i])>=3)
    {L=V[i][0];
    cout<<V[i]+1<<L<<" ";
    }
    else
        cout<<V[i]<<" ";

    return 0;
}
