#include <iostream>
using namespace std; 

class srm; 

/*
advance declaration is requeried for "friend class"
advance declaration is also called empty class for which no body is there
*/

class am 
{ 
private: 
    int a; 
  
public: 
    void set(int j) { a = j; } 
    void show_srm_am(am sum); // Function is declared here
    friend class srm; // Friend Class 
}; 
  
class srm 
{ 
private: 
    int b; 
  
public: 
	void set(int k) // "void set(int k) { b = k; }" it can be written in this way also 
	{
		b = k;
	}
    void show_srm_am(am sum) 
    //Function is defined here
    // Since B is friend of A, it can access private members of A
    {  
        cout << "The sum of marks is  " << sum.a + b; 
    } 
}; 
  
int main() 
{ 
    am a;
    int x,y;
    string st;
    
    cout << "Enter the name of the student is " ;
    cin >> st;
    
    
    cout << "Enter the academics marks of " << st << "  is (it should be in range of 1 to 100): " ;
    cin >> x;
	a.set(x);
	 
    srm s; 
    cout << "Enter the self-reliance marks of " << st << " is (it should be in range of 1 to 10): " ; ;
    cin >> y;
    s.set(y);
    
    s.show_srm_am(a); 
    return 0; 
} 
