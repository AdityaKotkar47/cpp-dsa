#include <bits/stdc++.h>

using namespace std;

int exp1(int x, int n) {

    // base case
    if (n == 0) return 1;

    // recursive relation
    return x * exp1(x, n-1);
}

int exp2(int x, int n) {

    // base case
    if (n == 0) return 1;

    // recursive relation
    if (n & 1)
        return x * exp2(x, n/2) * exp2(x, n/2);

    // recursive relation
    return exp2(x, n/2) * exp2(x, n/2);
}

int exp3(int x, int n) {

    // base case
    if (n == 0) return 1;

    int half = exp3(x, n/2);
    int halfSquare = half * half;

    // if n is odd
    if (n & 1)
        return halfSquare * x;

    // if n is even
    return halfSquare;
}

int main() {

    // for x^n

    cout << exp1(10, 6) << " == " << exp2(10, 6) << endl;

    return 0;
}