//11. Connected Inverted Pyramid Pattern of Numbers

#include <iostream>
using namespace std;
int main()
 {
    int rows = 6;

    for(int i=0; i<=rows; i++)
    {
        for(int j=rows-1; j>i; j--)
        {
            cout<<j<<"";
        }
        for(int l=0; l<i; l++)
        {
            cout<<"";
        }
        for(int k=i+1; k<rows; k++)
        {
            cout<<k<<"";
        }
        cout<<endl;
    }
    return 0;
 }