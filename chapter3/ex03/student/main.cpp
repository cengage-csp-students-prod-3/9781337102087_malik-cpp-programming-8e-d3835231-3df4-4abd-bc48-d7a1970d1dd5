// This program converts the weight of a person from kilograms
// to pounds.

// Date: 9/1/2025
#include <iostream>

using namespace std;

int main() {
    // Write your main here
    double kg = 0.0;
    double ibs = 0.0;
    const double CONVERSION = 2.2;

    // Prompt user to enter weight in kilogram

    cout << "Enter your weight in kilograms." << endl;
    cin >> kg;

    ibs = CONVERSION * kg;
    
    // Display the person's weight in pounds

    cout << "Your weight is " << ibs << " ibs" << endl;
    return 0;
}