// 11. Create class DATE having date, month and year as data members.Update the date with user given days using friend function,and display new date.
#include <iostream>
using namespace std;
class Date
{
public:
    int date;
    int month;
    int year;
    friend void set(int, Date &);
    void get(Date date)
    {
        cout << "Date: " << date.date << endl;
        cout << "Month: " << date.month << endl;
        cout << "Year: " << date.year;
    }
};
void set(int days, Date &date)
{
    date.year = days / 365;
    date.month = (days % 365) / 30;
    date.date = (days % 365) % 30;
}
int main()
{
    Date date;
    int days;
    cout << "Enter days: ";
    cin >> days;
    set(days, date);
    date.get(date);
    return 0;
}
