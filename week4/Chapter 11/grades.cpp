#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
using namespace std;
const int NAME_SIZE = 45;
struct Student
{
   char name[NAME_SIZE]; 
   int idNum;            
   int *tests;           
   double average;       
   char grade;           
};
Student *initArrays(int, int);
void getInfo(Student [], int, int);
void showInfo(Student [], int, int);
int main()
{
   int numStudents;  
   int numTests;     
   Student *list;    
   cout << "How many students? "; cin >> numStudents;
   cout << "How many tests per student? "; cin >> numTests;
   list = initArrays(numStudents, numTests);
   getInfo(list, numStudents, numTests);
   showInfo(list, numStudents, numTests);
   return 0;
}
Student *initArrays(int s, int t)
{
   Student *ptr;
   ptr = new Student[s];
   for (int count = 0; count < s; count++)
   {
      ptr[count].tests = new int[t];
   }
   return ptr;
}
void getInfo(Student s[], int ns, int nt)
{
   int total;
   for (int index = 0; index < ns; index++)
   {
      cin.get();
      cout << "Student name: ";
      cin.getline(s[index].name, 45);
      while (strlen(s[index].name) == 0)
      {
         cout << "Please enter a name: ";
         cin.getline(s[index].name, 45);
      }
      cout << "ID Number: "; cin >> s[index].idNum;
      while (s[index].idNum == 0)
      {
         cout << "Please enter an ID number other than 0: "; cin >> s[index].idNum;
      }
      total = 0;
      for (int t = 0; t < nt; t++)
      {
         cout << "\tTest # " << (t+1) << ": "; do { cin >> s[index].tests[t];
            if (s[index].tests[t] < 0)
               cout << "Enter 0 or greater.\n";
         } while(s[index].tests[t] < 0);
         total += s[index].tests[t];
      }
      s[index].average = static_cast<double>(total) / nt;
      if (s[index].average >= 91)
         s[index].grade = 'A';
      else if (s[index].average >= 81 && s[index].average <= 90) s[index].grade = 'B'; else if (s[index].average >= 71 && s[index].average <= 80) s[index].grade = 'C'; else if (s[index].average >= 61 && s[index].average <= 70)
         s[index].grade = 'D';
      else
         s[index].grade = 'F';
   }
}
void showInfo(Student s[], int ns, int nt)
{
   cout << fixed << showpoint << setprecision(1);
   for (int std = 0; std < ns; std++)
   {
      cout << "Student name: " << s[std].name << endl;
      cout << "ID number: " << s[std].idNum << endl;
      cout << "Average test score: " << s[std].average
           << endl;
      cout << "Grade: " << s[std].grade << endl << endl;
   }
}