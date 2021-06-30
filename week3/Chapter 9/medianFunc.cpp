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
double median(int array[], int size){
    double a;
    int *ptr;
    ptr = array;
    if (size%2==0) {
        double b, c;
        a = *(ptr+(size/2)-1);
        b = *(ptr+(size/2));
        c = (double) (a+b)/2.0;
        return c;        
    }
    else {
        a = *(ptr+(size/2));
        return a;
    }
}
int main() {
    srand(time(NULL));
    double result;
    int size, maxValue;
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
    selectionSort(array, size);
    result = median(array, size);
    for (int i=0; i<size; i++) {
        cout << array[i] << endl;
    }
    cout << "The median of your array is " << result << endl;
}