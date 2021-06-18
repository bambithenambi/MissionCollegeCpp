#include <iostream>

using namespace std;
int main() {
    int month, day, year;
    cout << "Enter a numeric month, day, and two-digit year separated by spaces: " << endl;
    cin >> month >> day >> year;

    if (month*day==year) {
        cout << "The date is magic!" << endl;
    }
    else {
        cout << "The date is not magic" << endl;
    }
}