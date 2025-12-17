#include <iostream>
using namespace std;

class Human 
{
    string n;  
    float w;   
    float h; 
	double b; 

public:
    void set()
    {
        cout << "Enter the name of the person: ";
        cin >> n;
        cout << "Enter the weight of the person (in kg): ";
        cin >> w;
        cout << "Enter the height of the person (in meters): ";
        cin >> h;
    }

    double bmi()
    {
    	b = w / (h * h);
    }

    void display()
    {
        cout << "The name of the person is " << n << ", with a height of " << h << " meters and a weight of " << w << " kg. The BMI of the person is " << b << endl;
    
};

int main()
{
    Human h;   
    h.set();
    h.bmi();
    h.display();
    return 0;
}

