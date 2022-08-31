// 10. Unique Pyramid Pattern of Digit
#include <iostream>
using namespace std;
int main()
 {
   int rows=6;
     
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<i-1; j++)
        {
            cout<<j<<" ";            
        }
        for(int j=i-1; j>0; j--)
        {
            cout<<j<<" ";            
        }
        cout<<endl;        
    } 
   
   return 0;
}


