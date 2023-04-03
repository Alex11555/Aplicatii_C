#include <iostream>

using namespace std;

int main()
{
    int x,c,cx,nr=0,i,j,A[50][50];
    cin>>x;
    cx=x;
    while(cx)
    {
        nr++;
        cx=cx/10;
    }
    for(j=nr;j>=1;j--)
        {for(i=1;i<=nr;i++)
        A[i][j]=x%10;
        x=x/10;
        }

        for(i=1;i<=nr;i++)
            {for(j=1;j<=nr;j++)
        cout<<A[i][j]<<" ";
    cout<<endl;
            }
            return 0;

}
