#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char S[101]="",*p,aux;
    cin.get(S,100);
    p=strtok(S," ");
    while(p)
    {if(strlen(p)>=3)
    {
        aux=p[0];
        strcpy(p,p+1);
        p[strlen(p)]=aux;
    }
    cout<<p<<" ";
    p=strtok(NULL," ");
    }

    return 0;
}
