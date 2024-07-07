// Methods
#include <iostream>
using namespace std;

// Call by Value
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int x, y;
//     cout << "Enter the value of x & y:- ";
//     cin >> x >> y;
//     cout << "Value of x:-" << x << " Value of y:-" << y << endl;
//     swap(x, y);
//     cout << "After swaping" << endl;
//     cout << "Value of x:-" << x << "Value of y:-" << y << endl;
//     return 0;
// }

// // Call by Pointer
// void swap(int* a, int* b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x, y;
//     cout << "Enter the value of x & y:- ";
//     cin >> x >> y;
//     cout << "Value of x:-" << x << " Value of y:-" << y << endl;
//     swap(&x, &y);
//     cout << "After swaping" << endl;
//     cout << "Value of x:-" << x << " Value of y:-" << y << endl;
//     return 0;
// }

// Call by Reference

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "Enter the value of x & y:- ";
    cin >> x >> y;
    cout << "Value of x:-" << x << " Value of y:-" << y << endl;
    swap(x,y);
    cout << "After swaping" << endl;
    cout << "Value of x:-" << x << " Value of y:-" << y << endl;
    return 0;
}