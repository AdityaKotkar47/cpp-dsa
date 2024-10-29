// from leetcode https://leetcode.com/problems/container-with-most-water/description/

#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int> &height)
{

    int maxArea = INT_MIN;
    int left = 0, right = height.size() - 1;

    while (left < right)
    {

        int curArea = min(height[left], height[right]) * (right - left);
        maxArea = max(maxArea, curArea);

        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return maxArea;
}

int main()
{
    // two pointer approach
    // to maximize the width, we will start from left = 0, right = end-1
    // and to get maximum height, we will increment the one with lower height

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);

    return 0;
}