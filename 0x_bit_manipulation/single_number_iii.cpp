// from leetcode https://leetcode.com/problems/single-number-iii/description/

#include <bits/stdc++.h>

using namespace std;

vector<int> singleNumber(vector<int> &nums)
{
    int b1{0}, b2{0};
    long xorr = 0;

    for (int num : nums)
    {
        xorr ^= num;
    }

    int rightmost = (xorr & (xorr - 1)) ^ xorr;

    for (int num : nums)
    {
        if (num & rightmost)
        {
            b1 ^= num;
        }
        else
        {
            b2 ^= num;
        }
    }
    return {b1, b2};
}

int main()
{

    // we can use a map to store the frequency of each number, and find the keys with a value of 1

    vector<int> nums = {1, 2, 1, 3, 2, 5};

    // in second approach, we will use concept of bit buckets
    // if we take XOR of all elements, the XOR of repeating numbers will be zero
    // and the XOR of two distinct numbers will be non-zero as they have atleast one different bit
    // so we will separate numbers based on whether one of those bit is set or not
    // and when we complete the traversal, buckets will store these distinct numbers separately
    // and that bit will be the rightmost set bit, so to get that
    // we will first remove it and then take & with the original to get only it as set

    for (int num : singleNumber(nums))
    {
        cout << num << "\t";
    }
    cout << endl;

    return 0;
}