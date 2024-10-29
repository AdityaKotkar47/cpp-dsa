// from leetcode https://leetcode.com/problems/set-mismatch/description/

#include <bits/stdc++.h>

using namespace std;

vector<int> findErrorNums(vector<int> &nums)
{
    vector<int> a(nums.size() + 1, 0);

    for (int &num : nums)
        a[num]++;

    vector<int> result;

    for (int i = 1; i <= nums.size(); i++)
        if (a[i] == 2)
            result.push_back(i);

    for (int i = 1; i <= nums.size(); i++)
        if (a[i] == 0)
            result.push_back(i);

    return result;
}

int main()
{

    vector<int> nums = {1, 2, 2, 4};

    // we try to find the freq of each number in nums
    // return the number with freq of 2 and freq of 0
    vector<int> result = findErrorNums(nums);

    for (int &num : result)
        cout << num << " ";

    return 0;
}