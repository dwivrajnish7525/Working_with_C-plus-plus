//do-while loop
#include<iostream>
using namespace std;


int main()
{
    int lnum;
    cout<<"Enter last number:-";
    cin>>lnum;
    int i=1;
    do
    {
        cout<<i;
        i++;
    } while (i<=lnum);
    return 0;
}