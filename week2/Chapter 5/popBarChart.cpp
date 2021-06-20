#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    int year;
    int currentPopulation;
    int asterisks;
    int remainder;
    ifstream inputFile;
    inputFile.open("People.txt");
    
    cout << "\nPRAIRIEVILLE POPULATION GROWTH\n" << endl;
    cout << "(each * represents 1,000 people)\n" << endl;

    if (inputFile) {
        while (inputFile >> year) {
            inputFile >> currentPopulation;
            remainder = currentPopulation%1000;
            asterisks = (remainder<500) ? (currentPopulation-remainder)/1000 : (currentPopulation-remainder)/1000+1;
            cout << year << " ";
            for (int i=0; i<asterisks; i++) {
                cout << "*";
            }
            cout << "\n" <<endl;
        }
    }
}