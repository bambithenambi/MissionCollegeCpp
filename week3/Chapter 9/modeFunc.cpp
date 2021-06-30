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
int mode(int array[], int size) {
    int *ptr, 
        modeValue = -1,
        modeCount = 1, 
        currentCount = 1;
    ptr = array;
    selectionSort(array, size); //already implemented so omitted to save space
    for (int i=0; i<(size-1); i++) {
        if (*(ptr+i)==*(ptr+1+i)) {
            currentCount++;
        }
        else {
            if (currentCount>modeCount) {
                modeCount = currentCount;
                modeValue = *(ptr+i);
            }
            currentCount = 1;
        }
    }
    return modeValue;
}
int main() {
    srand(time(NULL));
    int size, maxValue, result;
    int* array;
    array = new int[size];
    cout << "How large of an array would you like to test on: ";
    cin >> size;
    cout << "Enter the max value you want in your array: ";
    cin >> maxValue;
    maxValue++;
    array = new int[size];
    for (int i=0; i<size; i++) {
        array[i] = rand()%maxValue;
    }
    result = mode(array, size);
    for (int i=0; i<size; i++) {
        cout << array[i] << endl;
    }
    cout << "The mode of your array is " << result << endl;
}