#include <iostream>

using namespace std;
int V[30][30],n;

void citire(int V[][30],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        cout<<"V["<<i<<"]["<<j<<"]";
        cin>>V[i][j];
    }
}
void afisare(int V[][30],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
        cout<<V[i][j]<<" ";
        cout<<endl;

}
}

void gradex()
{
    int S=0,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            S=S+V[i][j];
            cout<<"Gradul exterior al nodului "<<i<<" este: "<<S<<endl;
            S=0;

    }
}
void gradin()
{
    int S=0,i,j;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
            S=S+V[i][j];
        cout<<"Gradul interior al nodului "<<i<<" este: "<<S<<endl;
        S=0;
    }
}

int main()
{
    cin>>n;
    citire(V,n);
    gradex();
    cout<<endl;
    gradin();
    return 0;


}
