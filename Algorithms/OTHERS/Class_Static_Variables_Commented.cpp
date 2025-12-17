#include <iostream>  // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define a class named X
class X 
{
private:
  int i; // Private instance variable
  // static int si;  // This line is commented out; static variables are usually defined outside the class

public:
  static int si; // Static member variable shared across all objects of the class

  // Member function to set the value of i
  void set_i(int arg) { i = arg; }

  // Static member function to set the value of si
  static void set_si(int arg) { si = arg; }

  // Function to print the value of i
  void print_i() 
  {
    cout << "Value of i = " << i << endl;  // Print value of instance variable i
    cout << "Again, value of i = " << this->i << endl;  // Using "this" pointer to access i
  }

  // Static function to print the value of si
  static void print_si() 
  {
    cout << "Value of si = " << si << endl; // Print static variable si
    // cout << "Again, value of si = " << this->si << endl; // Error: "this" pointer cannot be used in a static function
  }
};

// Define and initialize the static member variable si
int X::si = 99;       

int main() 
{
  cout << X::si << endl;  // Access static variable directly using class name

  // The following lines are commented out
   X xobj;  // Create an object of class X
   xobj.set_i(99);  // Set instance variable i
   xobj.print_i();  // Print instance variable i
   xobj.set_si(99); // Set static variable si using an object (not recommended, should use X::set_si instead)
   xobj.print_si(); // Print static variable si
}

