#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream f("date.in");

void citire(double a[],double b[]){
	for (int i=1;i<=10;i++)f>>a[i];
	for (int i=1;i<=10;i++)f>>b[i];
}

void distanta(double a[],double b[]){
	double distmax=0,distmin=1000,dist;
	int i,j;
	for (i=1;i<=10;i++)
		for (j=i+1;j<=10;j++){
			double m=(a[j]-a[i])*(a[j]-a[i]);
			double n=(b[j]-b[i])*(b[j]-b[i]);
			dist=sqrt(m+n);
			if (dist>distmax)distmax=dist;
			if (dist<distmin)distmin=dist;
		}
	cout<<distmax<<endl<<distmin;
}

int main(){
	double x[11],y[11];
	citire(x,y);
	distanta(x,y);
	return 0;
}
