#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
struct
{int x;
char c;
}V[5];

void cauta(char x)
{
    int i,OK=0;
    for(i=1;i<=5;i++)
        if(V[i].c==x)
        {cout<<"Structura numarul "<<i<<" contine caracterul introdus "<<x<<endl;
        OK=1;
        }
  if(!OK)
            cout<<"Nu exista structuri care sa contina caracterul introdus "<<x;
}
int main()
{
int i;
for(i=1;i<=5;i++)
    f>>V[i].x>>V[i].c;
char x;
cin>>x;
cauta(x);

return 0;
}
