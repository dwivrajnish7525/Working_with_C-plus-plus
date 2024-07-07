//for loop
#include<iostream>
using namespace std;


int main()
{
    printf("\nEnter number=-1 to close the loop");
    while(-1)
    {
    int num;
    cout<<"\nEnter a number for print table:- ";
    cin>>num;
    if(num==-1)
    return -1;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    }
    return 0;
}