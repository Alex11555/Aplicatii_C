#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int lmax,ok=1;
char s[16] = {};
char ch;

void bucla (char s[16],int &lmax,int a)
{
    if (strlen(s) > lmax)
        lmax=strlen(s);
    cout << s << ' ' << a << '\n';
    strcpy(s,""); // Resetez string-ul
}

void citire (char ch)
{
    int a=0; // contor pentru numarul de a-uri
    for (int i=0;i<15;i++)
    {
        cin.get(ch);
        if (ch == '\n' && i == 0)
            {
            ok=0;break;
            }
        if (ch == 'a')
            a++;
        if (ch != '\n' && ch != ' ') // Daca am caracterul diferit de spatiu si enter il salvez in s
            {
            s[i] = ch;
            }
        else
            {
            s[i] = '\0'; // Pun \0 la string, ca l-am construit manual, litera cu litera
            break;
            }
    }
    if (ok)
        bucla(s,lmax,a);
}

int main()
{
    while (ok)
        citire (ch);
    cout<<endl;
    cout<<lmax;
    return 0;
}
