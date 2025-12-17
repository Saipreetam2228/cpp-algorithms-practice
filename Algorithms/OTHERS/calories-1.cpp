#include <iostream>
using namespace std;

class Food 
{
	string fn;
    int c; 
    int a;
    double tc;
    public:
    	
    	void set()
		{
			cout << "Enter the name of the food do you ate: ";
			cin >> fn;
			if (fn == "Pizza")
			{
				cout << "Calories of the pizza is 285 calories. " << endl;
				c = 285;
			}
			else if (fn == "Chocolate")
			{
				cout << "Calories of the chocolate is 546 calories. " << endl;
				c = 546;
			}
			else if (fn == "Ice cream")
			{
				cout << "Calories of the ice cream is 207 calories. " << endl;
				c = 207;
			}
				
			if (fn == "Pizza")
			{
				cout << "How many slices do you ate? ";
				cin >> a;
			}
			else if (fn == "Chocolate")
			{
				cout << "How many chocolate pieces do you ate? ";
				cin >> a;
			}
			else if (fn == "Ice cream")
			{
				cout << "How many cups do you ate? ";
				cin >> a;
			}
		}
		
		void total_calories()
		{
			tc = c / a;
		}
			
		void display()
		{
			if (fn == "Pizza")
			{
				cout << "The food is Pizza with " << a << " slices, then the total calories is " << tc << ". " << endl;
			}
			else if (fn == "Chocolate")
			{
				cout << "The food is Chocolate with " << a << " pieces, then the total calories is " << tc << ". " << endl;
			}
			else if (fn == "Ice cream")
			{
				cout << "The food is Ice cream with " << a << " cups, then the total calories is " << tc << ". " << endl;;
	        }  
	    } 
};

int main() 
{
    Food f;
    f.set();
    f.display();
    return 0;
}

