/*7. WAP to display taxi details, Customer name and total fare that must be calculated as:
For first 5 km, fare is 50 rs., for next 10 kms, fare is 12 rs./km, for next 15 kms fare is 8 rs./km and 5 rs./km for more than 25 kms.*/

#include<iostream>
using namespace std;
int main()
{
    int fare=0,km,taxi_no;
    string cust_name;
    cout<<"Enter Taxi No: ";
    cin>>taxi_no;
    cout<<"Enter Customer Name: ";
    cin>>cust_name;
    cout<<"Enter how many KM: ";
    cin>>km;
    if(km<=5)
    {
        fare=50;
    }
    else if(km>5 && km<=15)
    {
        fare=50+(km-5)*12;
    }
    else if(km>15 && km<=30)
    {
        fare=50+120+(km-15)*8;
    }
    else if(km>30)
    {
        fare=50+120+120+(km-30)*5;
    }
    cout<<"\n---BILL---\n";
    cout<<"\nTaxi No is: "<<taxi_no;
    cout<<"\nCustomer Name is: "<<cust_name;
    cout<<"\nYour Fare is: "<<fare;
    return 0;
}
