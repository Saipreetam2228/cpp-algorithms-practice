#include <iostream>
using namespace std;
class X 
{
private:
    int i,j;
public:
      X() //default constructor
	  {
          i=0;
          j=0;
      }
      X(int a,int b) //parameterised constructor
	  {
          i=a;
          j=b;
      }
      // constructors with different no.of parameters is called "constructor overloading" 
  void display()
  {
      cout<<"The number is "<<i<<" + "<<j<<"i "<<endl;  
  }
  /*
  destructors cannot take parameters
  when an object is destroyed, it is used to perform cleanup operations like releasing memory or closing files, to prevent memory leaks or other resource issues
  destructor is called, when an object goes out of scope (i.e; at the end of a function)
  when an object is explicitly deleted using 'delete' for dynamically allocated objects
  */
  ~X() // it is called destructor
  {
      cout<<"Destrcutor is called"<<endl;
  }
 
};

int main() 
{
  X x1;// here default constructor is called
  X x2(2,3);// here parameterised constructor is called
  x1.display();
  x2.display();
  return 0;   
}
