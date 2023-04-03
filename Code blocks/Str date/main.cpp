#include <iostream>
#include <cstring>
using namespace std;

struct elev
{
    char N[10];
    char P[10];
    float M;
}E[30];
int n;
void CITIRE()
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<"Elevul: "<<i<<endl;
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
        cout<<E[i].N<<" "<<E[i].P<<" "<<E[i].M<<endl;
}
void MEDIE()
{
    int i;
    for(i=1;i<=n;i++)
        if(E[i].M<7)
        cout<<E[i].N<<" "<<E[i].P<<" "<<E[i].M<<endl;
}
void AF_I()
{
    int i;
    for(i=1;i<=n;i++)
        if(strcmp(E[i].N,"Ionescu")==0)
        cout<<E[i].N<<" "<<E[i].P<<" "<<E[i].M<<endl;
}
void NumeB()
{
    int i;
    for(i=1;i<=n;i++)
        if(E[i].N[0]=='B' && E[i].M>=5)
        cout<<E[i].N<<" "<<E[i].P<<" "<<E[i].M<<endl;

}

int main()
{
    cout<<"n= ";cin>>n;

    CITIRE();
    cout<<"Elevii introdusi:"<<endl;
    AFISARE();
    cout<<endl;
    cout<<"Elevii cu media mai mica decat 7:"<<endl;
    MEDIE();
    cout<<endl;
    cout<<"Elevii cu nume 'Ionescu':"<<endl;
    AF_I();
    cout<<endl;
    cout<<"Elevii a caror nume incepe cu litera B si au media mai mare decat 5:"<<endl;
    NumeB();
    return 0;

}
