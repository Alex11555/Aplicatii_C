#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f("date.out",ios::binary);

    char x;
    cin>>x;
    f.write((char*)&x,sizeof(x));



    return 0;
}
