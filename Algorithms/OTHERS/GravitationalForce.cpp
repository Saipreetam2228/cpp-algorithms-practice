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
	 /* cout << "The mass of Earth is 5.972e+24 kg" << endl; */
		
		cout << "Enter the mass of Earth (in kg):"; 
	    cin >> massEarth; 
        
       	cout << "Enter the name of the other planet: ";
		cin >> namePlanet;
		
        cout << "The other planets and their masses(in kg(scientific notation)) are: " << endl
		     << "  1. Mass of Mercury = 3.3011e+23 kg" << endl
		     << "  2. Mass of Venus = 4.8675e+24 kg" << endl
		     << "  3. Mass of Mars = 6.4171e+23 kg" << endl
		     << "  4. Mass of Jupiter = 1.8982e+27 kg" << endl
		     << "  5. Mass of Saturn = 5.6834e+26 kg" << endl
		     << "  6. Mass of Uranus = 8.6810e+25 kg" << endl
		     << "  7. Mass of Neptune = 1.0241e+26 kg" << endl;
		     
	    cout << "Enter the mass of the " << namePlanet << " (in kg(scientific notation)): ";
	    cin >> masssPlanet;
	    
	    cout << "The distance between Earth and " << namePlanet << " are: " << endl
		     << "  1. Distance b/w Earth and Mercury = 9.17e+10 m" << endl
		     << "  2. Distance b/w Earth and Venus = 4.14e+10 m" << endl
		     << "  3. Distance b/w Earth and Mars = 7.83e+10 m" << endl
		     << "  4. Distance b/w Earth and Jupiter = 6.287e+11 m" << endl
		     << "  5. Distance b/w Earth and Saturn = 1.275e+12 m" << endl
		     << "  6. Distance b/w Earth and Uranus = 2.723e+12 m" << endl
		     << "  7. Distance b/w Earth and Neptune = 4.351e+12 m" << endl;
		     
        cout << "Enter the distance between Earth and " << namePlanet << " (in meters): ";
        cin >> distance;
    }
    void calculateForce() 
	{
        const double G = 6.67430e-11;
        
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
    void display() 
	{
        cout << "The mass of the Earth is 5.972e+24 kg, the mass of the " << namePlanet << " is " << massPlanet << " kg, and the distance between them is " << distance << " m. The gravitational force between Earth and the " << namePlanet << " is: "<< force << " Newtons." << endl;
    }
    
};

int main() 
{
    GravitationalForce gf;
    gf.set();           
    gf.calculateForce(); 
    gf.display();          
    return 0;
}

