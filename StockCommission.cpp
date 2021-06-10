#include <iostream>

using namespace std;
int main() {
    int shares = 750;
    double price = 35.0;
    const double COMMISSION = 0.02;

    double subtotal = shares*price;
    cout << "Cost to purchase stock: $" << subtotal << endl;

    double commissionAmt = subtotal*COMMISSION;
    cout << "Amount of commission: $" << commissionAmt << endl;

    subtotal+=commissionAmt;
    cout << "Total amount paid: $" << subtotal << endl;
}