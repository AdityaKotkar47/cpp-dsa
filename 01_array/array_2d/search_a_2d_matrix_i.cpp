// from leetcode https://leetcode.com/problems/search-a-2d-matrix/description/

#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    int rows = matrix.size(), cols = matrix[0].size();
    int left = 0, right = rows*cols - 1, mid, row, col;

    while (left <= right){
        mid = (left + right) / 2;
        row = (mid / cols);
        col = (mid % cols);

        if (target == matrix[row][col]) return true;
        else if (target < matrix[row][col]) right = mid - 1;
        else left = mid + 1;
    }

    return false;
}

int main() {

    int target = 3;
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };

    // we will use binary search to find the element
    // we will consider the matrix as a single row
    // so we will go to the middle element, get its row and column
    // and then compare it with our target
    // if it is equal, then we will return true
    // else we will move our left and right pointers accordingly

    cout << searchMatrix(matrix, target) << endl;

    return 0;
}