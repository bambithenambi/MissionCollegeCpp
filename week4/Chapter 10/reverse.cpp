#include <iostream>
#include <cstring>
using namespace std;
void reverse(char *str) {
    for(int i=strlen(str)-1; i>=0; i--)
        cout << str[i];
}
int main() {
    const int SIZE = 80;
    char line[SIZE], *str;
    

    cout << "Enter a sentence of no more than " << (SIZE-1) << " characters:" << endl;
    cin.getline(line, SIZE);
    str = &line[0];
    cout << "This is your reversed sentence:" << endl;
    reverse(str);

    
}