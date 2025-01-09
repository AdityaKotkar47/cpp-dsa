#include <bits/stdc++.h>

using namespace std;

void printArray(vector<vector<char>> a) {

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

bool isSafe(const vector<vector<char>>& board, int row, int col) {

    // check for the same column
    for (int i = 0; i < row; i++)
        if (board[i][col] == 'Q')
            return false;

    // check for the upper left diagonal
    for (int i=row-1, j=col-1; i>=0 && j>=0; i--, j--)
        if (board[i][j] == 'Q')
            return false;

    // check for the upper right diagonal
    for (int i=row-1, j=col+1; i>=0 && j<=board[0].size(); i--, j++)
        if (board[i][j] == 'Q')
            return false;

    return true;
}

void nQueensAll(vector<vector<char>>& a, int i = 0) {

    if (i == a.size()) {
        printArray(a);
        return;
    }

    // try to place the queen in each column of the current row
    for (int j = 0; j < a[0].size(); j++) {
        if (isSafe(a, i, j)) {
            a[i][j] = 'Q'; // place the queen
            nQueensAll(a, i+1); // move to the next row
            a[i][j] = '.'; // backtrack
        }
    }
}

int nQueensCount(vector<vector<char>>& a, int i = 0) {

    if (i == a.size()) {
        return 1;
    }

    int count = 0;
    for (int j = 0; j < a[0].size(); j++) {
        if (isSafe(a, i, j)) {
            a[i][j] = 'Q';
            count += nQueensCount(a, i+1);
            a[i][j] = '.';
        }
    }

    return count; // no of possible solutions at each level
}

void nQueensOne(vector<vector<char>>& a, bool& found, int i = 0) {

    if (i == a.size()) {
        printArray(a);
        found = true;
        return;
    }

    // try to place the queen in each column of the current row
    for (int j = 0; j < a[0].size(); j++) {
        if (isSafe(a, i, j)) {
            a[i][j] = 'Q'; // place the queen
            nQueensOne(a, found, i+1); // move to the next row
            if (found)
                return;
            a[i][j] = '.'; // backtrack
        }
    }
}

int main() {

    // we have to place n queens on n x n chessboard such none of the queens attack each other
    // many variations are there, some of them include
    // 1. given a chess board - find whether it is possible to place n queens on it
    // 2. print all possible combinations for a n x n chessboard
    // 3. count all possible combinations for a n x n chessboard

    // after placing a queen, it completely occupies its row [and column], so we need to move to the next row to search
    // for a safe position for the next queen in the subsequent row. If a safe position is found, we place the queen there and
    // move to the next row. If a safe position isn't found, we backtrack by removing the queen from the current position and try
    // to find next safe position in the current row.

    // time complexity: O(n!)
    // space complexity: O(n^n)

    vector<vector<char>> a;
    int n = 4;

    for (int i = 0; i < n; i++) {
        vector<char> newRow(n);
        for (int j = 0; j < n; j++)
            newRow[j] = '.';
        a.push_back(newRow);
    }

    nQueensAll(a);
    cout << "ways: " << nQueensCount(a) << endl;
    bool found = false;
    nQueensOne(a, found);

    return 0;
}