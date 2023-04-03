#include <iostream>

using namespace std;

int V[15][15],n,prim=1,ultim=1,Vf,Viz[15],C[15];

void citire()
{int i,j;
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {cout<<"V["<<i<<"]["<<j<<"]=";
    cin>>V[i][j];
    }
}
void ParcBF()
{
    int i;
    while(prim<=ultim)
    {
        Vf=C[prim];
        for(i=1;i<=n;i++)
            if(V[Vf][i]==1&&Viz[i]==0)
        {
            ultim++;
            C[ultim]=i;
            Viz[i]=1;
        }
        prim++;
}
}
int main()
{ int i,nod;

    cout<<"nr ";
    cin>>n;
    cout<<"nod ";cin>>nod;
    C[prim]=nod;
    Viz[nod]=1;
    citire();
    ParcBF();
    for(i=1;i<=ultim;i++)
        cout<<C[i]<<" ";
    return 0;


}




