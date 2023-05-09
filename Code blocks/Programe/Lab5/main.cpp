#include <iostream>

using namespace std;
int main()
{
	double V[10];
	double S = 0;
	int i;
	for (i = 1; i <= 10; i++)
		cin >> V[i];
	for (i = 1; i <= 10; i++)
		S = S + V[i];
	double Ma;
	Ma = S / 10;
	printf("%.3lf", Ma);


return 0;
}
