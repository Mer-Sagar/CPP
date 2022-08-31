//4. Inverted Pyramid of Descending Numbers
#include <iostream>
using namespace std;

int main()
{
    int rows=5;

    for(int i = rows; i >= 1; --i)
    {        

        for(int j = 0; j < i; ++j)
        {
            cout << i<<" ";
        }            

        cout << endl;
    }

    return 0;
}