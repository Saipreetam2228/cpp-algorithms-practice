#include <iostream>
using namespace std;

class Eh{
private:
	int x;
	
public:
	void set(){
	  cout<<"Enter the x value: ";
    cin>>x;
  }
  
  void display(){
	  try {
      cout << "Inside try \n"<<endl;
      cout<<"x="<<x<<endl;
      
      if (x > 0) // trying / exceptional condition
      {
         throw x;
      }
      cout << "After throw (Never executed) \n";
    }
    catch(int ex){
    	cout<<"Exceptional caught: X= "<<ex<<endl;
		}
  }
};


int main(){
  Eh obj; //creating an object of class as eh
  obj.set();
  obj.display();

  cout << "After catch (Will be executed) \n";
  return 0;

}
