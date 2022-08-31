/* 8. Write a program to display time in hours, minutes and seconds after adding
      integer value to the time type object, show the use of constructors. */

#include <iostream>
#include<conio.h>

using namespace std;

class Time{
    int hours, minutes, seconds;
    public:
    Time()
    {

    }
    Time(int hrs, int min, int sec)
    {
        hours = hrs;
        minutes = min;
        seconds = sec;
    }
    void show()
    {
        cout<<this->hours<<":"<<this->minutes<<":"<<this->seconds<<endl;
    }
    
};
int main()
{
    int h, m, s;
    cout<<"\n Enter Hours input: ";
    cin>>h;
    cout<<"\n Enter Minites input: ";
    cin>>m;
    cout<<"\n Enter Seconds input: ";
    cin>>s;

    Time time(h, m, s);
    cout<<"\n Output is : ";
    
    time.show();
    return 0;
}
