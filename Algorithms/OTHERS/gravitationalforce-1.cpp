#include <iostream>
using namespace std;

class GravitationalForce 
{
    double massEarth;
    string namePlanet;
    double massPlanet;
    double distance;
    double force;

public:
    void set() 
	{
        cout << "The mass of Earth is 5.972e+24 kg" << endl; 
        
		cout << "Enter the name of the other planet: ";
		cin >> namePlanet;
		
		if (namePlanet == "Mercury")
		{
            massPlanet = 3.3011e+23;
            distance  = 9.17e+10;
        } 
		else if (namePlanet == "Venus") 
		{
            massPlanet = 4.8675e+24;
            distance  = 4.14e+10;
        } 
		else if (namePlanet == "Mars") 
		{
            massPlanet = 6.4171e+23;
            distance  = 7.83e+10;
        } 
		else if (namePlanet == "Jupiter") 
		{
            massPlanet = 1.8982e+27;
            distance  = 6.287e+11;
        } 
		else if (namePlanet == "Saturn") 
		{
            massPlanet = 5.6834e+26;
            distance  = 1.275e+12;
        } 
		else if (namePlanet == "Uranus") 
		{
            massPlanet = 8.6810e+25;
            distance  = 2.723e+12;
        } 
		else if (namePlanet == "Neptune") 
		{
            massPlanet = 1.0241e+26;
            distance  = 4.351e+12;
        } 
        
		else 
		{
            cout << "Invalid planet name. Defaulting mass to 0." << endl;
            massPlanet = 0;
        }

	    cout << "The mass of the " << namePlanet << " (in kg(scientific notation)) is  " << massPlanet << endl;
	    
        cout << "The distance between Earth and " << namePlanet << " (in meters) is " << distance << " m" << endl;
    }
    void calculateForce() 
	{
        const double G = 6.67430e-11, massEarth = 5.972e+24;
        if (distance > 0) 
		{
            force = (G * massEarth * massPlanet) / (distance * distance);
        }
		else 
		{
            cout << "Error: Distance must be greater than zero." << endl;
            force = 0; 
        }
    }
    void display1() 
	{
        cout << "The mass of the Earth is 5.972e+24 kg, the mass of the " << namePlanet << " is " << massPlanet << " kg, and the distance between them is " << distance << " m" << endl;
    }

    void display2() 
	{
        cout << "The gravitational force between Earth and the " << namePlanet << " is: " << force << " Newtons." << endl;
    }
};

int main() 
{
    GravitationalForce gf;
    gf.set();           
    gf.calculateForce(); 
    gf.display1();      
    gf.display2();      
    return 0;
}

