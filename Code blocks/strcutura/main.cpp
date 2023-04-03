#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    struct Carte
    { char titlu[20];
    char autor[10][50];
    int nrExemplare;
    }c;
    int n,i;
    cin>>n;
    cin>>c.titlu;
    for(i=0;i<n;i++)
        cin>>c.autor[i];
    cout<<c.autor[0];
    return 0;
}

