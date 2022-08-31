/*4. WAP that takes a series of numbers and counts the frequency of positive values and negative values.*/

#include<iostream>
using namespace std;
int main()
{
    int pos=0,neg=0,zero=0,arr[100],i,arr_size;
    cout<<"Enter the How Many Elements you want to Enter (Max 100): ";
    cin>>arr_size;
    cout<<"\nEnter "<<arr_size<<" Elements: ";
    for(i=0;i<arr_size;i++)
    {
    	cout<<"\nEnter Element "<<i+1<<" : ";
        cin>>arr[i];
        if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }
        else
        {
            pos++;
        }
    }
    cout<<"\nFrequency of Positive Numbers: "<<pos;
    cout<<"\nFrequency of Negative Numbers: "<<neg;
    cout<<"\nFrequency of Zero: "<<zero;
    return 0;
}
