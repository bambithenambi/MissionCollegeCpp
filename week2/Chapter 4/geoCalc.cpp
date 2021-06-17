#include <iostream>
#include <iomanip>
const double PI = 3.14159;
using namespace std;
int main() {
    int choice;
    cout << "\nGeometry Calculator\n" << endl;;
    cout << setw(6) << "1. " << " Calculate the Area of a Circle\n" << endl;
    cout << setw(6) << "2. " << " Calculate the Area of a Rectangle\n" << endl;
    cout << setw(6) << "3. " << " Calculate the Area of a Triangle\n" << endl;
    cout << setw(6) << "4. " << " Quit\n" << endl;
    cout << "   Enter your choice (1234): ";
    cin >> choice;

    switch(choice) {
        case 1:
            double radius;
            cout << "\nEnter the radius: ";
            cin >> radius;
            cout << setprecision(4) << fixed;
            cout << "\nArea of Circle: " << radius*radius*PI << endl;
            break;
        
        case 2:
            double length, width;
            cout << "\nEnter a length and width: ";
            cin >> length >> width;
            cout << setprecision(4) << fixed;
            cout << "\nArea of Rectangle: " << length*width << endl;
            break;

        case 3:
            double base, height;
            cout << "\nEnter a base and height: ";
            cin >> base >> height;
            cout << setprecision(4) << fixed;
            cout << "\nArea of Rectangle: " << base*height*0.5 << endl;
            break;
        
        case 4:
            return 1;
        
        default:
            cout << "\nERROR! You must enter a number from 1 to 4" << endl;
            return 0;
    }
}