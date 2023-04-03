#include <iostream>
#include <stdlib.h>

using namespace std;

class Fractie {
private:
    int numarator, numitor; // proprietăți
    void Simplifica();      // metodă privată
public:
    Fractie(int _numarator = 0, int _numitor = 1); // constructor
    Fractie(const Fractie&);   // constructor de copiere
    Fractie& Citeste();    //  metodă publică
    Fractie& Scrie();      // metodă publică
    // metode GET
    int Numarator();
    int Numitor();
    // metode SET
    Fractie& Numarator(int);
    Fractie& Numitor(int);
};

Fractie::Fractie(const Fractie& F)
{   // constructor de copiere
    numarator = F.numarator;
    numitor = F.numitor;
    Simplifica();
}

Fractie::Fractie(int _numarator /* = 0 */, int _numitor /* = 1 */)
{   // constructor
    numitor = _numitor, numarator = _numarator;
    Simplifica();
}

int Fractie::Numarator()
{
    //metoda GET
    return numarator;
}

int Fractie::Numitor()
{
    //metoda GET
    return numitor;
}

Fractie& Fractie::Numarator(int x)
{
    numarator = x;
    Simplifica();
    return *this;
}

Fractie& Fractie::Numitor(int x)
{
    // validam valoarea lui x
    if (x == 0)
    {
        cerr << "Numitor nul" << endl;
        return *this;
    }
    numitor = x;
    if (x < 0)
        numarator *= -1, numitor *= -1;
    Simplifica();
    return *this;
}

Fractie& Fractie::Citeste()
{
    // citeste numaratorul si numitorul obiectului curent
    // returnează obiectul curent
    int a, b;
    cin >> a >> b;
    // validam valorile citite
    if (b == 0)
    {
        cerr << "Numitor nul" << endl;
        return *this;
    }
    if (b < 0)
        a = -a, b = -b;
    numarator = a, numitor = b;
    Simplifica();
    return *this;
}

Fractie& Fractie::Scrie()
{
    // afisează numaratorul si numitorul obiectului curent
    // returnează obiectul curent
    cout << numarator << "/" << numitor << endl;
    return *this;
}

void Fractie::Simplifica()
{   //metoda privata; realizeaza simplificarea fractiei merorate în obiectul curent
    int a = abs(numarator), b = abs(numitor);
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    numarator /= a;
    numitor /= a;
}

Fractie Suma(Fractie F, Fractie G)
{
    // funcție oarecare. Accesam datele private ale obiectelor prin metodele GET si SET
    int x = F.Numarator() * G.Numitor() + F.Numitor() * G.Numarator(),
        y = F.Numitor() * G.Numitor();
    Fractie R;
    R.Numarator(x).Numitor(y); // apelam metodele SET
    return R; // s-a apelat costructorul de copiere
}

int main()
{
    Fractie a, b;
    a.Citeste(), b.Citeste();
    Suma(a, b).Scrie();
    return 0;
}
