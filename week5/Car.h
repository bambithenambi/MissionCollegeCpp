#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        int yearModel;
        int speed;
        string make;
    public:
        Car(int aYearModel, string aMake) {
            yearModel = aYearModel;
            make = aMake;
            speed = 0;
        }
        //accessors
        const int getSpeed() {
            return speed;
        }
        const int getYearModel() {
            return yearModel;
        }
        const string getMake() {
            return make;
        }
        void accelerate() {
            speed+=5;
        }
        void brake() {
            speed-=5;
        }
};