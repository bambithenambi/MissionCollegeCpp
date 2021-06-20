#include <iostream>
using namespace std;

void getScore(int &score) {
    cout << "\nEnter a test score: ";
    cin >> score;
    while (score<0 || score>100) {
        cout << "\nPlease enter a valid test score between 0 and 100";
        cout << "\nEnter a test score: ";
        cin >> score;
    }
}
int findLowest(int score1, int score2, int score3, int score4, int score5) {
    int min;
    min = (score1<score2) ? score1 : score2;
    min = (min<score3) ? min : score3;
    min = (min<score4) ? min : score4;
    min = (min<score5) ? min : score5;
    return min;
}
void calcAverage(int score1, int score2, int score3, int score4, int score5) {
    int min = findLowest(score1, score2, score3, score4, score5);
    int average = (score1+score2+score3+score4+score5-min)/4;
    cout << "\nThe average is: " << average << endl;
}
int main() {
    int score1, score2, score3, score4, score5;
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    calcAverage(score1, score2, score3, score4, score5);
}