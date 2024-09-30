#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {

    // bit at position i to be flipped : 1 to 0 or 0 to 1

    // create a mask by left shifting 1 by i bits
    int n = 3, i = 2; // 011
    int mask = 1 << i; // 100
    n = n ^ mask; // 011 ^ 100 = 111
    cout << n << endl;

    return 0;
}