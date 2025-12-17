#include <iostream>
using namespace std;

class Programmer 
{
public:
    int Graduation, PostGraduation, Interview; // Marks for Graduation, Post-graduation, and Interview

    // Default constructor to initialize marks to 0
    Programmer() 
    {
        Graduation = 0;
        PostGraduation = 0;
        Interview = 0;
    }

    // Constructor to initialize marks
    Programmer(int g, int p, int i) 
    {
        Graduation = g;
        PostGraduation = p;
        Interview = i;
        if (Graduation < 60 || Graduation > 99 || PostGraduation < 60 || PostGraduation > 99 || Interview < 0 || Interview > 9) 
		{
            cout << "Invalid input! Please enter values within the specified range. " << endl;
            exit(0);
        }
    }
};

class TeamSelection 
{
public:
    Programmer p1, p2;

    // Constructor to initialize two programmers
    TeamSelection(Programmer pro1, Programmer pro2) 
    {
        p1 = pro1;
        p2 = pro2;
    }

    // Check if the team meets the selection criteria
    void CheckSelection() 
    {
        if ((p1.Graduation + p2.Graduation > 150) && (p1.PostGraduation + p2.PostGraduation > 180) && (p1.Interview + p2.Interview > 9)) 
        {
            cout << "Both programmers are selected!" << endl;
        }
        else 
        {
            cout << "One or both programmers do not meet the selection criteria." << endl;
        }
    }
};

int main() {
    int g1, p1, i1, g2, p2, i2;

    // Enter marks for two programmers
    cout << "Enter marks for Programmer 1 (Graduation, Post-graduation, Interview): ";
    cin >> g1 >> p1 >> i1;
    cout << "The marks are represented for Programmer 1 is  " << g1 << ".G + " << p1 << ".P + " << i1 << ".I " << endl;
    
    cout << "Enter marks for Programmer 2 (Graduation, Post-graduation, Interview): ";
    cin >> g2 >> p2 >> i2;
    cout << "The marks are represented for Programmer 2 is  " << g2 << ".G + " << p2 << ".P + " << i2 << ".I " << endl;

    // Create programmer objects
    Programmer P1(g1, p1, i1);
    Programmer P2(g2, p2, i2);

    // Create a Team object with the two programmers
    TeamSelection Team(P1, P2);

    // Check if both programmers meet the selection criteria
    Team.CheckSelection();

    return 0;
}

