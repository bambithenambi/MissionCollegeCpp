#include "PatientAccount.h"

class Surgery {
    private:
        //rates for each type of surgery
        double surgery1,
        surgery2,
        surgery3,
        surgery4,
        surgery5;
    public:
        //Default constructor
        //Sets rates for the 5 types of surgery
        Surgery() {
            surgery1 = 1100.00; 
            surgery2 = 2300.00;
            surgery3 = 3500.00;
            surgery4 = 4700.00;
            surgery5 = 9500.00;
        }

        /*
        Charges account according to the surgery selected and it's rate
        Accepts a PatientAccount object and a selection for a surgery
        PatientAccount object is pass by reference so function can call addCharges
        to update the charge of the patient and changes will
        be reflected outside the scope of updateAccount
        */
        void updateAccount(PatientAccount &patient, int surgeryChoice) {
            //using switch statement to select which surgery to charge based on the user input surgeryChoice
            switch (surgeryChoice) {
                case 1:
                    patient.addCharges(surgery1);
                    break;
                case 2:
                    patient.addCharges(surgery2);
                    break;
                case 3:
                    patient.addCharges(surgery3);
                    break;
                case 4:
                    patient.addCharges(surgery4);
                    break;
                case 5:
                    patient.addCharges(surgery5);
                    break;
                //Don't charge the account if no listed surgery was selected
            }
        }
};