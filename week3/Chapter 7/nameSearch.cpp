#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool checkForName(string names[], string name) {
    const int SIZE = 200;

    for (int i=0; i<SIZE; i++) {
        if (names[i] == name)
            return true;
    }
    return false;
}
int main() {
    string boyNames[200];
    string girlNames[200];
    string name;
    string boyName;
    string girlName; 
    int boyCounter = 0;
    int girlCounter = 0;
    ifstream boyFile;
    ifstream girlFile;
    boyFile.open("BoyNames.txt");
    girlFile.open("GirlNames.txt");

    cout << "Enter a boy's name: ";
    cin >> boyName;
    cout << "\nEnter a girl's name: ";
    cin >> girlName;

    if (boyFile) {
        while (boyFile >> name) {
            boyNames[boyCounter++] = name;
        }
    }
    if (girlFile) {
        while (girlFile >> name) {
            girlNames[girlCounter++] = name;
        }
    }

    cout << "\nThe boy's name was ";
    if (!checkForName(boyNames, boyName)) 
        cout << "not ";
    cout << "among the most popular in the U.S.\n" << endl;

    cout << "The girl's name was ";
    if (!checkForName(girlNames, girlName)) 
        cout << "not ";
    cout << "among the most popular in the U.S." << endl;
}