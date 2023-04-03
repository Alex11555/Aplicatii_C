#include <iostream>

using namespace std;

void gama(int n)
{
    int i;
    if(n>=3)
    {
        for(i=3;i<=n;i++)
            cout<<n<<" ";
        gama(n-3);}}

        int main()
        {
            int n;
            cin>>n;
            gama(n);
            return 0;
        }
