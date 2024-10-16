// from leetcode https://leetcode.com/problems/matrix-diagonal-sum/description/

#include <bits/stdc++.h>

using namespace std;

int diagonalSum(vector<vector<int>> &mat) {

    int sum = 0;

    for (int i = 0; i < mat.size(); i++) {

        // primary diagonal
        sum += mat[i][i];

        // secondary diagonal excluding primary diagonal elements
        if (i != mat.size()-i-1) sum += mat[i][mat.size()-i-1];
    }
    
    return sum;
}

int main() {

    // we basically need to find primary_diagonal_sum + secondary_diagonal_sum - common_diagonal_element
    int n = 4;
    vector<vector<int>> mat1 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << diagonalSum(mat1) << endl;

    n = 3;
    vector<vector<int>> mat2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << diagonalSum(mat2) << endl;

    return 0;
}