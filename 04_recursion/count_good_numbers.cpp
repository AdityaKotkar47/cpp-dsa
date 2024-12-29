// from leetcode https://leetcode.com/problems/count-good-numbers/description/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MOD = 1e9 + 7;

// recursive approach
ll powerR(ll base, ll exp) {

    if (exp == 0) return 1;

    ll half = powerR(base, exp / 2);

    if (exp & 1)
        return (half * half * base) % MOD;

    return (half * half) % MOD;
}

// iterative approach
ll powerI(ll base, ll exp) {

    ll res = 1;
    while (exp > 0) {

        if (exp & 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }

    return res;
}

int countGoodNumbers(ll n) {

    ll even, odd;

    // if n is odd, then we have n/2 + 1 even numbers and n/2 odd numbers
    // if n is even, then we have n/2 even numbers and n/2 odd numbers
    // we can use the formula 5^even * 4^odd to find the number of good numbers
    if (n & 1) {
        even = n / 2 + 1;
        odd = n / 2;
    }
    else {
        odd = even = n / 2;
    }

    return ((powerR(5, even) % MOD) * (powerI(4, odd) % MOD)) % MOD;
}

int main() {

    cout << countGoodNumbers(50) << endl;

    return 0;
}