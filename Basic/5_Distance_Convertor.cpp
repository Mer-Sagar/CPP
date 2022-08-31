/*5. WAP to convert the distance in meter to centimeter and feet to inches and vice
versa using class DISTANCE. (1 meter = 100 centimeter and 1 feet = 12 inches).*/
#include<iostream>
using namespace std;

class Distance
{
    public:
    float met_to_cen(float meter)
    {
        return  meter * 100;
    }

    float cen_to_met(float centi)
    {
        return centi / 100;
    }

    float feet_to_inch(float feet)
    {
        return feet * 12;
    }

    float inch_to_feet(float inch)
    {
        return inch / 12;
    }
};

int main()
{
    Distance d1;
    int op = 0;
    float item;
    while(op != 5)
    {
        cout<<"\n1: Convert from METRES To CENTIMETRES"<<endl;
        cout<<"2: Convert from CENTIMETRES To METRES"<<endl;
        cout<<"3: Convert from FEET To INCHES"<<endl;
        cout<<"4: Convert from INCHES To FEET"<<endl;
        cout<<"5: Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>op;

		cout<<"\n";
        switch(op)
        {
            case 1: cout<<"Enter the input in meter: ";
                    cin>>item;
                    cout<<item <<" Metres = " << d1.met_to_cen(item) << " Centimetres"<< endl;
                    break;
            case 2: cout<<"Enter the input in centimeter: ";
                    cin>>item;
                    cout<< item <<" Centimetres = " << d1.cen_to_met(item) << " Metres"<< endl;
                    break;
            case 3: cout<<"Enter the input in feet: ";
                    cin>>item;
                    cout<< item <<" Feet = " << d1.feet_to_inch(item) << " Inches"<< endl;
                    break;
            case 4: cout<<"Enter the input in inches: ";
                    cin>>item;
                    cout<< item <<" Inches = " << d1.inch_to_feet(item) << " Feet"<< endl;
                    break;
            case 5: cout<<"Exiting the program" << endl;
                    break;
            default : cout<<"Enter a valid choice" << endl;
                    break;
        }
    }
}
