#include<iostream>
using namespace std;

class Electrity_charges
{
	public:
		int tunits=0, i=0, j=0, difference=0;
		float surcharge_amount=0.0, total_amount=0.0;
		int charges(int units)
		{
			if (units <= 100)
			{
				j=1;
				while(i <= units)
				{
					if(j%2 == 0)
					{
						tunits = tunits + 1;
						j=j+1;
					}
					i=i+1;
				}
			}
			else if (units > 300)
			{
				j=1;
				while(i <= units)
				{
					if(j%3 == 0)
					{
						tunits = tunits + 3;
						j=j+1;
					}
					i=i+1;
				}
			}
			return(tunits);		
		}
		void surcharges(int units_amount)
		{
			if(units_amount > 250)
			{
				
			    difference = units_amount - 250;
			    total_amount = units_amount + difference;
			    cout << "Bill amount is " << total_amount << endl;
			}
			else
			{
				cout << "Bill amount is " << units_amount << endl;
			}	
		}
};

int main()
{
	int units=0, Amount = 0;
	Electrity_charges ec;
	cout << "Enter the no.of units:  ";
	cin >> units;
    Amount = ec.charges(units);
	ec.surcharges(Amount);
	return 0;
}
