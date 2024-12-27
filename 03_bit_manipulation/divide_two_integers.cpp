// from leetcode https://leetcode.com/problems/divide-two-integers/d

#include <bits/stdc++.h>

using namespace std;

int divide(int dividend, int divisor) {

    if (dividend == 0) return 0;
    if (dividend == divisor) return 1;
    if (divisor == 1) return dividend;

    bool positive = true;
    if (dividend >= 0 && divisor < 0) positive = false;
    if (dividend <= 0 && divisor > 0) positive = false;

    long d = labs(dividend);
    long n = labs(divisor);
    long quotient = 0;

    while (d >= n) {

        long temp = n, count = 1;

        while (d >= (temp << 1)) {
            temp <<= 1;
            count <<= 1;
        }
        d -= temp;
        quotient += count;
    }

    quotient = positive ? quotient : -quotient;

    if (quotient > INT_MAX) return INT_MAX;
    if (quotient < INT_MIN) return INT_MIN;

    return quotient;
}

int main() {

    // first approach from CodeWithZi 
    // https://www.youtube.com/watch?v=dUa-MB-rx-0
    // https://leetcode.com/problems/divide-two-integers/submissions/1375142162/

    // second approach from using bit manipulation
    int dividend = 10, divisor = 3;
    // we use bit shifts to perform divisor * power of two
    // and find the biggest possible multiple of divisor that is less than dividend
    // we idenfity the highest power and subtract it from dividend

    cout << divide(dividend, divisor) << endl;

    return 0;
}