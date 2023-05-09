#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("Date.txt");

int main()
{

        struct produs
{
int cod_produs;
char denumire_produs[20];
char caracteristici[10];
} P[50];
int i;
int n;
cout<<"Produse introduse: ";cin>>n;
for(i=1;i<=n;i++)
    f>>P[i].cod_produs;

    cout<<P[1].cod_produs;

    return 0;
}
