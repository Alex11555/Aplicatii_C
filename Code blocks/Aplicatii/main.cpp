#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char S[100],CUV[50][15];
    char T[15];
    cin.get(S,99);
    char VOC[]="AEIOUaeiou";
    char SEP[]=" .,:;'!-";
    char *p;
    int nrv,nr=0,maxim=0;
    p=strtok(S,SEP);
    while(p)
    {nr++;
    strcpy(CUV[nr],p);
    p=strtok(NULL,SEP);
    }
    int i,j;
    for(i=1;i<=nr;i++)
    {nrv=0;
        for(j=0;j<strlen(CUV[i]);j++)
        if(strchr(VOC,CUV[i][j]))
            nrv++;
    if(nrv<=3)
        cout<<CUV[i]<<endl;
    }
    maxim=strlen(CUV[1]);
    strcpy(T,CUV[i]);
    for(i=2;i<=nr;i++)
    {
        if(strlen(CUV[i])>maxim)
           {maxim=strlen(CUV[i]);
           strcpy(T,CUV[i]);}
    }
    cout<<T<<endl;
    cout<<maxim;


    return 0;
}
