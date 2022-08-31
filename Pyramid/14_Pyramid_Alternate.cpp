//14. Pyramid Pattern of Alternate Numbers
#include<iostream>

using namespace std;
 int main()
 {
    int rows = 5;

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<< i*2-1 ;
        }
        cout<<endl;
    }
    return 0;
 }
