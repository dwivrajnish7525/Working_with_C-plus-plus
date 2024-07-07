//Structure
#include<iostream>
#include<string>
using namespace std;

typedef struct info
{
    string name;
    int rollno;
    float per;
    int rank;
}data;

int main()
{
    info c1,c2;
    data c3;
    
    //info about c1
    c1.name="Ram";
    c1.rollno=45;
    c1.per=96;
    c1.rank=455;

    //info about c2
    c2.name="Ramesh";
    c2.rollno=49;
    c2.per=91;
    c2.rank=556;

    //info about c3
    c3.name="Raghav";
    c3.rollno=59;
    c3.per=81;
    c3.rank=756;
    
    cout<<endl;
    cout<<"Name of first Candidate:- "<<c1.name<<endl;
    cout<<"First Candidate roll no:- "<<c1.rollno<<endl;
    cout<<"First Candidate percentage:- "<<c1.per<<endl;
    cout<<"First Candidate rank:- "<<c1.rank<<endl;
    cout<<endl;
    cout<<"Name of Second Candidate:- "<<c2.name<<endl;
    cout<<"Second Candidate roll no:- "<<c2.rollno<<endl;
    cout<<"Second Candidate percentage:- "<<c2.per<<endl;
    cout<<"Second Candidate rank:- "<<c2.rank<<endl;
    cout<<endl;
    cout<<"Name of Third Candidate:- "<<c3.name<<endl;
    cout<<"Third Candidate roll no:- "<<c3.rollno<<endl;
    cout<<"Third Candidate percentage:- "<<c3.per<<endl;
    cout<<"Third Candidate rank:- "<<c3.rank<<endl;
    
    return 0;
}