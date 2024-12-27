#include <bits/stdc++.h>

using namespace std;

int fast_exponentiation(int x, int n) {
    if (n == 0) {
        return 1;
    }
    int temp = fast_exponentiation(x, n / 2);
    if (n % 2 == 0) {
        return temp * temp;
    }
    return temp * temp * x;
}

int main() {

    int x = 2, n = 10;
    int ans = 1;

    // iterative approach
    while (n > 0) {
        if (n & 1) {
            ans *= x;
        }
        x *= x;
        n >>= 1;
    }   
    cout << ans << endl;

    // recursive approach
    cout << fast_exponentiation(x, n) << endl;

    return 0;
}