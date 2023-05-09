#include <iostream>
using namespace std;
int main()
{
	int V[] = { 25, 1,44,56,100,9,2 }, OK, i, j;
	do
	{
		OK = 1;
		for(i=0;i<(sizeof(V)/4)-1;i++)
			for(j=i+1;j<sizeof(V)/4;j++)
				if (V[i] > V[j])
				{
					int aux;
					aux = V[i];
					V[i] = V[j];
					V[j] = aux;
					OK = 0;
				}
	} while (!OK);
	for (i = 0; i < sizeof(V) / 4; i++)
		cout << V[i] << " ";
	return 0;

}
