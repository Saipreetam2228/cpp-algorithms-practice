#include <iostream>
using namespace std;
class X 
{
public:
    int i;
    string Name;
  X() 
  {
      i=100;
      Name="Sai";
  }  
};

//its name is same as class name
// constructor functions does not any return values

int main() 
{
  X x1; //constructor function is caled when the object is created
  cout<<x1.i<<endl;
  cout<<x1.Name<<endl;
  return 0;   
}
