#include <iostream>

using namespace std;

float x;

float R(float p,float u)
{float m;
    if(u-p<0.000001)
        return u;
    else
    {
        m=(p+u)/2;
        if(m*m>x)
            return R(p,m);
        else
            return R(m,u);
    }
}

int main()
{
    cin>>x;
    if(x>0 &&x <1)
    cout<<R(0,1);
    if(x>=1)
        cout<<R(0,x);
    return 0;

}
