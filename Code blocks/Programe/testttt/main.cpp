#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

ifstream f("date.in");

int main()
{
char hobby[20][20]={"Baschet","Volei","DJ","Programare"};
cout<<hobby[3]<<endl;
int n,i;
f>>n;
for(i=0;i<n;i++)
    f>>hobby[i];
cout<<hobby[3];
    //for(i=0;i<n;i++)
        //cout<<hobby[i]<<" ";
        //char hobby[20][20]={"Baschet","Volei","DJ","Programare"};


return 0;
}
