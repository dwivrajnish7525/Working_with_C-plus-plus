//Recursion
#include<iostream>
using namespace std;

int fact(int x);

int main()
{
    int n;
    cout<<"Enter the number :-";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);

    return 0;
}

int fact(int x)
{
    if(x==0||x==1)
    {
        return 1;
    }
    return x*fact(x-1);
}