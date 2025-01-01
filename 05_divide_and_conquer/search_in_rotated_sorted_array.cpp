// from leetcode https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include <bits/stdc++.h>

using namespace std;

int search(vector<int> nums, int target, int start, int end) {

    if (start > end) return -1;

    int mid = start + (end - start) / 2;

    if (nums[mid] == target)
        return mid;

    else if (nums[start] <= nums[mid]) {

        if (nums[start] <= target && target < nums[mid])
            return search(nums, target, start, mid-1);
        else
            return search(nums, target, mid+1, end);
    }

    else if (nums[mid] <= nums[end]) {

        if (nums[mid] < target && target <= nums[end])
            return search(nums, target, mid+1, end);
        else
            return search(nums, target, start, mid-1);
    }

    return -2;
}

int main() {

    // we use a modified binary search to find the target

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 2;

    // think using plotted graph
    // assuming there are two lines of sorted numbers [we know the start of 1st line, mid, and end of 2nd line]
    // we will go to mid and compare target with mid
    // if target is equal to mid, we will return mid
    // else we compare start with mid to find the line that mid is in using arr[start] <= arr[mid] --> mid is in the 1st line, else mid is in the 2nd line
    
    // for 1st lines
    // if arr[start] <= target < arr[mid] --> target is in the left half
    // else --> target is in the right half

    // for 2nd lines
    // if arr[mid] < target <= arr[end] --> target is in the right half
    // else --> target is in the left half

    // we will keep doing this until we find the target or the start is greater than end

    cout << search(nums, target, 0, nums.size()-1) << endl;

    return 0;
}