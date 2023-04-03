#include <iostream>
#include <cstring>

using namespace std;

int main()
{
char S[100],CUV[50][15],VOC[]="AEIOUaeiou";
cin.get(S,99);
char *p;
int nr=0,nrv,i,j;
char SEP[]=". ;:!?,";
p=strtok(S,SEP);
while(p)
{
    nr++;
    strcpy(CUV[nr],p);
    p=strtok(NULL,SEP);
}
for(i=1;i<=nr;i++)
{nrv=0;
    for(j=0;j<strlen(CUV[i]);j++)
    if(strchr(VOC,CUV[i][j]))
       nrv++;

cout<<"Cuvant: "<<CUV[i]<<endl;
cout<<"Nr. vocale: "<<nrv<<endl;
cout<<endl;
}
return 0;
}



