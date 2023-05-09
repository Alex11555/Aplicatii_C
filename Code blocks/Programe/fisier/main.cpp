#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.bin", ios::binary); // open the binary file
    char first_byte;
    file.read(&first_byte, 1); // read the first byte
    for (int i = 7; i >= 0; i--) {
        cout << ((first_byte >> i) & 1);
    }
    cout << endl;
    cout<<((first_byte >> 7) & 1)<<endl;
    cout<<((first_byte >> 0) &1);
    file.close(); // close the file


    return 0;
}
