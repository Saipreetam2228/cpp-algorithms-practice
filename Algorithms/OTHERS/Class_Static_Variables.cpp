#include <iostream>
using namespace std;

class X 
{
private:
  int i;
  //static int si;
public:
	
  static int si;
  
  void set_i(int arg) { i = arg; }
  // but non-static functions can access static variables and non-static variables
  static void set_si(int arg) { i = arg; } 
  // static functions cannot access non-static variables, can access static variables 

  void print_i() 
  {
    cout << "Value of i = " << i << endl;
    cout << "Again, value of i = " << this->i << endl;
    // 'this' is a pointer 
  }

  static void print_si() 
  {
    cout << "Value of si = " << si << endl;
    //cout << "Again, value of si = " << this->si << endl; // error
  }

};

int X::si = 99;       // Initialize static data member

int main() 
{
  cout<< X::si; 
 // X xobj;
  //xobj.set_i(99);
  //xobj.print_i();
  //xobj.set_si(99);
 // xobj.print_si();     
}
