#include <iostream>

using namespace std;
int V[30][30],n;
void citire(int V[][30],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        cout<<"V["<<i<<"]["<<j<<"] ";
        cin>>V[i][j];
    }
}

void grad()
{
    int S=0;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            S=S+V[i][j];
            cout<<"Rangul nodului "<<i<<": "<<S<<endl;
            S=0;
    }

}
int main()
{
    cout<<"Numarul de noduri: ";
    cin>>n;
    citire(V,n);
    grad();
    return 0;
}
