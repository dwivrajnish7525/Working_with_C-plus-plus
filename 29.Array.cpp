//Array
#include<iostream>
using namespace std;


int main()
{
    //Creating an print the element of array.
    int array[]={5,8,9};
    cout<<"Value of first element in array:- "<<array[0]<<endl;
    cout<<"Value of second element in array:- "<<array[1]<<endl;
    cout<<"Value of third element in array:- "<<array[2]<<endl;
    cout<<"*****(Creating a array using loop and print each element)*****"<<endl;
    int n;
    cout<<"Enter the size of array:- ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element of array at a["<<i<<"] position:- ";
        cin>>arr[i];
    }
    //Changing the value
    arr[2]=0;
    arr[1]=0;
    cout<<"Elements are:- "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element of array at a["<<i<<"] position is :- "<<arr[i]<<endl;
    }
    return 0;
}