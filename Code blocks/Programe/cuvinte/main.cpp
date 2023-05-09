#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char S[100];
    cin.get(S,99);
    char *p;
    int nr=0;
    p=strtok(S," ,!?'.");
    while(p)
    {
        nr++;
        p=strtok(NULL," ,!?'.");
    }

    cout<<nr;

    return 0;
}


