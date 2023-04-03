#include <iostream>
 using namespace std;
 int v[10],n;

 int max(int i, int j)
 {
   int a, b, m;
   if (i==j) return v[i];
   else
   {
     m = (i+j)/2;
     a = max(i, m);
     b = max(m+1, j);
     if  (a>b) return a;
     else return b;
   }
 }

 int main( )
 {
     cin>>n;
     for(int i=1;i<=n;i++)
     cin>>v[i];
     cout<<max(1,n);
     return 0;
 }

