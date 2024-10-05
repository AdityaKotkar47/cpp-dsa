
// from leetcode https://leetcode.com/problems/single-number/description/

#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int single = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        single ^= nums[i];
    }

    return single;
}

int main()
{

    // we can use a map to store the frequency of each number, and find the key with a value of 1
    // now, bitwise approach
    // if we take the xor of all the numbers, we get the unique number which only appeared once

    vector<int> nums = {4, 1, 2, 1, 2};

    cout << singleNumber(nums) << endl;

    return 0;
}