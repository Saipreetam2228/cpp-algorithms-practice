#include <iostream>
using namespace std;

class Programmer {
public:
    int G, P, I; // Graduation, Post-graduation, Interview scores
    
    void getInput() {
        cout << "Enter marks for Graduation (60-99): ";
        cin >> G;
        cout << "Enter marks for Post-graduation (60-99): ";
        cin >> P;
        cout << "Enter marks for Interview (0-9): ";
        cin >> I;
        
        // Validate input
        if (G < 60 || G > 99 || P < 60 || P > 99 || I < 0 || I > 9) {
            cout << "Invalid input! Please enter values within the specified range.\n";
            exit(0);
        }
    }
};

class Team {
private:
    Programmer p1, p2;

public:
    void formTeam() {
        cout << "Enter details for Programmer 1:\n";
        p1.getInput();
        cout << "Enter details for Programmer 2:\n";
        p2.getInput();
    }

    void evaluateTeam() {
        int totalG = p1.G + p2.G;
        int totalP = p1.P + p2.P;
        int totalI = p1.I + p2.I;

        cout << "Total Graduation Score: " << totalG << "\n";
        cout << "Total Post-graduation Score: " << totalP << "\n";
        cout << "Total Interview Score: " << totalI << "\n";

        if (totalG > 150 && totalP > 180 && totalI > 9) {
            cout << "The team is selected!\n";
        } else {
            cout << "The team is NOT selected.\n";
        }
    }
};

int main() {
    Team team;
    team.formTeam();
    team.evaluateTeam();
    return 0;
}

