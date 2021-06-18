#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    double balance;
    int checks;
    double fee = 0.0;
    cout << "Enter a beginning balance and the number of checks written: " << endl;
    cin >> balance >> checks;
    if (balance<0) {
        cout << "ACCOUNT OVERDRAWN!" << endl;
        return 0;
    }
    while (checks<0) {
        cout << "\nERROR! Number of checks must be nonnegative! Please try again." << endl;
        cout << "\nEnter number of checks written: ";
        cin >> checks;        
    }
    if (balance<400) {
        fee+=15;
    }
    if (checks<20) {
        fee+=checks*0.10;
    }
    else if (checks<40) {
        fee+=checks*0.08;
    }
    else if (checks<60) {
        fee+=checks*0.06;
    }
    else {
        fee+=checks*0.04;
    }
    cout << setprecision(2) << fixed;
    cout << "The service fees for this month are: $" << fee << endl;
}