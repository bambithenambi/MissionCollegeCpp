#include "PatientAccount.h"
 
class Pharmacy {
    private:
        //medicine Prices
        double med1,
        med2,
        med3,
        med4,
        med5;
    public:
        //Default constructor
        //Sets prices for the 5 types of medicine
        Pharmacy() {        
            med1 = 10.00;   
            med2 = 20.00;
            med3 = 30.00;
            med4 = 40.00;
            med5 = 100.00;
        }

        /*
        Charges account according to the medication selected and it's price
        Accepts a PatientAccount object and a selection for a medicine
        PatientAccount object is pass by reference so function can call addCharges
        to update the charge of the patient and changes will
        be reflected outside the scope of updateAccount
        */
        void updateAccount(PatientAccount &patient, int medChoice) {
            //using switch statement to select which medicine to charge based on the user input medChoice
            switch (medChoice) {  
                case 1:  
                    patient.addCharges(med1);
                    break;
                case 2:  
                    patient.addCharges(med2);
                    break;
                case 3:  
                    patient.addCharges(med3);
                    break;
                case 4:  
                    patient.addCharges(med4);
                    break;
                case 5:  
                    patient.addCharges(med5);
                    break;
                //Don't charge the account if no listed medication was selected
            }
        }
};
