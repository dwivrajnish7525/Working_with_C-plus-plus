// Pointer
#include <iostream>
using namespace std;

int main()
{
    int a = 55;
    int *b = &a;
    cout << "************(Pointer)***************" << endl;
    cout << "Value of a is:- " << a << endl;
    cout << "Address of a is:- " << &a << endl;
    cout << "Item of b(Address of a) is:- " << b << endl;
    cout << "Address of b is :- " << &b << endl;
    cout << "Value stored in b is:- " << *b << endl;
    cout << "***********************************" << endl;
    cout << endl;

    cout << "************(Pointer-to-Pointer)***************" << endl;
    int x=43;
    int* y=&x;
    int** z=&y;
    cout<<"Value of x is:- "<<x<<endl;
    cout<<"Address of x is:- "<<&x<<endl;
    cout<<"Items stored in y(Address of x) is:- "<<y<<endl;
    cout<<"Address of y is:- "<<&y<<endl;
    cout<<"Value in y is:- "<<*y<<endl;
    cout<<"Items stored in z(Address of y) is:- "<<z<<endl;
    cout<<"Address of z is:- "<<&z<<endl;
    cout<<"Value in z(Address of a) is:- "<<*z<<endl;
    cout<<"Original Value in z is:- "<<**z<<endl;
    cout<<"*************************************************";
    cout<<endl;

    int marks[]={5,8,9};
    int *p=marks;
    /*& is not used because the name of the array itself is the address of first index of anarray*/
    cout<<"The first value of the array is:- "<<*p<<endl;
    cout<<"The second value of the array is:- "<<*(p+1)<<endl;
    cout<<"The third value of the array is:- "<<*(p+2)<<endl;
    return 0;
}