#include <iostream>

using namespace std;

int n;

struct ELEV
{
    int nr_m;
    char N[10];
    char P[15];
    float M;
}E[30];
ELEV aux;

void CITIRE()
{int i;
    for(i=1;i<=n;i++)
    {
        cout<<"Elevul: "<<i<<endl;
        cout<<"Numar matricol: ";cin>>E[i].nr_m;
        cout<<"Nume: ";cin>>E[i].N;
        cout<<"Prenume: ";cin>>E[i].P;
        cout<<"Media: ";cin>>E[i].M;
        cout<<endl;
    }

}

void AFISARE()
{
    int i;
    for(i=1;i<=n;i++)
        cout<<E[i].nr_m<<" "<<E[i].N<<" "<<E[i].P<<" "<<E[i].M<<endl;
}
void Ordine_DescM()
{int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        if(E[i].M<E[j].M)
    {
        aux=E[i];
        E[i]=E[j];
        E[j]=aux;
    }
}

int main()
{
    cin>>n;
    CITIRE();
    Ordine_DescM();
    AFISARE();
    return 0;

}
