//while loop
#include<iostream>
using namespace std;


int main()
{
    cout<<"Enter number=-1 to close the loop"<<endl;
    while(-1)
    {
    int num;
    cout<<"Enter a number for print table:- ";
    cin>>num;
    int i=1;
    while(i<=10)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
        i++;
    }
    if(num==-1)
    return -1;
    }
    return 0;
}