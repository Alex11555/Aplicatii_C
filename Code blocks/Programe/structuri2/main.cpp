#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream f("date.in");
struct
{
    char nume[30];
    char prenume[30];
    int varsta;
    char grupa[10];
}V[50];
void afisare(int n)
{
    int i;
    for(i=1;i<=n;i++)
        cout<<V[i].nume<<" "<<V[i].prenume<<" "<<V[i].varsta<<" "<<V[i].grupa<<endl;
}
void cauta(char x)
{
    int i,OK=0;
    for(i=1;i<=5;i++)
        if(strchr(strlwr(V[i].nume),x)||strchr(strlwr(V[i].prenume),x))
        {cout<<"Structura numarul "<<i<<" contine caracterul introdus "<<x<<endl;
        OK=1;
        }
  if(!OK)
            cout<<"Nu exista structuri care sa contina caracterul introdus "<<x;
}
int main()
{
    int i,n;
    f>>n;
    for(i=1;i<=n;i++)
        f>>V[i].nume>>V[i].prenume>>V[i].varsta>>V[i].grupa;

afisare(n);
cout<<endl;
char x;
cout<<"Introduceti caracterul pe care doriti sa il cautati in structura: ";cin>>x;
cout<<endl;
cauta(x);
cout<<endl;



    return 0;
}


