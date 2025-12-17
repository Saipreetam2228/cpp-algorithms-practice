#include <iostream>
using namespace std;

int main ()
{
	int x, y;
	
	cout << "Enter two integers: ";
	cin >> x >> y;
	
	cout << "Maximum = " << max(x, y);
	
	return 0;
}

int max(int a, int b)
{
	if(a > b)
	   return a;
	else
	   return b;
}
