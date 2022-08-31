//9. Reverse Pattern of Digits from 10
// Its also called by floyd's triangle

#include <iostream>
using namespace std;
int main()
 {
   int start=1, currentNumber , stop = 2, rows;
     
    currentNumber = stop;

    for(int i=2;i<6; i++)
    {
        for(int j=start; j<stop; j++)
        {
            currentNumber=currentNumber-1;
            cout<<currentNumber <<" ";
            
        }
        cout<<endl;

        start=stop;

        stop +=i;

        currentNumber=stop;
    } 
   
   return 0;
}






