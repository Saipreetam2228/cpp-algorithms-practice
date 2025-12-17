// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

// exemption is parent class
// my exemption is child class
class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex;

int main () {
  try
  {
    throw myex;//global objects
  }
  catch (exception &e)  //reference variable e
  {
    cout << e.what() << '\n';
  }
  return 0;
}
