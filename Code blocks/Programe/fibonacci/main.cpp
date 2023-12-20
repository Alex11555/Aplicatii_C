#include <iostream>

using namespace std;

void fibonacci(int n){
int f0,f1,fib;
f0=1;
f1=1;
cout<<f0<<" "<<f1<<" ";
for(int i=3;i<=n;i++)
{
    fib=f1+f0;
    f0=f1;
    f1=fib;
    cout<<fib<<" ";
}
}
long fibonacci_rec(long n){
if(!n)
    return 0;
else
    if(n==1)
    return 1;
else
 return fibonacci_rec(n-2)+fibonacci_rec(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<"Ultimul element din sir: "<<fibonacci_rec(n)<<endl;//varianta recursiva(afiseaza ultimul termen din sir)
    cout<<"Sirul lui Fibonacci este:";
    fibonacci(n);//varianta iterativa

    return 0;
}
