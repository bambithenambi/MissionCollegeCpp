#include <iostream>
#include <iomanip>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"
using namespace std;

//function prototypes
int getSurgeryType();
int getMedicationType();

int main() {
    int surgeryType,         //holds the type of surgery
        medicationType;      //holds the type of medication
    PatientAccount patient;  //create a PatientAccount object
    Surgery surgery;         //create a Surgery object
    Pharmacy pharmacy;       //create a Pharmacy object

    cout << "\n\nPatient Release Menu\n\n";          
    //get the surgery and medication types.
    surgeryType = getSurgeryType();
    medicationType = getMedicationType();

    surgery.updateAccount(patient, surgeryType); //updates charges with cost of surgery
    pharmacy.updateAccount(patient, medicationType); //updates charges with cost of medication
    patient.setDays(); //sets length of patient stay and adds daily room rate onto charges
    
    cout << fixed << showpoint << setprecision(2);
    cout << "\nPatient Charges:  " << patient.getCharges() << "\n\n";
    return 0;
}

//returns choice of medicine from user input
int getSurgeryType() {
    //stores user's choice as integer
    int choice;
    //display the types of surgery 
    cout << "\nTypes of Surgery We Perform\n";
    cout << "---------------------------\n";
    cout << "1 - Tonsillectomy\n";
    cout << "2 - Appendectomy\n";
    cout << "3 - Cataract Replacement\n";
    cout << "4 - Cesarean Section\n";
    cout << "5 - Neural Rewire\n\n";
    cout << "Choose a type of Surgery (1-5): ";
    cin >> choice;
    //input validation from 1-5
    while (choice < 1 || choice > 5) {
        cout << "! Legal values are from 1-5 ! Please re-enter a surgery type: ";
        cin >> choice;
    }

    return choice;
}

//returns choice of medicine from user input
int getMedicationType() {
    //stores user's choice as integer 
    int choice;
    //display the types of medication
    cout << "\nTypes of Medication Available:\n";
    cout << "---------------------------------\n";
    cout << "1 - Laxative\n";
    cout << "2 - Antibiotic\n";
    cout << "3 - Anti-inflamatory\n";
    cout << "4 - Anti-Histhamine\n";
    cout << "5 - Strong Narcotic Painkiller\n\n";
    cout << "Choose a type of medication (1-5): ";
    cin >> choice;
    //input validation from 1-5
    while (choice < 1 || choice > 5) {
        cout << "! Legal values are from 1-5 ! Please re-enter a medication type: ";
        cin >> choice;
    }
    return choice;
}