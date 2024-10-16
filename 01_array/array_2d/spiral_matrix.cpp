
// from leetcode https://leetcode.com/problems/spiral-matrix/description/

#include <bits/stdc++.h>

using namespace std;

void print1(vector<int> v) {

    cout << "\n|";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size()-1) cout << ",\t";
    }
    cout << "|\n";
}

void print2(vector<vector<int>> v) {

    cout << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << "|";
        for (int j = 0; j < v[0].size(); j++) {
            cout << v[i][j];
            if (j != v[0].size()-1) cout << ",\t";
        }
        cout << "|\n";
    }
    cout << endl;
}

vector<int> spiralMatrix(vector<vector<int>> v) {

    // for keeping track of which is current row/column
    int left = 0, right = v[0].size()-1, top = 0, bottom = v.size()-1;
    vector<int> spiral;


    // condition to avoid duplicates and `=` for handling odd cases
    while (left <= right && top <= bottom) 
    {
        // top side
        for (int j = left; j <= right; j++) {
            spiral.push_back(v[top][j]);
        }
        top++;

        // right side
        for (int i = top; i <= bottom; i++) {
            spiral.push_back(v[i][right]);
        }
        right--;

        // bottom side
        if (top <= bottom) {  // check if there's a row to traverse
            for (int j = right; j >= left; j--) {
                spiral.push_back(v[bottom][j]);
            }
            bottom--;
        }

        // left side
        if (left <= right) {  // check if there's a column to traverse
            for (int i = bottom; i >= top; i--) {
                spiral.push_back(v[i][left]);
            }
            left++;
        }
    }
    
    return spiral;
}

int main() {

    int n{4}, m{4};
    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    print2(v);
    print1(spiralMatrix(v));

    return 0;
}