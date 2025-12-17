#include <iostream> //Includes the header file for input (cin) and output (cout) operations.

using namespace std; //Allows you to use standard library objects like cin and cout without the std:: prefix. All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class check  // Defines a class named check
{ //creation of a class
	string name; //Stores the name of the student
	int regd_no; //Stores the register number of the student
	public: //
		void set()  //Member function. Prompts the user to enter the student's name and registration number and stores them in name and regd_no
		{
		    // input a number using >>
			//output a number using <<
			cout << "Enter the name of the student:";
			cin >> name;
			cout << "Enter the register number: ";
			cin >> regd_no; 
		}
		void display()  //Member function. Outputs the stored name and registration number in a formatted message
		{
			cout << "The name of the student is " << name << " and the register number is " << regd_no <<  endl;			
		}
}; //body of the class is closed

int main()  //
{ 
check c1; // Creates an object c1 of the check - class
c1.set(); // Calls the set() method to input student details.
c1.display();  //Calls the display() method to output the student details
return 0; //Indicates successful program termination
}
