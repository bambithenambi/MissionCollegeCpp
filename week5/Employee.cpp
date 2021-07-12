#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
    Employee 
        s("Susan Meyers", 47899, "Accounting", "Vice President"),
        m("Mark Jones", 39119, "IT", "Programmer"),
        j("Joy Rogers", 81774, "Manufacturing", "Engineer");
    cout << "Employee " << s.getIdNumber() << ", " << s.getName() << " is a(n) " << s.getPosition() << " in " << s.getDepartment() << endl;
    cout << "Employee " << m.getIdNumber() << ", " << m.getName() << " is a(n) " << m.getPosition() << " in " << m.getDepartment() << endl;
    cout << "Employee " << j.getIdNumber() << ", " << j.getName() << " is a(n) " << j.getPosition() << " in " << j.getDepartment() << endl;
}