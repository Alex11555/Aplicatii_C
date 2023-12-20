#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char S[251],*p,x[20];
    cin.get(S,250);
    cin>>x;
    p=strtok(S," ");
    while(p)
    { if(!strcmp(p,x))
    p=strtok(NULL,";");
    cout<<p<<" ";
    p=strtok(NULL,"; ");
    }
    return 0;
}

