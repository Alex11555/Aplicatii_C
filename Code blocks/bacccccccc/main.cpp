#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");

int main()
{
    int x,a,b,sol1=0,sol2=0;
    f>>x>>a;
    while(f>>b)
    {
        if(a%1000==x && b%1000==x)
        {
            sol1=a;
            sol2=b;
        }
        a=b;
    }
    if(!sol1 && !sol2)
        cout<<"Nu exista";
    else
        cout<<sol1<<" "<<sol2;
    return 0;



}
