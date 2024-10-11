// from leetcode https://leetcode.com/problems/trapping-rain-water/description/

#include <iostream>

using namespace std;

int volumeTrappedRainwater(int *barHeights, int len)
{

    int totalVolume = 0;
    int barLength = 1, barWidth = 1;

    // for deciding boundaries of each bar
    int leftBoundaryHeight[len];
    leftBoundaryHeight[0] = barHeights[0];

    for (size_t idx = 1; idx < len; idx++)
    {
        leftBoundaryHeight[idx] = max(leftBoundaryHeight[idx - 1], barHeights[idx - 1]);
    }

    int rightBoundaryHeight[len];
    rightBoundaryHeight[len - 1] = barHeights[len - 1];

    for (size_t idx = len - 2; idx >= 1; idx--)
    {
        rightBoundaryHeight[idx] = max(rightBoundaryHeight[idx + 1], barHeights[idx + 1]);
    }

    // now we'll compare the right and left bounds to find their minimum
    // use the individual minimum and subtract the individual minimum heights
    // this will give us individual trapped water, ignore non-positive volumes
    // their individual sum would be our total volume
    int currrentVolume = 0;
    for (size_t idx = 0; idx < len; idx++)
    {
        currrentVolume = min(rightBoundaryHeight[idx], leftBoundaryHeight[idx]) - barHeights[idx];
        if (currrentVolume > 0)
        {
            totalVolume += currrentVolume;
        }
    }

    return totalVolume;
}
int main()
{

    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int len = sizeof(arr) / sizeof(int);

    // we need to find the amount of water trapped due to bars
    // bar needs a valley to trap water i.e, larger bars on both sides
    // min of (left largest & right largest) bars gives trapped water
    // we will find the amount of water trapped above each bar
    // their total sum will be our answer

    cout << volumeTrappedRainwater(arr, len) << endl;

    return 0;
}