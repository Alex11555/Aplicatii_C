#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
struct
{int x;
char c;

}V[6];
int main()
{
int i;
for(i=1;i<=5;i++)
    f>>V[i].x>>V[i].c;
for(i=1;i<=5;i++)
    cout<<V[i].x<<" "<<V[i].c<<endl;

    return 0;
}
