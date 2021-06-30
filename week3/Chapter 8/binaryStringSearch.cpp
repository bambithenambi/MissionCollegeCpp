#include <iostream>
#include <string>
using namespace std;
int binarySearch(string array[], string value, int size) {
    int first = 0,
        last = size-1,
        middle,
        position = -1;
    bool found = false;
    while (!found && first<=last) {
        middle = (first+last)/2;
        if (array[middle]==value){
            found = true;
            position = middle;
        }
        else if (array[middle]>value) {
            last = middle-1;
        }
        else{
            first = middle+1;
        }
    }
    return position;
}
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
    string first, last, name;
    cout << "Enter a first and last name to search: ";
    cin >> first >> last;
    name = last + ", " + first;
    int result = binarySearch(names, name, NUM_NAMES);
    if (result==-1) {
        cout << name << " was not found in the array" << endl;
    }
    else {
        cout << name << " was found in the array at the " << result << " index" << endl;
    }
	return 0;
}
