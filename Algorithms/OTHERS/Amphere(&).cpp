#include <iostream>
using namespace std;

int main()
{
	int a=1, b=2, c=3;
	
	int &z = a;
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", z = " << z << endl;
	
	z=b;
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", z = " << z << endl;
	
	z=c;
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", z = " << z << endl;
	
	cout << "&a = " << &a << ", &b = " << &b << ", &c = " << &c << ", &z = " << &z << endl;
	
}
