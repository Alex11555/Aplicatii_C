#include <iostream>
using namespace std;

class Fractie{
    private:
        int numarator, numitor;
    public:
        void afiseaza(){
            cout << numarator << "/" << numitor << endl;
        }
        void seteaza(int a , int b){
            numarator = a , numitor = b;
        }
        Fractie(){
            numarator = 0, numitor = 1;
        }
        Fractie(int a){
            numarator = a, numitor = 1;
        }
        Fractie(int a , int b){
            if(b == 0)
                b = 1;
            numarator = a, numitor = b;
        }
        Fractie & creste(int n)
        {
         this->numarator += n * this->numitor;
        }
};


int main()
{
    Fractie F(1,4);
    F.creste(2).creste(3);
    F.afiseaza();




    return 0;

}
