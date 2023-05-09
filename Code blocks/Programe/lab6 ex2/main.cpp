#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char S[50],X[50],C[20]="xyz";
    cin.get(S,49);
    strcpy(X,S);
    cout<<strcmp(S,X)<<endl;
    strcat(X,C);
    cout<<"Lungimea primului sir este: "<<strlen(S)<<endl;
    cout<<"Lungimea celui de al doilea sir este: "<<strlen(X)<<endl;
strupr(S);
strlwr(X);
cout<<S<<endl;
cout<<X;

    return 0;

}

