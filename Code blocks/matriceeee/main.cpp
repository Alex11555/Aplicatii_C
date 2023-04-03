#include <iostream>

using namespace std;

int f(int x[], int i)
{
if (i==0) return x[i];
return x[i] + f(x, i-1);
}
int main()
{
int v[] = {1, 2, 3, 4, 5};
int a = f(v, 3);
cout<<a;
return 0;
}
