#include <iostream>
#include <fstream>
using namespace std;
ifstream f("fisier.in");
int main()
{
    int V[4][4];
    int i,j;
    for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
            f>>V[i][j];

        i=1;
        while(i<=3)
        {   j=1;
            V[i][j]=V[i][j+1]+V[i][j+2];
        i++;

        }
      for(i=1;i<=3;i++)
      {
          for(j=1;j<=3;j++)
            cout<<V[i][j]<<" ";
          cout<<endl;
      }

      return 0;
}

