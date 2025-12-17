#include <iostream>
using namespace std;
class X 
{
public:
    int i;
    string Name;
  X() 
  {
  	cout << "Enter name: ";
  	cin >> Name;
  	cout << "Enter age: " ;
  	cin >> i;
  	/*
      i=100;
      Name="Sai";
    */
  }  
  void display()
  {
	   cout << "Swami's age: " << i << endl;
  }
};

int main() 
{
  X x1;
  cout<<x1.Name<< x1.i <<endl;
  x1.display();
  return 0;   
}
