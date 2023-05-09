#include <iostream>
#include <fstream>
#include <cmath>

    using namespace std;

    const double pi = 3.14159265358979323846;

    int main() {
        double R;
        cin >> R;

        ofstream f("date.out");
        f<<"Punctele de pe cerc sunt:"<<endl<<endl;

        for (int i = 1; i <= 11; i++) {
            double unghi = 2 * pi * i / 11;
            double x = 2 + R * cos(unghi);
            double y = 2 + R * sin(unghi);
            f <<"x"<<i<<"="<< x << "     " <<"y"<<i<<"="<< y << endl;
        }
        return 0;
    }
