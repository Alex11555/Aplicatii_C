#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char S[251],*p,x[25],CUV[155][155],aux[50];
    int OK=0,nr=1,i;
    cin.get(S,250);
    cin>>x;
    p=strtok(S,";");
    while(p)
    {
        strcpy(CUV[nr],p);
        nr++;

        p=strtok(NULL,";");
    }
    for(i=1;i<=nr;i++)
    {
        strcpy(aux,CUV[i]);
        p=strtok(aux," ");
        if(strcmp(p,x)==0)
        {
            OK=1;
            p=strtok(NULL,";");
            cout<<p<<" ";
        }
    }
    if(!OK)
        cout<<"NU";
    return 0;

}
