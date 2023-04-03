#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ofstream f("bac.txt");

int n_termen(int n,int x,int y,int z)
{
    if(n > 3)
        return n_termen(n-1,x,y,z) + n_termen(n-2,x,y,z)-
               n_termen(n-3,x,y,z);
    if(n == 3) return z;
    if(n == 2) return y;
    if(n == 1) return x;
    if(n == 0) return 0;
}
int main()
{
    unsigned int n, x, y, z;
    cin >> n >> x >> y >> z;
    for(int i = n; i > 3; i--)
        cout << n_termen(i,x,y,z) << " ";
    cout << z << " " << y << " " << x;
    return 0;
}
