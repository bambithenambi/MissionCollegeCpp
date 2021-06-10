#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int main() {
    srand(time(NULL));
    int a = rand()%1000+1;
    int b = rand()%a+1;
    int c = a+b;
    string input;
    cout << "Press enter to reveal the answer.\n\n";
    cout << " " << setw(3) << a << endl;
    cout << "+" << setw(3) << b << endl;
    cout << "‾‾‾‾";
    cin.get();
    cout << setw(4) << c << endl;
}