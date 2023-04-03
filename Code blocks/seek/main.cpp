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
    fstream f("fisier_binar",ios::binary|ios::out|ios::in);
    int x;
    while(f>>x)
    {
        x=x-2;
        f<<x;
    }


}
