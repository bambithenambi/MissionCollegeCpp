#include <iostream>

using namespace std;
int main() {
    cout << "Enter a series of integers one by one. To stop at any time, please enter \'-99\'" << endl;
    int min, max;
    int current;
    cout << "Make an entry: ";
    cin >> current;
    min = current;
    max = current;
    while (true) {
        cout << "Make an entry: ";
        cin >> current;
        if (current==-99) {
            cout << "\nThe largest integer entered was: " << max << endl;
            cout << "The smallest integer entered was: " << min << endl;
            return 0;
        }
        if (current > max) {
            max = current;
        }
        else if (current < min) {
            min = current;
        }
    }
}