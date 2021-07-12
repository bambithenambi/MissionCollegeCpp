#include <iostream>
#include <string>

using namespace std;
class Date {
        int month;
        int day;
        int year;
    public:
        Date(int aMonth, int aDay, int aYear) {
            month = aMonth;
            day = aDay;
            year = aYear;
        }

        void print1() {
            cout << month << "/" << day << "/" << year << endl;
        }
        void print2() {
            string m;
            switch(month) {
                case 1: m = "January"; break;
                case 2: m = "February"; break;
                case 3: m = "March"; break;
                case 4: m = "April"; break;
                case 5: m = "May"; break;
                case 6: m = "June"; break;
                case 7: m = "July"; break;
                case 8: m = "August"; break;
                case 9: m = "September"; break;
                case 10: m = "December"; break;
                case 11: m = "November"; break;
                case 12: m = "December"; break;   
            }
            cout << m << " " << day << ", " << year << endl;
        }
        void print3() {
            string m;
            switch(month) {
                case 1: m = "January"; break;
                case 2: m = "February"; break;
                case 3: m = "March"; break;
                case 4: m = "April"; break;
                case 5: m = "May"; break;
                case 6: m = "June"; break;
                case 7: m = "July"; break;
                case 8: m = "August"; break;
                case 9: m = "September"; break;
                case 10: m = "December"; break;
                case 11: m = "November"; break;
                case 12: m = "December"; break;   
            }
            cout << day << " " << m << " " << year << endl;
        }
};

int main() {
    int month, day, year, choice;
    cout << "Enter a date as shown mm dd yyyy: ";
    cin >> month >> day >> year;
    while (day>31 || day<1 || month>12 || month<1) {
        cout << "Invalid input.\nDate must be between 1 and 31\nMonth must be between 1 and 12" << endl;
        cout << "Enter a date as shown mm dd yyyy: ";
        cin >> month >> day >> year;
    }
    Date input(month, day, year);
    cout << "Chose your preferred format:" << endl;
    cout << "1: 12/25/2018" << endl;
    cout << "2: December 25, 2018" << endl;
    cout << "3: 25 December 2018" << endl;
    cout << "Any other integer will cause the program to quit" << endl;
    cin >> choice;
    switch(choice) {
        case 1: input.print1(); break;
        case 2: input.print2(); break;
        case 3: input.print3(); break;
    }
}