#include <iostream>
using namespace std;

 struct Nod
{
    int numar;      //Memorarea efectiva a numarului
    Nod* urmator;   //Memorarea legaturii catre urmatorul nod
};

Nod* cap = NULL;    //Declararea listei vida
void afisareLista(Nod* cap)
{
    while (cap != NULL)
    {
        cout << cap->numar << "\n"; // Afisam numarul stocat
        cap = cap->urmator;         // Mutam elementul curent la urmatorul element din lista
    }
}
void inserareInceput(Nod* &cap, int valoare)
{
    //Creeam noul nod si ii atribuim valoarea din paramentru
    Nod *elem = new Nod;
    elem->numar = valoare;

    elem->urmator = cap; //Mutam sageata catre primul element din lista

    cap = elem; //Inlocuim primul element din lista
}

int main()
{
inserareInceput(cap,5);
inserareInceput(cap,6);
afisareLista(cap);

    return 0;
}
