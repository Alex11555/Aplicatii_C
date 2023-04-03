#include <iostream>
#include <fstream>
using namespace std;

ifstream f("student.dat",ios::binary|ios::in);
ofstream g("date.out",ios::binary|ios::out);
int main()
{
    char a;
    int i;
    for(i=1;i<=15;i++)
    {
        f.get(a);
        a=a-2;
        g<<a<<" ";

    }
    return 0;

}
