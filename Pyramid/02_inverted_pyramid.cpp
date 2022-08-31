//2. Inverted Pyramid of Numbers
#include <iostream>
using namespace std;

int main()
{
    int rows=6;   

    int k=1;

    for(int i = rows; i >= 1; --i)
    {        

        for(int j = 0; j < i-1; ++j)
        {
            cout << k<<" ";
        }           

        k++;
        cout << endl;
    }
    return 0;
}

