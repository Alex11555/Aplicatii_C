#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream f("mesaj6.dat",ios::binary|ios::in);
    ofstream g("date.out",ios::binary|ios::out);
    char x;
    int i;
    for(i=1;i<=15;i++)
    {
        f.get(x);
        x=x-1;
        g<<x;
    }
}

