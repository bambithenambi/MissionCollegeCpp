#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
char mostFrequentChar(char *str) {
    const int ASCII_LEN = 128;
    int tracker[ASCII_LEN] = {0},
        len = strlen(str),
        max = 0;
    char result;
 
    for (int i=0; i<len; i++) {
        tracker[str[i]]++;
        if (max < tracker[str[i]]) {
            max = tracker[str[i]];
            result = str[i];
        }
    }
    return result;
}
int main() {
    const int SIZE = 160;
    char line[SIZE], *str, result;
    cout << "Enter a sentence of no more than " << (SIZE-1) << " characters:" << endl;
    cin.getline(line, SIZE);
    str = &line[0];
    result = mostFrequentChar(str);
    
    cout << "This is the most common character in your sentence: ";
    if (isspace(result)) {
        cout << "whitespace";
    }
    else {
        cout << result;
    }
    cout << endl;
}