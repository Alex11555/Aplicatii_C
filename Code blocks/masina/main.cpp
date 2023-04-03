#include <iostream>
#include <cstring>
using namespace std;
int n;
struct MASINA
{
    char M[15];
    char MO[15];
    int AN;
    char CAT[15];
    float P;
}MA[1000];
MASINA aux;
void citire()
{
    for(int i=1;i<=n;i++)
    {
        cout<<"Marca: "; cin>>MA[i].M;cout<<endl;
        cout<<"Model: "; cin>>MA[i].MO;cout<<endl;
        cout<<"An: "; cin>>MA[i].AN;cout<<endl;
        cout<<"Categorie: "; cin>>MA[i].CAT;cout<<endl;
        cout<<"Pret: "; cin>>MA[i].P;cout<<endl;
}
}

void CER1()
{
    int i;
    for(i=1;i<=n;i++)
        if(stricmp(MA[i].CAT,"autoturism")==0 && stricmp(MA[i].MO,"A6")==0 && MA[i].P>8000 && (MA[i].AN>=2012 && MA[i].AN<=2020))
            cout<<MA[i].M<<" "<<MA[i].MO<<" "<<MA[i].AN<<" "<<MA[i].CAT<<" "<<MA[i].P;

}
void CER2()
{
    int i;
    for(i=1;i<=n;i++)
        if(stricmp(MA[i].M,"AUDI")==0 && stricmp(MA[i].CAT,"SUV")==0 && stricmp(MA[i].MO,"Q7")==0 && MA[i].P<20000)
        cout<<MA[i].M<<" "<<MA[i].MO<<" "<<MA[i].AN<<" "<<MA[i].CAT<<" "<<MA[i].P;
}
void CER3()
{
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        if(MA[i].P<MA[j].P)
    {
        aux=MA[i];
        MA[i]=MA[j];
        MA[j]=aux;
    }

}
void afisare()
{
    int i;
    for(i=1;i<=n;i++)
        cout<<MA[i].M<<" "<<MA[i].MO<<" "<<MA[i].AN<<" "<<MA[i].CAT<<" "<<MA[i].P<<endl;
}

int main()
{
    cout<<"Numarul de vehicule: ";
    cin>>n;
    citire();

    cout<<endl;
        cout<<"Masini modelul A6: "<<endl;
    CER1();
    cout<<endl;
    cout<<"Masini modelul Q7: "<<endl;
    CER2();
    cout<<endl;
    cout<<"Masinile din parcul auto ordonate descrescator dupa pret: "<<endl;
    CER3();
    afisare();


    return 0;
}
