#include <bits/stdc++.h>

using namespace std;

int tiled(int m, int n) {

    if (n < m)
        return 1;

    // n-1 for vertical
    // n-m for horizontal
    return tiled(m, n-1) + tiled(m, n-m);       
}

int main() {

    // let m = 2
    // count ways to tile a 2xn board using 2x1 tiles

    // we need to place a tile either horizontally or vertically
    // horizontally, we can place 2 tiles
    // vertically, we can place 1 tile

    // we will firstly place a tile horizontally
    // then we will place it again vertically
    // and we will sum them all the way till we reach the end

    // our base case is when we have only 1 tile left
    // we can only place it vertically
    // and other way is when we have 0 tiles left
    // we do not need to place any tile [which is a way]

    cout << tiled(4, 5) << endl;

    return 0;
}