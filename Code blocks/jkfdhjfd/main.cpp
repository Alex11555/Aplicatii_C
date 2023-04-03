#include <iostream>
#include <fstream>
using namespace std;
ifstream f("citire.m");

int main()
{
    char V[10][20];
    int i,n,j,OK=0;

    for(i=0;i<=2;i++)
        for(j=0;j<=14;j++)
            f>>V[i][j];

        for(j=1;j<=13;j++)
        {i=1;
        if(V[i][j-1]==V[i][j+1]&&V[i+1][j]==V[i-1][j]&&V[i-1][j]==V[i][j-1])
            OK=1;
        }
        if(OK)
            cout<<"Da";
            else
            cout<<"nu";

    return 0;
}
