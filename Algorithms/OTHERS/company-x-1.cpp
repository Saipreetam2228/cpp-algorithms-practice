#include <iostream>
using namespace std;

// Global variable to store total capital
double totalCapital;

// Class representing a sub-branch
class SubBranch {
private:
    string name;
    double requiredFunds;
public:
    // Constructor to initialize sub-branch details with user input
    SubBranch() {
        cout << "Enter branch name: ";
        cin >> name;
        cout << "Enter required funds for " << name << ": ";
        cin >> requiredFunds;
    }

    // Function to get required funds
    double getRequiredFunds() {
        return requiredFunds;
    }

    // Function to display branch details
    void displayBranch() {
        cout << "Branch " << name << " requires: " << requiredFunds << " Lakhs" << endl;
    }
};

// Main function
int main() {
    // Taking input for total capital before main
    cout << "Enter Total Capital (in Lakhs): ";
    cin >> totalCapital;

    int n;

    // Asking for the number of branches
    cout << "\nEnter the number of sub-branches: ";
    cin >> n;

    double totalAllocated = 0; // To track total allocated funds

    // Creating objects normally (without pointers)
    for (int i = 0; i < n; i++) {
        SubBranch branch; // Normal object creation (not using `new`)
        branch.displayBranch();
        totalAllocated += branch.getRequiredFunds();
    }

    // Calculating and displaying remaining capital
    totalCapital -= totalAllocated;
    cout << "\nRemaining Capital with the Company: " << totalCapital << " Lakhs" << endl;

    return 0;
}

