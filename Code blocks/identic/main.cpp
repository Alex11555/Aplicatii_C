#include <iostream>

using namespace std;

int identic(int x)
{
    int c;
    c=x%10;
    while(x)
    {
        if(x%10!=c)
            return 0;
        x=x/10;
    }
    return 1;
}

int main()

{
    int x;
    cin>>x;
    cout<<identic(x);
    return 0;
}
