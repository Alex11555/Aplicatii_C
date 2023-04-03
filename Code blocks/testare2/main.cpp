#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
    int x,maxi=0,nr=0,OK;
    while(f>>x)
    {
        if(x>maxi)
        {
            maxi=x;
            OK=1;
        }
        if(x!=maxi)
            OK=0;
        if(OK)
            cout<<maxi<<" ";
    }
    f.close();
    return 0;
}
