#include <iostream>

using namespace std;

void f(int &x)
{
x++;
}
int main()
{
int a = 5;
f(a);
cout<<a;
return 0;
}
