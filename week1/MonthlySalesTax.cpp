#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() {
    string month;
    cout << "Month: ";
    getline(cin, month);

    int year;
    cout << "Year: ";
    cin >> year;

    double collected;
    cout << "Total amount collected: $ ";
    cin >> collected;

    double sales = collected/1.06;
    double totalTax = collected-sales;
    double countyTax = (totalTax/3);
    double stateTax = (totalTax/3)*2;

    cout << "Month: " << month << endl;
    cout << "\n------------------------\n";
    cout << setprecision(2) << fixed;
    cout << "\nTotal Collected:" << setw(8) << "$" << setw(9) << collected << endl;
    cout << "\nSales" << setw(19) << "$" << setw(9) << sales << endl;
    cout << "\nCounty Sales Tax:" << setw(7) << "$" << setw(9) << countyTax << endl;
    cout << "\nState Sales Tax:" << setw(8) << "$" << setw(9) << stateTax << endl;
    cout << "\nTotal Sales Tax:" << setw(8) << "$" << setw(9) << totalTax << endl;
}