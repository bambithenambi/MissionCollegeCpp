#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
void selectionSort(int items[], int size) {
    int minIndex;
    int minValue;
    for (int i=0; i<(size-1); i++){
        minIndex = i;
        minValue = items[i];
        for (int j=i+1; j<size; j++) {
            if (items[j]<minValue) {
                minValue = items[j];
                minIndex = j;
            }
        }
        swap(items[minIndex], items[i]);
    }
}
int * elementShifter(int array[], int size){
    int* ptr;
    ptr = array;
    int* newArray;
    newArray = new int[size+1];
    *newArray = 0;
    for (int i=1; i<(size+1); i++) {
        *(newArray+i) = *(ptr+i-1);
    }
    return newArray;

}
int main() {
    srand(time(NULL));
    int* result;
    int size, maxValue, current;
    int* array;
    array = new int[size];
    cout << "How large of an array would you like to test on: ";
    cin >> size;
    cout << "Enter the max value you want in your array: ";
    cin >> maxValue;
    maxValue++;
    array = new int[size];
    for (int i=0; i<size; i++) {
        current = rand()%maxValue;
        array[i] = current;
        cout << *(array+i) << endl;
    }

    result = elementShifter(array, size);
    cout << "\nShifted: "<< endl;
    for (int i=0; i<(size+1); i++) {
        cout << *(result+i) << endl;
    }
}