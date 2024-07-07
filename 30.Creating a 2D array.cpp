//Creating a 2D array and print each eleemt in matrix form.
#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the size of 2D array:- ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the value at a["<<i<<"]["<<j<<"] position :- ";
            cin>>a[i][j];
        }
    }
    cout<<"Elements are:- "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
    }
    return 0;
}