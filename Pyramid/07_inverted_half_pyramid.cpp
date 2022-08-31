//7. Inverted Half Pyramid Number Pattern
#include <iostream>
using namespace std;

int main()
 {
    int rows;

    rows = 5;

    for(int i=5; i>=0; i--)
    {
        for(int j=0; j<=i+1; j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}