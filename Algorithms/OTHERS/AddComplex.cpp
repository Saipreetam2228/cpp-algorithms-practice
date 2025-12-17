#include <iostream>
using namespace std;

class Complex 
{
    float re; 
    float im; 

public:

    void set() 
	{
        cout << "Enter the real part of the complex number: ";
        cin >> re;
        cout << "Enter the imaginary part of the complex number: ";
        cin >> im;
    }
    
    void set_more()
    {
    	int n; 
        cout << "How many complex numbers do you want to add? ";
        cin >> n;

        if (n <= 0) 
		{
            cout << "Invalid number of complex numbers." << endl;
            return;
        }

        for (int i = 0; i < n; ++i)  
		{
            float tre; 
            float tim; 
            
			cout << "Complex number " << i + 1 << ":- " << endl;
			
            cout << "Enter the real part of the complex number: ";
            cin >> tre;
            cout << "Enter the imaginary part of the complex number: ";
            cin >> tim;
            
            if (tim > 0)
               cout << tre << " + " << tim << "i" << endl;
            else if (tim == 0)
               cout << tre << endl;
            else
               cout << tre << " - " << -tim << "i" << endl;
        }
	}

    void sum() 
	{
        int n; 
        cout << "How many complex numbers do you want to add? ";
        cin >> n;

        if (n <= 0) 
		{
            cout << "Invalid number of complex numbers." << endl;
            return;
        }

        for (int i = 0; i < n; ++i)  
		{
            float tre; 
            float tim; 
            
			cout << "Complex number " << i + 1 << ":- " << endl;
			
            cout << "Enter the real part of the complex number: ";
            cin >> tre;
            cout << "Enter the imaginary part of the complex number: ";
            cin >> tim;

            re = re + tre;
            im = im + tim;
        }
    }

    void display() 
	{
        if (im > 0)
            cout << re << " + " << im << "i" << endl;
        else if (im == 0)
            cout << re << endl;
        else
            cout << re << " - " << -im << "i" << endl;
    }

};

int main() 
{
    Complex c; 
    int n;
    cout << "If do you want only one complex number (press '0') or do you want to add the complex numbers (press'1')  or do you want 2 or more complex numbers (press'2') : ";
    cin >> n;
    if (n == 0)
    {
    	c.set();
    	c.display();
    	return 0;
	}
	else if (n == 1)
	{
		c.sum(); 
        cout << "The total sum of the complex numbers is ";
        c.display();
        return 0;
	}
    else if (n == 2)
	{
		c.set_more();
		return 0;
    } 
    else if (n < 0)
    {
    	cout << "Invalid" << endl;
    	return 0;
	}


}

