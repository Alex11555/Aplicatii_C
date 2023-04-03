#include    <iostream>
#include    <fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
    unsigned int nr;
    unsigned int nrAnterior = 0;
    unsigned int varfLocal = 0, pozitieVarfLocal = 0;
    unsigned int pozitie = 1;
    while(fin >> nr)
    {
        if(nr > varfLocal)
        {
            varfLocal = nr;
            pozitieVarfLocal = pozitie;
            cout << nr << " ";
        }
        else if(nr == nrAnterior && varfLocal == nr && pozitieVarfLocal == pozitie - 1)
        {
            varfLocal = nr;
            pozitieVarfLocal = pozitie;
            cout << nr << " ";
        }
        pozitie = pozitie + 1;
        nrAnterior = nr;
    }
    return 0;
}
