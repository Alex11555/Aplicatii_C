#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream fin("fisier.in");
ofstream fout("fisier.out");
int n,k,i;
int main()
{
    fin>>n;
    fin>>k;
    char VOC[]="AEIOUaeiou";
    char S[100];

    for(i=1;i<=n;i++)
    {
        fin>>S;
        if(strchr(VOC,S[strlen(S)-1]))
            if(k>0)
        {
            fout<<S<<endl;
            k--;
        }
    }
    return 0;
}
