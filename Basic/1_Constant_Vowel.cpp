/*1. Write a program that reads a character and prints out whether it is a vowel or a consonant or a number or any other character.*/

#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter any Character: ";
    cin>>c;
    cout<<"Character Entered by you is: "<<c<<endl;
    c=(char)tolower(c);
    if(isdigit(c))
    {
        cout<<"\n"<<c<<" is a Digit.";
    }
    else if(isalpha(c))
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            cout<<"\n"<<c<<" is a Vowel.";
        }
        else
        {
            cout<<"\n"<<c<<" is a Constant.";
        }
    }
    else
    {
        cout<<"\n"<<c<<" is a Special Character.";
    }
    return 0;
}
