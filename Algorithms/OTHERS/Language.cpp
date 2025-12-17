#include <iostream>
using namespace std;

class Language 
{
	string names;
	double s;
	int c;
	double a;
	public:
			void set()
			{
				cout << "Enter the name of the countries: ";
				cin >> names;
				cout << "Enter the number of the speakers : ";
				cin >> s;
				cout << "Enter the count of the country: ";
				cin >> c;
			}
			
			void average()
			{
				a = s / c;
			}
			
			void display()
			{
				cout << "The average of the " << s << " speakers per " << c << "country is " << a << endl;
		    }
    
};

int main() {
    Language l;
    l.set();
    l.average();
    l.display();
    return 0;
}

