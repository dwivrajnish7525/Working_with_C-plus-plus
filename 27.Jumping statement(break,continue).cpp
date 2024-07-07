//Jumping statement(break,continue)
#include<iostream>
using namespace std;


int main()
{
    cout<<"1.Break\n2.Continue\n";
    int choice;
    cout<<"Enter your choice:- ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        int sn,ln,bn;
        cout<<"Enter a number you want to start the loop:- ";
        cin>>sn;
        cout<<"Enter a last number you want to close the loop:- ";
        cin>>ln;
        cout<<"Enter a number you want to break the loop:- ";
        cin>>bn;
        for(int i=sn;i<=ln;i++)
        {
            if(i==bn)
            break;
            cout<<i<<endl;
        }
        break;
        case 2:
        int cn;
        cout<<"Enter a number you want to start the loop:- ";
        cin>>sn;
        cout<<"Enter a last number you want to close the loop:- ";
        cin>>ln;
        cout<<"Enter a number you want to skip the loop:- ";
        cin>>cn;
        for(int i=sn;i<=ln;i++)
        {
            if(i==cn)
            continue;
            cout<<i<<endl;
        }
        break;
    default:
    cout<<"You entered invalid number.";
    }
    return 0;
}