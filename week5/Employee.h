#include <iostream>
#include <string>

using namespace std;
class Employee {
    private:
        string name;
        string department;
        string position;
        int idNumber;
    public:
        Employee() : Employee("", 0) {}
        Employee(string aName, int aIdNumber) : Employee(aName, aIdNumber, "", "") {}
        Employee(string aName, int aIdNumber, string aDepartment, string aPosition) {
            name = aName;
            idNumber = aIdNumber;
            department = aDepartment;
            position = aPosition;
        }
        //mutators
        void setName(string aName) {
            name = aName;
        }
        void setDepartment(string aDepartment) {
            department = aDepartment;
        }
        void setPosition(string aPosition) {
            position = aPosition;
        }
        void setIdNumber(int aIdNumber) {
            idNumber = aIdNumber;
        }
        //acessors
        const string getName(){
            return name;         
        }
        const string getDepartment(){
            return department;
        }
        const string getPosition(){
            return position;
        }
        const int getIdNumber(){
            return idNumber;
        }
};