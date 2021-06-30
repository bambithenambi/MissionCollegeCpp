#include <iostream>
#include <string>
using namespace std;
void selectionSort(string items[], int size) {
    int minIndex;
    string minString;
    for (int i=0; i<(size-1); i++){
        minIndex = i;
        minString = items[i];
        for (int j=i+1; j<size; j++) {
            if (items[j]<minString) {
                minString = items[j];
                minIndex = j;
            }
        }
        swap(items[minIndex], items[i]);
    }
}
int main()
{
	const int NUM_NAMES = 20;
	string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                               "Looney, Joe", "Wolfe, Bill", "James, Jean",
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                               "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };
	// Insert your code to complete this program
    selectionSort(names, NUM_NAMES);
    for (string s : names) {
        cout << s << endl;
    }
	return 0;
}
