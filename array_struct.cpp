#include <iostream>
#include <iomanip>
using namespace std;

// This program demonstrates how to use an array of structures

// Last Modified Date: 5/15/2024

// Declare a structure called taxPayer that has three
// members: taxRate, income, and taxes – each of type float
struct taxPayer {
    float taxRate;
    float income;
    float taxes;
};

int main() {
    // Define an array named citizen which holds 5 taxPayer structures
    taxPayer citizen[5];

    cout << fixed << showpoint << setprecision(2);

    cout << "Please enter the annual income and tax rate for 5 tax payers: ";
    cout << endl << endl << endl;

    for (int count = 0; count < 5; count++) {
        cout << "Enter this year's income for tax payer " << (count + 1) << ": ";
        // Read in the income to the appropriate place
        cin >> citizen[count].income;

        cout << "Enter the tax rate for tax payer #" << (count + 1) << ": ";
        // Read in the tax rate to the appropriate place
        cin >> citizen[count].taxRate;

        // Compute the taxes for the citizen and store it in the appropriate place
        citizen[count].taxes = citizen[count].income * citizen[count].taxRate;

        cout << endl;
    }

    cout << "Taxes due for this year: " << endl << endl;

    // Loop to output the tax information
    for (int index = 0; index < 5; index++) {
        cout << "Tax Payer # " << (index + 1) << ": " << "$ "
             << citizen[index].taxes << endl;
    }

    return 0;
}
