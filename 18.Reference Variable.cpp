//Reference Variable

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a :- ";
    cin>>a;
    int &b=a;
    cout<<"Value of a is:- "<<a<<endl;
    cout<<"Value of b is:- "<<b<<endl;
    cout<<"b is Reference Variable";
    return 0;
}