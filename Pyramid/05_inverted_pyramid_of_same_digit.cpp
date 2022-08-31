//5. Inverted Pyramid of the Same Digit

#include<iostream>
using namespace std;

int main()
{
    int rows=5;

    int num = 1;

    for (int i=5; i>=0; i--)
    {
        for(int j=0; j<=i; j++)
            {
                cout<<num;
            }

        printf("\n");   

    }
    return 0;
}