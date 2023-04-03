#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");

int main()
{
    int x,OK,maxi=0;
    while(f>>x)
    {
        if(x>maxi)
        {maxi=x;
        OK=1;}
        if(x!=maxi)
        OK=0;
        if(OK)
            cout<<x<<" ";
    }
    return 0;
}


