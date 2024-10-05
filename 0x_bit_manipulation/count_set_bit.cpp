// from leetcode https://leetcode.com/problems/number-of-1-bits/description/

#include <bits/stdc++.h>

using namespace std;

int hammingWeight1(int n)
{
    int count{0};
    while (n > 0)
    {
        count += (n & 1); // check if last bit is set
        n >>= 1;
    }
    return count;
}
int hammingWeight2(int n)
{

    return __builtin_popcount(n);
}
int hammingWeight3(int n)
{
    int count{0};
    while (n > 0)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main()
{

    // three approaches
    int n = 11;

    // iterative method - O(logn)
    cout << hammingWeight1(n) << endl;

    // builtin method - O(k) ; k = number of set bits
    cout << hammingWeight2(n) << endl;

    // brian kernighan's algorithm - O(k) ; k = number of set bits
    cout << hammingWeight3(n) << endl;

    return 0;
}