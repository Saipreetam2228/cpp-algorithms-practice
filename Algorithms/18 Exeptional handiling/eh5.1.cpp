//When an exception is thrown, all objects created inside the enclosing try block are destructed before the control is
//transferred to catch block.
#include <iostream>
using namespace std;
 
class Test {
public:
int i = 20;
   Test() { cout << "Constructor of Test " << endl; }
   ~Test() { cout << "Destructor of Test "  << endl; }
};
 
int main() {
  try {
    Test t1;
    throw t1;
  } catch(Test e) {
    cout << "Caught " << e.i << endl;
  }
} 
