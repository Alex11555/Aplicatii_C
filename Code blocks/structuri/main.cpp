#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("fisier.in");
ofstream fout("fisier.out");
struct elev
{char N[20];
float M;

}E[20];
int main()
{
    int i,n;
    fin>>n;
    for(i=1;i<=n;i++)
    fin>>E[i].N>>E[i].M;



}
