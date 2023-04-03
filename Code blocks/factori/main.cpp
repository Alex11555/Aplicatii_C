#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int x,nr=0,OK=0;
    while(f>>x)
    {
        if(x>=0)
            OK=1;
        if(OK)
            nr++;

    }
    cout<<nr;


}
