// from leetcode https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

#include <bits/stdc++.h>

using namespace std;

int minBitFlips1(int start, int goal)
{
    // Brian Kernighan's Algorithm
    int n = start ^ goal, count{0};
    while (n > 0)
    {
        n &= n - 1;
        count++;
    }
    return count;
}

int minBitFlips2(int start, int goal)
{
    // inbuilt function to count set bits
    return __builtin_popcount(start ^ goal);
}

int main()
{

    int a = 10, b = 7;
    // XOR is useful as it returns 1 for different bits
    cout << minBitFlips1(a, b) << endl;
    cout << minBitFlips2(a, b) << endl;

    return 0;
}