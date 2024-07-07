// switch(Selection Statement)
#include <iostream>
using namespace std;

int main()
{
    cout<<"\nEnter day number (-1) to close the loop.";
    while (-1)
    {
        int day;
        cout << "\nEnter day number(1-7):- ";
        cin >> day;
        switch (day)
        {
        case 1:
            cout << "1.Monday";
            break;
        case 2:
            cout << "2.Tuesday";
            break;
        case 3:
            cout << "3.Wednesday";
            break;
        case 4:
            cout << "4.Thursday";
            break;
        case 5:
            cout << "5.Friday";
            break;
        case 6:
            cout << "6.Saturday";
            break;
        case 7:
            cout << "7.Sunday";
            break;
        case -1:
            return -1;
        default:
            cout << "You entered Invalid day number";
        }
    }
    return 0;
}