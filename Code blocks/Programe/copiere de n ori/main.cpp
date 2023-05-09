#include <iostream>
#include <fstream>
using namespace std;

int main() {
  for (int i = 0; i <2; i++) {
    ifstream sursa("main.cpp");
    ofstream destinatie("copie." + to_string(i) + ".cpp");
    destinatie << sursa.rdbuf();
  }
  return 0;
 }
