#include <iostream>
using namespace std;

class Planet
{
    string p; 
    double r; 
    double sa;

public:
    void set()
    {
        cout << "Enter the name of the planet: ";
        cin >> p;
        cout << "Enter the radius of the planet (in km): ";
        cin >> r;
    }   

    double SurfaceArea()
    {
    	sa = 4 * 3.14159 * r * r;
    }

    void display()
    {
        cout << "The given planet is " << p << " with a radius of " << r << " km. The surface area of the planet is " << sa << " km^2." << endl;
    }
    
};

 
int main()
{
    Planet sp;
    sp.set();
    sp.SurfaceArea();
    sp.display();
    return 0;
}

