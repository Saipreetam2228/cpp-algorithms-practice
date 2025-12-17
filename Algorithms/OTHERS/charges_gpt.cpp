#include <iostream>
using namespace std;

class ElectricityCharges {
public:
    int units;          // Number of units
    float totalCost;    // Total cost of units
    float surchargeAmount;  // Surcharge amount if applicable
    float finalAmount;      // Final bill amount after surcharge if applicable

    // Constructor to initialize variables
    ElectricityCharges() {
        units = 0;
        totalCost = 0.0;
        surchargeAmount = 0.0;
        finalAmount = 0.0;
    }

    // Method to get the input from user for units
    void setUnits() {
        cout << "Enter the number of units: ";
        cin >> units;
    }

    // Method to calculate the cost based on the unit conditions
    void calculateCharges() {
        if (units <= 100) {
            totalCost = units * 0.50;  // 50 paise per unit for the first 100 units
        }
        else if (units > 300) {
            totalCost = 100 * 0.50 + (units - 300) * 0.60;  // First 100 units at 50 paise, beyond 300 at 60 paise
        }
    }

    // Method to calculate surcharge if the cost exceeds 250
    void calculateSurcharge() {
        if (totalCost > 250) {
            surchargeAmount = (totalCost - 250) * 0.15;  // 15% surcharge on amount exceeding 250
            finalAmount = totalCost + surchargeAmount;
        }
        else {
            finalAmount = totalCost;
        }
    }

    // Method to display the final result
    void displayBill() {
        cout << "Total cost before surcharge: " << totalCost << endl;
        if (surchargeAmount > 0) {
            cout << "Surcharge applied: " << surchargeAmount << endl;
            cout << "Final bill amount with surcharge: " << finalAmount << endl;
        }
        else {
            cout << "Final bill amount: " << finalAmount << endl;
        }
    }
};

int main() {
    ElectricityCharges ec;  // Create object of ElectricityCharges class
    ec.setUnits();          // Get user input for units
    ec.calculateCharges();  // Calculate the charges based on units
    ec.calculateSurcharge(); // Apply surcharge if applicable
    ec.displayBill();       // Display the final bill

    return 0;
}

