// from leetcode https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> result;
    int left = 0, right = numbers.size() - 1;

    while (left < right)
    {
        int sum = numbers[left] + numbers[right];
        if (sum == target)
        {
            result.push_back(left + 1);
            result.push_back(right + 1);
            return result;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return result;
}

int main()
{

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // two pointers
    // we adjust our pointers so that we try to reach the target sum
    vector<int> result = twoSum(nums, target);

    cout << result[0] << ", " << result[1] << endl;

    return 0;
}