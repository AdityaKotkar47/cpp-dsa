#include <bits/stdc++.h>

using namespace std;

int main() {

    // we use formula lcm(a, b) = (a * b) / gcd(a, b)
    cout << (48 * 18) / gcd(48, 18) << endl; // Output: 144

    return 0;
}