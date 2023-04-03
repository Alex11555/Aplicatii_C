#include <iostream>

using namespace std;

int main()
{ int n,i;
cin>>n;

    struct
    {char V[20];
    float n;

    }A[50];

    for(i=1;i<=n;i++)
    {
        cout<<"Elevul: "<<i<<endl;
        cout<<"Numele: ";cin>>A[i].V;
        cout<<"Media: ";cin>>A[i].n;
    }
    for(i=1;i<=n;i++)
        cout<<A[i].V<<" "<<A[i].n<<endl;

    return 0;
}
