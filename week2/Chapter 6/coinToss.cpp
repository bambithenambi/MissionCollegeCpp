#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;
int main() {
    srand(time(NULL));
    int flips;
    int tossValue;
    cout << "How many times would you like to flip the coin?" << endl;
    cin >> flips;
    for (int i=0; i<flips; i++) {
        tossValue = rand()%2+1;
        string result = (tossValue==1) ? "heads" : "tails";
        cout << result << endl;
    }
}