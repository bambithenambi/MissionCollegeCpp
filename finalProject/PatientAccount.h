#include <iostream>
using namespace std;

class PatientAccount
{
    private:
    double charges;
    int days;
    const double DAILY_RATE = 3500.00; //the rate must not change so it was made a const
    public:
        //Default constructor
        PatientAccount() { 
        days = 0;
        charges = 0.00;
        }
        
        //Get number of days in the hospital
        void setDays() { 
            cout << "How many days was the patient in the hospital? "; cin >> days;
            //validation
            while (days < 0)
            {  
                cout << "Days must be 0 or more. Please re-enter: "; cin >> days;
            }
            //update
            charges += days * DAILY_RATE;
        }

        //Modify charges
        //Only adds to exisiting total to prevent tampering
        void addCharges(double newCharge) {
        charges += newCharge;
        }

        //Returns charges
        double getCharges() {
        return charges;
        }
};