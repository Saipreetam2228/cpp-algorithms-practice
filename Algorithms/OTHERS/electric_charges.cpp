#include<iostream>
using namespace std;

class Electrity_charges
{
	public:
		int units=0, i=0, j=0;
		float  tunits=0.0, surcharge_amount=0.0, difference=0.0, paise=0.0, total_amount=0.0;
		void set()
		{
			cout << "Enter the no.of units:  ";
			cin >> units;
		}
		int charges()
		{
			if (units == 100)
			{
				tunits = 1.0;
			}
			else if (units < 100)
			{
				tunits = units / 100;	
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
		void surcharges(float units_amount)
		{
			if(units_amount > 250)
			{
				difference = units_amount - 250;
				surcharge_amount = 0.15 * difference;
				total_amount = units_amount + surcharge_amount;
				
			    cout << "Bill amount with surcharge is " << total_amount << endl;
			}
			else
			{
				cout << "Bill amount is " << units_amount << endl;
			}	
		}
};

int main()
{
	float Amount = 0.0;
	Electrity_charges ec;
	ec.set();
	Amount = ec.charges();
	ec.surcharges(Amount);
	return 0;
}
