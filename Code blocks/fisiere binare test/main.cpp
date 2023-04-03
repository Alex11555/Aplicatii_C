#include <iostream>
#include <fstream>
using namespace std;
void bintodec(int number)
{
    // If the number is greater than 1, then divide the number by two and call bintodec again.
	if(number > 1)
		bintodec(number / 2);

    // Print the least significant bit of the number in this call.
    cout << number % 2;
}
int main()
{
    fstream f("mesaj5.dat",ios::binary|ios::in|ios::out);
    int i;
    char c;
    for(i=1;i<=15;i++)
    {
        f.get(c);
        c=c-2;
        f<<c;
    }
    int x;
    cin>>x;
    bintodec(x);

    return 0;
}
