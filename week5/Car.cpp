#include "Car.h"
#include <iostream>
using namespace std;
int main() {
    Car entry(2024, "Tesla");
    for (int i=0; i<5; i++) {
        entry.accelerate();
        cout << "Current Speed: " << entry.getSpeed() << endl;
    }
    for (int i=0; i<5; i++) {
        entry.brake();
        cout << "Current Speed: " << entry.getSpeed() << endl;
    }
}