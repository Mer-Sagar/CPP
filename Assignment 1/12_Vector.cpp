/*Create class VECTOR ( int x, int y, int z). Using parameterized constructor with
default arguments, initialize the data members. Also using member function add
two objects of this class and display resultant value using member functions.*/
#include<iostream>
using namespace std;

class VECTOR
{
    int x;
    int y;
    int z;

    public:
    VECTOR(int x=0, int y=0, int z=0)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void addingvectors(VECTOR other)
    {
        cout<<"X: "<<x + other.x<<endl;
        cout<<"Y: "<<y + other.y<<endl;
        cout<<"Z: "<<z + other.z<<endl;
    }
};

int main()
{
    VECTOR v1(25);
    VECTOR v2(25,75,100);
    v1.addingvectors(v2);
    return 0;
}
