#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int a=1,b=4,c=-12;
int delta;
delta=pow(b,2)-4*a*c;
float x1,x2;
x1=(-b+sqrt(delta))/2*a;
x2=(-b-sqrt(delta))/2*a;

cout<<"Solutiile ec. de gradul 2 sunt x1= "<<x1<<" si x2= "<<x2;

return 0;
}
