#include <bits/stdc++.h>

using namespace std;

int gridWays(int m, int n, int i = 0, int j = 0) {

    if (i == m-1 && j == n-1)
        return 1;
    
    int cnt = 0;

    if (i < m-1)
        cnt += gridWays(m, n, i+1, j);
    
    if (j < n-1)
        cnt += gridWays(m, n, i, j+1);
    
    return cnt;
}

int main() {

    // find number of ways to reach (m-1, n-1) from (0, 0)
    // can move right or down

    // from a cell, we can only move towards left and right
    // so we need to calculate the ways in which we reached (m-1, n-1) when we started from right and down

    // time complexity: O(2^(m+n)) as we are making 2 recursive calls for each cell
    // space complexity: O(m+n) as we are using a stack to store the recursive calls

    int m = 3, n = 3;

    // for n = 3
    // 6 3 1
    // 3 2 1
    // 1 1 1

    cout << gridWays(m, n) << endl;

    // in other ways we can do this using dp, but we will do using permutations and combinations
    // so we have to make (n-1) moves right and (m-1) moves down, we just need to know their order
    // we have (x+y) places, and we need to place x balls and y balls in them
    // so we have to choose x places out of (x+y) places for the balls, which is (x+y)! / (x! * y!)

    return 0;
}