#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;
    
    double dollars;
    cout << "Enter a Dollar amount: ";
    cin >> dollars;
    
    double yen = dollars*YEN_PER_DOLLAR;
    double euros = dollars*EUROS_PER_DOLLAR;

    cout << setprecision(2) << fixed;
    cout << "In Yen: " << yen << endl;
    cout << "In Euros: " << euros << endl;
}