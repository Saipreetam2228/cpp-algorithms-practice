#include <iostream>
using namespace std;

class Student 
{
    string n;  
    int s;   
    double t; 
	double a; 

public:
    void set()
    {
        cout << "Enter the name of the person: ";
        cin >> n;
        cout << "Enter the number of subjects: ";
        cin >> s;
        cout << "Enter the total marks secured in all subjects: ";
        cin >> t;
    }

    double average_marks()
    {
    	a = t / s;
    	return a;
    }

    void display()
    {
    	cout << "The Average marks secured by " << n <<  " is " << a << " marks. " << endl;
	}
};

int main()
{
    Student s;
    s.set();
    s.average_marks();
    s.display();
    return 0;
}

