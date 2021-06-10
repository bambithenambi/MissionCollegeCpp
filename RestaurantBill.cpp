#include <iostream>

using namespace std;
int main() {
    double CHARGE = 88.67;
    const double TAX_RATE = 0.0675;
    const double TIP_RATE = 0.2;

    cout << "Meal cost: " << CHARGE << endl;

    double taxAmt = CHARGE*TAX_RATE;
    cout << "Tax amount: " << taxAmt << endl;
    
    CHARGE += taxAmt;
    double tipAmt = CHARGE*TIP_RATE;
    cout << "Tip amount: " << tipAmt << endl;

    CHARGE += tipAmt;
    cout << "Total bill: " << CHARGE << endl;    
}