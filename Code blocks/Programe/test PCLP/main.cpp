#include <iostream>
#include <fstream>
using namespace std;
ifstream f("mesaj9.dat",ios::binary|ios::in);
fstream g("date.dat",ios::binary|ios::in|ios::out);
int main()
{
    int i;
    char c;
    int j=1;
    for(i=1;i<=16;i++)
    {
        f.get(c);
        c=~c;
        c=c-i;
        j++;
        cout<<c;
    }
       for(i=1;i<=15;i++)
    {
        g.get(c);
        c=c-1;
        cout<<c;
    }


    return 0;


}
