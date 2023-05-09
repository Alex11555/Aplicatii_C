#include <iostream>

using namespace std;

int main()
{
const int DIM=100;
int S[DIM],vf;
vf=0;
int data=10,data1=99;
int V[10]={11,12,13,14,15,16,17,18,19,20};
int i;
for(i=0;i<7;i++)
S[vf++]=V[i];

   cout<<S[vf-1]<<endl;

if(vf>DIM)
    return NULL;
    else
{vf=vf+1;
S[vf]=data1;
}
cout<<S[vf]<<endl;
//sus adaug un element, in partea de jos voi  sterge

if(vf==0)
    return NULL;
    else
    {
        data=S[vf];
        vf=vf-1;
        return data;
    }


}

