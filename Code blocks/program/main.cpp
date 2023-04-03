#include <iostream>
#include <fstream>
using namespace std;

ifstream source("program.cpp");

int main()
{
    string linie,program;
    while(getline(source,linie))
        program=program+linie+'\n';
   ofstream copy1("copy1.cpp");
   copy1<<program;
   ofstream copy2("copy2.cpp");
   copy2<<program;

   return 0;

}

