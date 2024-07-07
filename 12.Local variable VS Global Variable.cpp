// Local variable VS Global Variable.
#include<iostream>
using namespace std;

int a=5;

void func()
{
    cout<<a<<endl;
}

int main()
{
    int a=10;
    cout<<a<<endl;
    func();
    return 0;
}