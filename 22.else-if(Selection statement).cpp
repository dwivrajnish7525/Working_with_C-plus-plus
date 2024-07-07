//else-if(Selection statement)
#include<iostream>
using namespace std;


int main()
{
    cout<<"For closing the loop enter (-1) in percentage"<<endl;
    while(-1)
    {
    float per;
    cout<<"\nEnter your percentage:-";
    cin>>per;
    if((per>=90)&&(per<=100))
    {
        cout<<"You got A Grade Marks.";
    }
    else if((per>=80)&&(per<90))
    {
        cout<<"You got B Grade Marks.";
    }
    else if((per>=70)&&(per<80))
    {
        cout<<"You got C Grade Marks.";
    }
    else if((per>=60)&&(per<70))
    {
        cout<<"You got D Grade Marks.";
    }
    else if(per==-1)
    {
        return -1;
    }
    else if((per<60) &&(per>=0))
    {
        cout<<"You are Fail.";
    }
    else
    {
        cout<<"You entered invalid percentage";
    }
    }

    return 0;
}