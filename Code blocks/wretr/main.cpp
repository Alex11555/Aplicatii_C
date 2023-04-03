#include <iostream>

using namespace std;

ifstream f("fisier.in");
ofstream g("fisier.out");

int prim(int x)
{int d;
if(x<2)
    return 0;
else
    for(d=2;d<=x/2;d++)
    if(x%d==0)
    return 0;
return 1;

}

int main()
{
    int x;
    fin>>x;
    if(prim(x))
       fout<<"Da";
    else
        fout<<"Nu";
    return 0;
}
