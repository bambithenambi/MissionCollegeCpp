#include <iostream>

using namespace std;
int main() {
    const double item1 = 15.95;
    cout << "Price of item 1 = $" << item1 << endl;
    const double item2 = 24.95;
    cout << "Price of item 2 = $" << item2 << endl;
    const double item3 = 6.95;
    cout << "Price of item 3 = $" << item3 << endl;
    const double item4 = 12.95;
    cout << "Price of item 4 = $" << item4 << endl;
    const double item5 = 3.95;
    cout << "Price of item 5 = $" << item5 << endl;

    const double SALES_TAX_RATE = 0.07;

    double subtotal = item1+item2+item3+item4+item5;
    cout << "The subtotal is: $" << subtotal << endl;

    double salesTaxAmt = subtotal*SALES_TAX_RATE;
    cout << "Sales tax: $" << salesTaxAmt << endl;

    subtotal+=salesTaxAmt;
    cout << "Total: $" << subtotal << endl;
}