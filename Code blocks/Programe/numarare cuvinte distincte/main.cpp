#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("Cuvinte2.txt");

int main()
{
    int n;
    char S[100],*p,SEP[]=" .?!,";
    char CUV[50][50];
    f.get(S,99);
    int i;
    p=strtok(S,SEP);
    while(p)
    {
        n++;
        strcpy(CUV[n],p);
        p=strtok(NULL,SEP);
    }

char Vf[50][50];
int cuvdis=1;
char CUV2[50][50];
int j,OK=1;
for(i=1;i<=n;i++)
    strcpy(CUV2[i],CUV[i]);

for(i=2;i<=n;i++)
    {OK=1;
        for(j=i-1;j>=1;j--)
            if(strcmp(CUV2[j],CUV[i])==0)
                OK=0;
if(OK)
    cuvdis++;

}

    cout<<cuvdis;
    int NRA[50]={0};
    for(i=1;i<=n;i++)
    NRA[CUV[i]]++;



    return 0;
}



