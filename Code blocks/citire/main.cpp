#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream f("fisier.in");

    int x;
    f>>x;
    cout<<x;
}
