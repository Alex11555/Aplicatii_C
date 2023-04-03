#include <iostream>

using namespace std;

class Fractie{
    private:
        int numarator, numitor;
        void simplifica(){
            int a = numarator, b = numitor , r;
            while(b)
                r = a % b, a = b, b = r;
            numarator /= a, numitor /= a;
        }
    public:
        void afiseaza(){
            cout << numarator << "/" << numitor << endl;
        }
        void seteaza(int a , int b){
            numarator = a , numitor = b;
        }

        Fractie(int a){
            numarator = a, numitor = 1;
        }
        Fractie(int a , int b){
            if(b == 0)
                b = 1;
            numarator = a, numitor = b;
            simplifica();
        }
};

int main(){

    Fractie z(6 , 2);
    z.afiseaza();
    return 0;
}
