//1.Access Global variable in a function.
#include<iostream>
using namespace std;
int a=5;

int main()
{
    int a=10;
    cout<<"Value of a(in local variable) is:- "<<a<<endl; //<-- It return local variable value (10).
    cout<<"Value of a(in global variable) is:- "<<::a<<endl;//<-- It return global variable value (5).    
    return 0;
}