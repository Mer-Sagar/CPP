// 6. Reverse Pyramid of Numbers
#include <iostream>
using namespace std;

int main()
{
    int i,j,k,rows=5,count;
    
    for(i=1; i<=rows; i++)
	{  
        for (int j=i; j>=1; j--)
        {
            cout<<j;
        }        
        cout<<"\n";
    }
    return 0;
}


