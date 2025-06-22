#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {

    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {

    // this is euclid's algorithm for finding the gcd of two numbers
    // it works by recursively finding the gcd of the two numbers doing long division
    // until one of the numbers becomes zero, at which point the other number is the gcd
    cout << gcd(48, 18) << endl; // Output: 6

    return 0;
}