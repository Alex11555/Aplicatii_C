#include <iostream>
#include <conio.h>
using namespace std;
main()
{
system("cls");
int n=123;
cout.width(5);
cout.setf(ios::right,ios::adjustfield);
cout.fill('0');
cout<<n;
cout<<"\nActionati pentru a continua.\n";
getchar();
}
