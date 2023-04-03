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
ELEV EL[30];

void CITIRE()
{int i;
    for(i=1;i<=n;i++)
    {
        cout<<"Elevul: "<<i<<endl;
        cout<<"Numar matricol: ";cin>>EL[i].nr_m;
        cout<<"Nume: ";cin>>EL[i].N;
        cout<<"Prenume: ";cin>>EL[i].P;
        cout<<"Media: ";cin>>EL[i].M;
        cout<<endl;
    }

}

void AFISARE()
{
    int i;
    for(i=1;i<=n;i++)
        cout<<EL[i].nr_m<<" "<<EL[i].N<<" "<<EL[i].P<<" "<<EL[i].M<<endl;
}
int main()
{
    cin>>n;
    CITIRE();
    AFISARE();
    return 0;

}
