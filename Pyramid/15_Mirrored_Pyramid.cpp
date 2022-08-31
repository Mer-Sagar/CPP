//15. Mirrored Pyramid (Right-angled Triangle) Pattern of Numbers

#include<iostream>

using namespace std;
 int main()
 {
    int rows = 5;

    for(int i=1; i<=rows; i++)
    {
        int num=1;
        for(int j=rows; j>0; j--)
        {
            if(j > i)
            {
                cout<<" ";
            }
            else
            {
                cout<<num;
                num+=1;
            }
        }
        cout<<endl;
    }
    return 0;
 }