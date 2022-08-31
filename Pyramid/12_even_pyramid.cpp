// 12. Even Number Pyramid Pattern

#include <iostream>
using namespace std;

int main()
 {
    int rows = 5;
    int LastEvenNumber = 2 * rows;
    int evenNumber = LastEvenNumber;

    for(int i=1; i<=rows; i++)
    {
        evenNumber = LastEvenNumber;

        for(int j=0; j<i; j++)
        {
            cout<<evenNumber<<" ";

            evenNumber -= 2;
        }
        cout<<endl;
    }
    return 0;
 }