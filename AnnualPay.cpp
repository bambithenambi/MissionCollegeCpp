#include <iostream>

using namespace std;
int main() {
    const double payAmount = 2200.0;
    const int payPeriods = 26;
    double annualPay;

    annualPay = payAmount*payPeriods;
    cout << "Total annual pay: " << annualPay << endl;
}