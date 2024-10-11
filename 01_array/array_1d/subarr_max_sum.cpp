#include <iostream>

using namespace std;

int subarrayMaxSumBrute(int *arr, int len)
{
    int maxSum = INT_MIN; // INT_MIN is lowest possible integer value
    // use INT_MIN for initializating max value variables
    // use INT_MAX for initializing min value variables
    int currentSum;

    for (size_t start = 0; start < len; start++)
    {
        for (size_t end = start; end < len; end++)
        {
            currentSum = 0;
            for (size_t idx = start; idx <= end; idx++)
            {
                currentSum += arr[idx];
            }
            // max is inbuilt function, to find max of multiple elements
            // use this approach: max(a, max(b, c))
            maxSum = max(maxSum, currentSum);
            // min() exists too
        }
    }

    return maxSum;
}

int subarrayMaxSumOptimized(int *arr, int len)
{

    int maxSum = INT_MIN, currentSum;

    for (size_t start = 0; start < len; start++)
    {
        currentSum = 0;
        for (size_t end = start; end < len; end++)
        {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int subarrayMaxSumKadane(int *arr, int len)
{

    int maxSum = INT_MIN, currentSum = 0;

    for (size_t idx = 0; idx < len; idx++)
    {
        currentSum += arr[idx];

        maxSum = max(maxSum, currentSum);

        if (currentSum < 0)
        {
            currentSum = 0; // reset as the current element is useless
        }
    }

    return maxSum;
}

int main()
{

    int arr[] = {2, -3, 6, -5, 4, 2};
    int len = sizeof(arr) / sizeof(int);

    // in brute force approach, we'll calculate sum of each subarray
    // and compare sum of all of them

    cout << subarrayMaxSumBrute(arr, len) << endl;

    // in optimized approach, we'll make use of the previous smaller
    // subarray of same starting idx and just add the new value to
    // previously calculated sum, removing the 3rd loop dependancy
    // where we calculated the sum for every subarray [even if they were
    // a part of each other due to same starting idx]

    cout << subarrayMaxSumOptimized(arr, len) << endl;

    // kadane's algorithm
    // in this approach, we reset the currentSum if we encounter
    // an element which is not useful for the previous subarray sum
    // and max sum will be calculated similarly to optimized approach

    cout << subarrayMaxSumKadane(arr, len) << endl;

    return 0;
}