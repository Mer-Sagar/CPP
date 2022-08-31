//13. Design an airline reservation data structure that contains the following data : 
//     Flight number
//     Originating airport code(3 characters)
//     Destination airport code(3 characters)
//     Departure time
//     Arrival time
//     Write a program that lists all the planes that leave from two airports specified by
//     the user.
#include <iostream>
#include <string>
using namespace std;
class Flight
{
private: 
    string flightNo;
    string originated;
    string destination;
    string departure;
    string arrival;

public: 
    void set_details(string flightNo, string originated, string destination, string departure, string arrival)
    {
        this->flightNo = flightNo;
        this->originated = originated;
        this->destination = destination;
        this->departure = departure;
        this->arrival = arrival;
    }
    void get_details()
    {
        cout << "Flight no: " << this->flightNo << endl;
        cout << "Originating Airport Code: " << this->originated << endl;
        cout << "Destination Airport Code: " << this->destination << endl;
        cout << "Departure time: " << this->departure << endl;
        cout << "Arrival time: " << this->arrival << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of flights: ";
    cin >> n;
    Flight flights[n];
    for (int i = 0; i < n; i++)
    {
        string flightNo, originated, destination, departure, arrival;
        cout << "\nFlight Number: " << i + 1 << " \n";
        cout << "Enter Flight no: ";
        cin >> flightNo;
        cout << "Enter Originating Airport code: ";
        cin >> originated;
        cout << "Enter Destination Airport code: ";
        cin >> destination;
        cout << "Enter departure time: ";
        cin >> departure;
        cout << "Enter Arrival time: ";
        cin >> arrival;
        flights[i].set_details(flightNo, originated, destination, departure, arrival);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nFlight Number: " << i + 1 << " \n";
        flights[i].get_details();
    }

    return 0;
}
