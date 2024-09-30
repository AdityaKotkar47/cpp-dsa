// from leetcode https://leetcode.com/problems/power-of-two/description/

#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n) {

    return (n > 0) && ((n & (n-1)) == 0);
}

int main(int argc, char** argv) {

    // a number is power of 2 if it has only one set bit
    // subtracting 1 will flip all the bits after the set bit, and clears the set bit

    int n = 6;

    cout << isPowerOfTwo(n) << endl;

    return 0;
}