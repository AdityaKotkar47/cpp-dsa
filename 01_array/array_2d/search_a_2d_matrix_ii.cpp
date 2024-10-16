// from leetcode https://leetcode.com/problems/search-a-2d-matrix-ii/description/

#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    int row = 0, col = matrix[0].size()-1;

    while (row < matrix.size() && col >= 0) {

        if (matrix[row][col] == target) return true;

        else if (matrix[row][col] > target) col--; // move to left
        
        else row++; // move down
    }

    return false;
}

int main() {

    int target = 33;
    vector<vector<int>> matrix = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    // we can use row-wise or column-wise binary search for rows or columns too

    // we will use staircase search
    // can be used when the matrix is both row-wise and column-wise sorted
    // the idea is to find the row and column index of the target
    // we will have a starting cell, here matrix[0][matrix[0].size()-1]   [the far end of the secondary diagonal are the possible starting cells]
    // the values in downward direction will be more than the starting cell
    // the values in the left direction will be less than the starting cell
    // so we will compare the target with the starting cell
    // if it is equal, then we will return true
    // if it is less than the starting cell, then we will move to the left cell
    // if it is more than the starting cell, then we will move to the downward cell

    cout << searchMatrix(matrix, target) << endl;

    // time complexity: O(n+m) i.e, ending up at the other end of the matrix

    return 0;
}