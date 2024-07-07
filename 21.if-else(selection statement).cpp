//if-else(selection statement)
#include<iostream>
using namespace std;


int main()
{
    int age;
    cout<<"Enter your age:- ";
    cin>>age;
    if(age>=18)
    {
        cout<<"You are eligible for vote.";
    }
    else
    {
        cout<<"You are not elegible for vote";
    }
    return 0;
}