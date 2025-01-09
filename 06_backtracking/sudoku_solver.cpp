#include <bits/stdc++.h>

using namespace std;

bool isSafe(const vector<vector<int>>& board, int row, int col, int digit) {

    // check if the digit is already present in the same row
    for (int i = 0; i < board.size(); i++)
        if (board[i][col] == digit)
            return false;
    
    // check if the digit is already present in the same column
    for (int j = 0; j < board.size(); j++)
        if (board[row][j] == digit)
            return false;

    // check if the digit is already present in the same 3x3 subgrid
    int gridRow = (row / 3) * 3, gridCol = (col / 3) * 3;
    for (int i = gridRow; i < gridRow+3; i++) 
        for (int j = gridCol; j < gridCol+3; j++) 
            if (board[i][j] == digit)
                return false;

    return true;
}

bool solverSudoku(vector<vector<int>>& board, int row, int col) {

    // base case
    if (row == board.size()) {
        // we filled the board, and reached the new row [trying to fill it]
        return true;
    }

    int nextRow =  row;
    int nextCol = col+1;

    // if the current column is the last column, move to the next row and start from the first column
    if (col+1 == board.size()) {
        nextRow = row+1;
        nextCol = 0;
    }

    // if the current cell is already filled, move to the next cell, return what is returned by the recursive call
    if (board[row][col] != 0) 
        return solverSudoku(board, nextRow, nextCol);

    for (int digit = 1; digit <= 9; digit++) {
        
        if (isSafe(board, row, col, digit)) {
            
            // try to fill the current cell with the digit
            board[row][col] = digit;
            // if the sudoku is solved, break the loop
            if (solverSudoku(board, nextRow, nextCol)) return true;
            // if the sudoku is not solved, backtrack and try the next digit
            board[row][col] = 0;
        }
    }

    return false;
}

int main() {

    // numbers can be from 1 to 9
    // same number cannot be in the same row, column or 3x3 subgrid
    // we will start from the top left corner and try to fill the grid row-wise
    // if a number is already present in the row, we will move to the next cell
    // we will try a number from 1 to 9 and check if it is valid to be placed in the current cell
    // if it is valid, we will place it and move to the next cell
    // if it is not valid, we will try the next number
    // if we have tried all numbers and still have empty cells, we will backtrack and try a different number for the previous cell
    // we will continue this process until the grid is filled
    // a sudoku can have none or more than one solution

    // time complexity: O(1)
    // space complexity: O(1)

    vector<vector<int>> board = {
        {0, 0, 8, 0, 0, 0, 0, 0, 0},
        {4, 9, 0, 1, 5, 7, 0, 0, 2},
        {0, 0, 3, 0, 0, 4, 1, 9, 0},
        {1, 8, 5, 0, 6, 0, 0, 2, 0},
        {0, 0, 0, 0, 2, 0, 0, 6, 0},
        {9, 6, 0, 4, 0, 5, 3, 0, 0},
        {0, 3, 0, 0, 7, 2, 0, 0, 4},
        {0, 4, 9, 0, 3, 0, 0, 5, 7},
        {8, 2, 7, 0, 0, 9, 0, 1, 3}
    };

    if (solverSudoku(board, 0, 0)) {
        cout << "Sudoku solved successfully!" << endl;
    } else {
        cout << "Sudoku cannot be solved!" << endl;
    }

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}