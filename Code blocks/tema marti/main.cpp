#include <iostream>
#include <cstring>

using namespace std;

struct ELEV
{
    char N[15];
    char P[15];
    float M;
    float MO;
    float T;
}E[30];
int n;
char l[1];
char nume[15];
char prenume[15];

void citire()
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<"Elevul "<<i<<endl;
        cout<<"Nume: ";cin>>E[i].N;
        cout<<"Prenume: ";cin>>E[i].P;
        cout<<"Media la oral: ";cin>>E[i].MO;
        cout<<"Nota in teza: ";cin>>E[i].T;
    }

}

void afisare()
{
    int i;
    for(i=1;i<=n;i++)
        cout<<E[i].N<<" "<<E[i].P<<" "<<E[i].M<<endl;
}

void cer1()
{
    int i;float M;
    for(i=1;i<=n;i++)
        E[i].M=(E[i].MO*3+E[i].T)/4;

}
void cer2()
{
    int i;float max=0;
    for(i=1;i<=n;i++)
    {
        if(strstr(E[i].N,l) && max<E[i].M)
        {strcpy(nume,E[i].N);
        strcpy(prenume,E[i].P);
    }
    }

}


void cer3()
{
    int i;
    for(i=1;i<=n;i++)
        if(E[i].M<5)
        cout<<E[i].N<<" "<<E[i].P<<endl;
}

void cer4()
{
    int i;
    for(i=1;i<=n;i++)
        if(E[i].T>7)
        cout<<E[i].N<<" "<<E[i].P<<endl;
}

float media()
{
    float me,m=0;

    int i,nr=0;
    for(i=1;i<=n;i++)
    {
        m=m+E[i].M;
        nr++;
    }
    me=float(m/nr);
    return me;
}

int main()
{
    cout<<"Numarul de elevi: ";
    cin>>n;
    cout<<"Litera citita de la tastatura: ";cin>>l;
    citire();
    cout<<endl;
    cer1();
    cout<<"Media elevilor la disciplina informatica:"<<endl;
    afisare();
    cout<<endl;
    cer2();
    cout<<"Numele elevului care incepe cu litera "<<l<<" si are cea mai mare medie:"<<endl;
    cout<<nume<<" "<<prenume<<endl;
    cout<<"Elevii care au media generala la informatica sub 5:"<<endl;
    cer3();
    cout<<endl;
    cout<<"Elevii care au obtinut in teza note peste 7:"<<endl;
    cer4();
    cout<<endl;
    cout<<"Media clasei la disciplina informatica:"<<endl;
    cout<<media();
    return 0;

}
