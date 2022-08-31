#include<iostream>
using namespace std;
int main()
{
    int i, space, j,rows;
    cout<<"Enter Number of Rows: ";
    cin>>rows;
    for(i=1; i<=rows; i++)
    {
        for(space=1; space<i; space++)
            cout<<" ";
        for(j=i; j<=rows; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}