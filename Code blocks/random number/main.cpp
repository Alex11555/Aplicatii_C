#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    int x;
    srand(time(0));
    bool exit=false;
    while(exit==false)
    {cout<<endl;

    for(int i=1;i<=4;i++)
    {for(int j=1;j<=4;j++)
        cout<<1+(rand()%9)<<" ";
        cout<<endl;
    }
    cout<<endl;
        system("pause");
        if(GetAsyncKeyState(VK_ESCAPE))
    {
        exit=true;
    }
    }

    cout<<"Exited"<<endl;

    return 0;
}
