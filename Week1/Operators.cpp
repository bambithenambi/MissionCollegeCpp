#include <iostream>

using namespace std;

int main() {
    int timeInSec;
    int hours;
    int minutes;
    int seconds;

    cout << "Enter the total time in seconds: ";
    cin >> timeInSec;
    hours = timeInSec/3600;
    timeInSec -= hours*3600;
    minutes = timeInSec/60;
    seconds = timeInSec%60;

    cout << "Number of" << endl;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
}