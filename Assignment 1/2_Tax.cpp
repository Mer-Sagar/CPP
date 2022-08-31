/*2. WAP to add an 8% tax to a given amount and round the net amount to its positive nearest amount.*/
#include<iostream>
using namespace std;

int main()
{
    float amt, tax;
    int tot_amt;
    cout<<"Enter the Amount: ";
    cin>>amt;
    tax = amt * 0.08;
    tot_amt = int(amt + tax);
    cout<<"The Tax on amount: "<< amt << " is " << tax << endl;
    cout<<"The Total amount is: "<< tot_amt;
    return 0;
}
