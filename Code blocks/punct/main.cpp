#include <iostream>

using namespace std;

struct PUNCT
{
    float x;
    float y;
}A,P[100];
int n;
void citire()
{int i;
cout<<"Coordonatele punctului A:"<<endl;
cout<<"x=";cin>>A.x;
cout<<"y=";cin>>A.y;

for(i=1;i<=n;i++)
{
    cout<<"Punctul "<<i<<endl;
    cout<<"x=";cin>>P[i].x;
    cout<<"y=";cin>>P[i].y;
}

}
void SOL()
{
    int nrp=0;
    for(int i=1;i<=n;i++)
    {
        if(A.y==P[i].y)
            {nrp++;
        cout<<P[i].x<<" "<<P[i].y<<endl;}
    }
    cout<<"Numarul de puncte: "<<nrp;
}

int main()
{
    cout<<"Numarul de puncte citite:";cin>>n;
    citire();
    cout<<endl;
    SOL();
    return 0;
}
