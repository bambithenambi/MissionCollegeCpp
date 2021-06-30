#include <iostream>
using namespace std;
bool equal(char a, char b, char c, char d) {
    if (a==b) {
        if (b==c) {
            if (c==d)
                return true;
        }
    }
    return false;
}
bool gameOver(char board[3][3]) {
    //check diagonals
    if (equal(board[0][0], board[1][1], board[2][2], 'X') || equal(board[0][2], board[1][1], board[2][0], 'X')) {
        cout << "\nPlayer 1 WINS!" << endl;
        return true;
    }
    if (equal(board[0][0], board[1][1], board[2][2], 'O') || equal(board[0][2], board[1][1], board[2][0], 'O')) {
        cout << "\nPlayer 2 WINS!" << endl;
        return true;
    }
    for (int i=0; i<3; i++) {
        //check rows and cols
        if (equal(board[0][i], board[1][i], board[2][i], 'X') || equal(board[i][0], board[i][1], board[i][2], 'X')) {
            cout << "\nPlayer 1 WINS!" << endl;
            return true;
        }
        if (equal(board[0][i], board[1][i], board[2][i], 'O') || equal(board[i][0], board[i][1], board[i][2], 'O')) {
            cout << "\nPlayer 2 WINS!" << endl;
            return true;
        }
    }
    return false;
}
void drawBoard(char board[3][3]) {
    for (int r=0; r<3; r++) {
        for (int c=0; c<3; c++) {
            cout << board[r][c];
        }
        cout << endl;
    }
    cout << endl;
}
void checkForTie(char board[3][3]) {
    static int moves = 0;
    moves++;
    bool status = gameOver(board);
    if (moves==9 && !status) {
        cout << "\nTie Game" << endl;
        exit(0);
    }
    if (status) exit(0);
}
int main() {
    char board[3][3] = 
    {   {'*', '*', '*'}, 
        {'*', '*', '*'}, 
        {'*', '*', '*'}
    };
    
    int r1, r2, c1, c2;
    while (!gameOver(board)) {
        drawBoard(board);
        
        cout << "Player 1 enter the row and column of your next move: ";
        cin >> r1 >> c1;
        board[--r1][--c1] = 'X';
        cout << endl;
        checkForTie(board);
    
        cout << "Player 2 enter the row and column of your next move: ";
        cin >> r2 >> c2;
        board[--r2][--c2] = 'O';
        cout << endl;
        checkForTie(board); 
    }
}