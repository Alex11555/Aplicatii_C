#include <iostream>
#include <iomanip>
using namespace std;

void citire(int x[]){
	int c=0;
	for (int i=1;i<=10;i++){
		cin>>x[i];
		if (x[i]==0)c++;
	}
	cout<<"Elementul 0 apare de: "<<c<<". \n";
}

void functie(int x[],int a,int b){
	int ma=0,k=0;
	for (int i=1;i<=12;i++){
		if (x[i]>=a && x[i]<=b){
			ma+=x[i];
			k++;
		}
	}
	ma/=k;
	cout<<"Media aritmetica este: "<<ma<<".";
}

main(){
	int v[12],m,n;
	cin>>m>>n;
	citire(v);
	functie(v,m,n);
	return 0;
}
