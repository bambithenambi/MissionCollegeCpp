#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int binarySearch(int array[], int value, int size) {
    int first = 0,
        last = size-1,
        middle,
        comp = 0;
    bool found = false;
    while (!found && first<=last) {
        middle = (first+last)/2;
        comp++;
        if (array[middle]==value){
            found = true;
        }
        else if (array[middle]>value) {
            comp++;
            last = middle-1;
        }
        else {
            comp++;
            first = middle+1;
        }
    }
    return comp;
}
int linearSearch(int array[], int value, int size) {
    for (int comp=0; comp<size; comp++) {
        if (array[comp]==value) {
            return comp+1;
        }
    }
    return -1;
}
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
int main() {
    srand(time(NULL));
    int size, binaryComp, linearComp, value, testIndex;
    cout << "How large of an array would you like to benchmark on: ";
    cin >> size;
    int* array;
    array = new int[size];
    for (int i=0; i<size; i++) {
        array[i] = rand();
    }
    testIndex = rand()%size;
    value = array[testIndex];
    selectionSort(array, size);
    binaryComp = binarySearch(array, value, size);
    cout << "Binary search comparisons: " << binaryComp << endl;
    linearComp = linearSearch(array, value, size);
    cout << "Linear search comparisons: " << linearComp << endl;
}