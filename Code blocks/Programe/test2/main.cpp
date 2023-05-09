#include <iostream>
#include <fstream>
using namespace std;
ifstream f("mesaj9.dat",ios::binary|ios::in);
ofstream g("date.dat",ios::binary|ios::out);
int main()
{
    int i,j=1;
    char c;
    for(i=1;i<=16;i++)
    {
        f.get(c);
        c=~c;
        c=c-j;
        j++;
        cout<<c;
        g<<c;
    }
    return 0;
}
