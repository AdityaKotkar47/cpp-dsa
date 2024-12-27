#include <bits/stdc++.h>

using namespace std;

int xorRangeFinder1(int n) {
    if (n % 4 == 0) return 1;
    if (n & 4 == 1) return n+1;
    if (n % 4 == 2) return 0;
    return n;
}

int xorRangeFinder2(int l, int r) {
    return xorRangeFinder1(l-1) ^ xorRangeFinder1(r);
}

int main()
{
    // naive approach would be to take xor of all elements

    int n = 5;


    // a better approach would be, to use the pattern in a range of 1 to k
    // for k range,     xor = 1 ;       [k % 4 == 0]
    // for k range,     xor = k+1 ;     [k % 4 == 1]
    // for k range,     xor = 0 ;       [k % 4 == 2]
    // for k range,     xor = k ;       [k % 4 == 3]

    cout << xorRangeFinder1(n) << endl;

    // for a range l to r,
    // we will find 1 to (l-1), then find 1 to r
    // we will take xor of these two, which will give us xor of l to r
    // as the xor of range 1 to (l-1) will get canceled
    int l = 4, r = 7;

    cout << xorRangeFinder2(l, r) << endl;

    return 0;
}