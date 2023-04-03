#include <iostream>
#include <fstream>
using namespace std;

int numar(unsigned int n,unsigned int c)
{
   int m,cn=n,d1,d,OK=1;
   d1=n%10;
   cn=cn/10;
   while(cn)
   {
       d=cn%10;
       if(d!=d1)
        OK=0;
       cn=cn/10;
   }
   if(OK==1 && d1==c)
    return -1;


}

int main()
{
int n,c;
cin>>n>>c;
cout<<numar(n,c);
return 0;
}
