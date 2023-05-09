#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("date.in");

void afisare(char x[], char y[],char z[],char w[]) {
	cout <<"Nume: "<<x<<endl;
	cout<<"Prenume: "<<y<<endl;
	cout<<"Orasul: "<<z<<endl;
	cout<<"Liceul: "<<w<<endl;
}

int main()
{
	char nume[20], prenume[20], orasul[20],liceul[50];
	char hobby[20][20];

	f.getline(nume, 19);
	f.getline(prenume, 19);
	f.getline(orasul, 19);
	f.getline(liceul, 49);

	afisare(nume, prenume, orasul, liceul);
	cout << endl;

	char V[20][20];
	int i, i1 = 0,n;
	f>>n;

	for(i=0;i<n;i++)
	{f>>hobby[i];
	strlwr(hobby[i]);
	}

	char z;
	for (z = 'a'; z <= 'z'; z++)
		for (i = 0; i <=n; i++)
			if (z == hobby[i][0])
			{
				strcpy_s(V[i1], hobby[i]);
				i1++;
			}
	cout<<"Lista hobby-uri ordonate dupa nume: ";
	for (i = 0; i <i1; i++)
		cout << V[i] << " ";


	return 0;
}




