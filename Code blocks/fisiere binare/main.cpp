#include<iostream>
#include<fstream>
using namespace std;
struct Student {
    int cod;
string nume;
};
int main() {
ofstream wf("student.dat", ios::out | ios::binary);
if(!wf) {
cout << "Nu se deschide!" << endl;
return 1;
}
Student wstu[3];
wstu[0].cod = 1;
wstu[0].nume = "ION";
wstu[1].cod = 2;
wstu[1].nume = "DORU";
wstu[2].cod = 3;
wstu[2].nume = "MIHAI";
for(int i = 0; i < 3; i++)
wf.write((char *) &wstu[i], sizeof(Student));
wf.close();
if(!wf.good()) {
cout << "Eroare de scriere!" << endl;
return 1;
}
ifstream rf("student.dat", ios::out | ios::binary);
if(!rf) {
cout << "Nu se deschide fisierul!" << endl;
return 1;
}
Student rstu[3];
for(int i = 0; i < 3; i++)
rf.read((char *) &rstu[i], sizeof(Student));
rf.close();
if(!rf.good()) {
cout << "Eroare citire!" << endl;
return 1;
}
cout<<"Detalii Student"<<endl;
for(int i=0; i < 3; i++) {
cout << "cod: " << rstu[i].cod << endl;
cout << "Nume: " << rstu[i].nume << endl;
cout << endl;
}
return 0;
}
