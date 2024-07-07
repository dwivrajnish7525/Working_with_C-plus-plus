//Function
#include<iostream>
using namespace std;

int sum(int a,int b);


int main()
{
    int x,y;
    cout<<"Enter the value of x and y simultaneously:- ";
    cin>>x>>y;
    cout<<"Sum of x and y is:- "<<sum(x,y);    
    return 0;
}

int sum(int a,int b)
{
    return a+b;
}