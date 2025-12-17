#include <iostream>
using namespace std;

class ProgrammingLanguage 
{
public:
    string name;
    int l;
    double b;
    double bd;
    void set()
    {
    	cout << "Enter name of the programming language: ";
    	cin >> name;
    	cout << "How many lines of code are there in " << name << " language? ";
    	cin >> l;
    	cout << "How many bugs are there in " << name << " language? ";
    	cin >> b;
	}
	
	void BugDensity()
	{
		if (l != 0)  
        {
            bd = b / l; 
        }
        else
        {
            bd = 0;  
        }
	}
	
	void display()
	{
		cout << "The programming language is " << name << " with the lines of code is " << l << " and bugs is " << b << ". Then the bug density of " << name << " language is " << bd << ". " << endl;
	}

};

int main() {
    ProgrammingLanguage pl;
    pl.set();
    pl.BugDensity();
    pl.display();
    return 0;
}

