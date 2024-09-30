#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {

    // bit at position i to be unset to 0, regardless of its current state

    // create a mask by left shifting 1 by i bits and invert it
    int n = 7, i = 2; // 111
    int mask = ~(1 << i); // 011
    n = n & mask; // 111 & 011 = 011
    cout << n << endl;

    return 0;
}