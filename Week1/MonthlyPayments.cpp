#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    double rate;
    int n;
    double l;

    cout << "Loan Amount:" << endl;
    cin >> l;
    cout << "Monthly Interest Rate:" << endl;
    cin >> rate;
    cout << "Number of payments:" << endl;
    cin >> n;

    double monthlyPayment = l*(rate*pow((1+rate), n))/(pow((1+rate), n)-1);
    double payment = monthlyPayment*n;
    double interestPaid = payment-l;

    cout << setprecision(2) << fixed;
    cout << "\nLoan Amount:" << setw(8) << "$" << setw(9) << l << endl;
    cout << "\nMonthly Interest Rate:" << setw(6) << rate*100 << "%" << endl;
    cout << "\nNumber of Payments:" << setw(10) << n << endl;
    cout << "\nMonthly Payment:" << setw(4) << "$" << setw(9) << monthlyPayment << endl;
    cout << "\nAmount Paid Back:" << setw(3) << "$" << setw(9) << payment << endl;
    cout << "\nInterest Paid:" << setw(6) << "$" << setw(9) << interestPaid << endl;
}