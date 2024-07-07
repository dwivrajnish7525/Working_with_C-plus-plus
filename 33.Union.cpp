//Union
#include<iostream>
using namespace std;

union money
{
    int rupees;
    char cars;
    float grain;
};
int main()
{
    union money ram;
    ram.rupees=100000;
    ram.cars='c';
    ram.grain=500.5;
    // cout<<"Number of Rupees:- "<<ram.rupees<<endl;
    cout<<"Car first letters:- "<<ram.cars<<endl;
    // cout<<"Grains in (KG):- "<<ram.grain<<endl;
    return 0;
}