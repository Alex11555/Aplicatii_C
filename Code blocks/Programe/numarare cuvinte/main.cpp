#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("Cuvinte.txt");

int main()
{
    int n;
    char S[100],*p,SEP[]=" .?!,";
    f.get(S,99);
    p=strtok(S,SEP);
    while(p)
    {
        n++;
        p=strtok(NULL,SEP);
    }
    cout<<n;
    return 0;


}
