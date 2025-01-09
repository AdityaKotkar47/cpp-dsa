// from leetcode https://leetcode.com/problems/check-knight-tour-configuration/description/

#include <bits/stdc++.h>

using namespace std;

bool isValid(int x, int y, int n) {
    if (x >= 0 && y >= 0 && x < n && y < n)
        return true;
    return false;
}

bool checkValidGrid(vector<vector<int>>& grid) {
    
    if (grid[0][0] != 0) return false;
    int n = grid.size();
    int x1 = 0, y1 = 0;
    for (int i = 0; i < n*n-1; i++) {

        if (isValid(x1+1, y1+2, n) && grid[x1+1][y1+2] == i+1) {
            x1 = x1+1;
            y1 = y1+2;
        }
        else if (isValid(x1+1, y1-2, n) && grid[x1+1][y1-2] == i+1) {
            x1 = x1+1;
            y1 = y1-2;
        }
        else if (isValid(x1-1, y1+2, n) && grid[x1-1][y1+2] == i+1) {
            x1 = x1-1;
            y1 = y1+2;
        }
        else if (isValid(x1-1, y1-2, n) && grid[x1-1][y1-2] == i+1) {
            x1 = x1-1;
            y1 = y1-2;
        }
        else if (isValid(x1+2, y1+1, n) && grid[x1+2][y1+1] == i+1) {
            x1 = x1+2;
            y1 = y1+1;
        }
        else if (isValid(x1+2, y1-1, n) && grid[x1+2][y1-1] == i+1) {
            x1 = x1+2;
            y1 = y1-1;
        }
        else if (isValid(x1-2, y1+1, n) && grid[x1-2][y1+1] == i+1) {
            x1 = x1-2;
            y1 = y1+1;
        }
        else if (isValid(x1-2, y1-1, n) && grid[x1-2][y1-1] == i+1) {
            x1 = x1-2;
            y1 = y1-1;
        }
        else {
            return false;
        }        

    }

    return true;
}

// bool checkValidGrid(vector<vector<int>>& grid) {
    
//     if (grid[0][0] != 0) return false;
    
//     map<int, pair<int, int>> mp;
//     for (int i = 0; i < grid.size(); i++) 
//         for (int j = 0; j < grid[0].size(); j++) 
//             mp[grid[i][j]] = {i, j};
    
//     for (int i = 1; i < grid.size()*grid.size(); i++) {

//         int x1 = mp[i-1].first, x2 = mp[i].first;
//         int y1 = mp[i-1].second, y2 = mp[i].second;

//         if (!((abs(x1-x2) == 1 && abs(y1-y2) == 2)
//             || (abs(x1-x2) == 2 && abs(y1-y2) == 1)))
//             return false;
//     }

//     return true;
// }

int main() {

    // we need to check if the knight tour configuration is valid
    // we need to check if the knight can move to all the cells in the board
    

    return 0;
}