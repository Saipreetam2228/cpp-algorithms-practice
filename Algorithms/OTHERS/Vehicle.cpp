#include <iostream>
using namespace std;

class Vehicle 
{
public:
	string car;
    float d; // in kilometers
    float fc; // in liters
    double fe;
	void set()
	{
		cout << "Enter the name of the car: ";
		cin >> car;
		cout << "How many kilometers have you driven so far? ";
		cin >> d;
		cout << "How much fuel has been consumed in relation to the kilometers driven (in litres)? ";
		cin >> fc;
	}
    
    void FuelEfficiency() 
	{
        fe = d / fc;
    }
    
    void display()
    {
    	cout << "The total distance covered by my " << car << " is " << d <<"kilometres, and it has consumed " << fc << " liters of fuel.Then the fuel efficiency is " << fe << endl;

	}
};

int main() 
{
    Vehicle v;
    v.set();
    v.FuelEfficiency();
    v.display();
    return 0;
}
]
