#include <iostream>
#include <fstream>
using namespace std;
ifstream f("fisier.in");
int main()
{
    int M[10][10];
    int i,j;
    for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
        f>>M[i][j];

        for(i=1;i<=3;i++)
        {
            for(j=1;j<=3;j++)
                cout<<M[i][j]<<" ";
            cout<<endl;
        }

    int det=0;
    det=M[1][1]*M[2][2]*M[3][3]+M[2][1]*M[3][2]*M[1][3]+M[3][1]*M[1][2]*M[2][3]-(M[3][1]*M[2][2]*M[1][3]+M[1][1]*M[3][2]*M[2][3]+M[2][1]*M[1][2]*M[3][3]);

    cout<<det;

    return 0;

}

