// 8. Pyramid of Natural Numbers Less Than 10
#include <iostream>
using namespace std;

int main()
 {
    int currentNumber = 1, stop = 2, rows=3;
     
    for(int i=0;i<rows; i++)
    {
        for(int j=1; j<stop; j++)
        {
            cout<<currentNumber <<" ";
            currentNumber++;
        }
        cout<<endl;
        stop +=2;
    }    

     return 0;
 }



