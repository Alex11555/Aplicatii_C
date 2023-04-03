#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.out");

int main()
{
    char ch;
    while(f.get(ch))
        cout<<ch;


    return 0;
}
