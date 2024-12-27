// from leetcode https://leetcode.com/problems/single-number-ii/description/

#include <bits/stdc++.h>

using namespace std;

int singleNumber1(vector<int> &nums)
{
    int single = 0, count;

    for (int i = 0; i < 32; i++)
    {
        count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] & (1 << i))
                count++; // if the ith bit is set, increment the count
        }

        if (count % 3 == 1)
            single |= (1 << i); // set the ith bit if the count is not multiple of 3
    }

    return single;
}

int singleNumber2(vector<int> nums)
{

    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i += 3)
    {
        if (nums[i] != nums[i - 1])
            return nums[i - 1];
    }
    return nums[nums.size() - 1];
}

int singleNumber3(vector<int> &nums)
{

    int ones = 0, twos = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ones = (ones ^ nums[i]) & ~twos;
        twos = (twos ^ nums[i]) & ~ones;
    }
    return ones;
}

int main()
{

    // we can use a map to store the frequency of each number, and find the key with a value of 1

    vector<int> nums = {0, 1, 0, 1, 0, 1, 99};

    // in second approach, we will count how many elements have the set bit at same position
    // we will check each position [total 31], and if the count is not multiple of 3, then we set that bit in our answer
    // if it is multiple of 3, then we know that its from elements which are in triple frequency

    cout << singleNumber1(nums) << endl;

    // in third approach, we will sort the array
    // then we will start from idx = 1, which will be the middle in a triplet
    // we will check if the next element is the same as the previous element
    // if it is, then we will increment the count by 3 to next triplet center
    // if not, then the previous element is the unique element
    // in case of last element, then as we know the answer exists, we will return the last element

    cout << singleNumber2(nums) << endl;

    // in fourth and final approach, we will use concept of bit buckets
    // we will use 3 buckets - ones, twos, threes [third won't be required]
    // as their name suggests, if a number appears ones times, then it'll go in ones bucket
    // if it appears twos times, then it'll go in twos bucket
    // if it appears threes times, then it'll go in threes bucket
    // we will traverse through the array and put them in buckets, and change their buckets accordingly
    // we will follow these conditions
    // nums[i] will go in ones, if not already in twos [it can't be in threes as count <= 3]
    // nums[i] will go in twos, if already in ones
    // nums[i] will go in threes, if already in twos
    // we don't need to store in threes, we don't need it as the first 2 conditions require themselves only
    // we are performing two operations on buckets - addition and deletion
    // addition and deletion can both be achieved by ^

    cout << singleNumber3(nums) << endl;

    return 0;
}