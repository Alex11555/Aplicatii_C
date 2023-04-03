#include <iostream>
#include <fstream>


using namespace std;
int V[15][15],n,Vf,prim=1,ultim=1,Viz[15],C[15];
ifstream f("date.in");
void citire()
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>V[i][j];
}
void afis()
{
    int i,j;
    for(i=1;i<=n;i++)
        {for(j=1;j<=n;j++)
            cout<<V[i][j]<<" ";
            cout<<endl;
}}

void ParcBF()
{
    int i;
    while(prim<=ultim)
    {Vf=C[prim];
    for(i=1;i<=n;i++)
        if(V[Vf][i]==1 && Viz[i]==0)
    {ultim++;
    C[ultim]=i;
    Viz[i]=1;
    }
    prim++;
}
}

int main()
{
    int i,nod;
    f>>n;
    cout<<"Nodul de plecare: ";
    cin>>nod;
    C[prim]=nod;
    Viz[nod]=1;
    citire();
    afis();
    cout<<endl;

    ParcBF();
    for(i=1;i<=ultim;i++)
        cout<<C[i]<<" ";
    return 0;
}
