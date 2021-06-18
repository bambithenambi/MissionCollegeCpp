#include <iostream>

using namespace std;
int main() {
    int years;
    cout << "Enter the number of years: ";
    cin >> years;
    while (years<1) {
        cout << "\nERROR! Values less than 1 not accepted! Please try again." << endl;
        cout << "Enter the number of years (positive integers only): ";
        cin >> years;
    }
    int months = years*12;
    
    double totalInches = 0.0;

    for (int i=0; i<years; i++) {
        for (int i=0; i<12; i++) {
            double inches;
            cout << "\nEnter inches of rainfall for the month: ";
            cin >> inches;        
            while (inches<0) {
                cout << "\nERROR! Negative values not accepted! Please try again." << endl;
                cout << "\nEnter inches of rainfall for the month: ";
                cin >> inches;        
            }
            
            totalInches+=inches;
        }
    }
    cout << "\n\nNumber of months: " << months << endl;
    cout << "Total inches of rainfall: " << totalInches << endl;
    cout << "Average inches of rainfall: " << totalInches/months << endl;
}