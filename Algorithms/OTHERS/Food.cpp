#include <iostream>
using namespace std;

class Food 
{
	string food;
    int c; 
    int a;
    double tc;
    public:
    	
    	void set()
		{
			cout << "Enter the name of the food do you ate (Only pizza or chocolate or ice cream): ";
			cin >> food;
			if (food == "Pizza")
			{
				cout << "Calories of the pizza is 285 calories. " << endl;
				c = 285;
				cout << "How many slices do you ate? ";
				cin >> a;
			}
			else if (food == "Chocolate")
			{
				cout << "Calories of the chocolate is 546 calories. " << endl;
				c = 546;
				cout << "How many chocolate pieces do you ate? ";
				cin >> a;
			}
			else if (food == "Ice cream")
			{
				cout << "Calories of the ice cream is 207 calories. " << endl;
				c = 207;
				cout << "How many cups do you ate? ";
				cin >> a;
			}
		}
		
		void total_calories()
		{
			tc = c * a;
		}
			
		void display()
		{
			if (food == "Pizza")
			{
				cout << "The food is Pizza with " << a << " slices, then the total calories is " << tc << ". " << endl;
			}
			else if (food == "Chocolate")
			{
				cout << "The food is Chocolate with " << a << " pieces, then the total calories is " << tc << ". " << endl;
			}
			else if (food == "Ice cream")
			{
				cout << "The food is Ice cream with " << a << " cups, then the total calories is " << tc << ". " << endl;;
	        }  
	    } 
};

int main() 
{
    Food f;
    f.set();
    f.total_calories();
    f.display();
    return 0;
}

