// from leetcode similar https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/description/

#include <bits/stdc++.h>

using namespace std;

int maxActivity(vector<vector<int>> v) {

    int cnt = 1, currentEnd = v[0][1];

    for (int i = 1; i < v.size(); i++) {

        if (currentEnd <= v[i][0]) {
            currentEnd = v[i][1];
            cnt++;
        }
    }

    return cnt;
}

int main() {

    // here we are given a list of activities where each activity has a start time and an end time
    // we need to find the maximum number of activities that can be completed
    // we can only attend one activity at a time
    // we can only attend an activity if the start time is greater than or equal to the end time of the previous activity

    // we can use a greedy approach to solve this problem
    // we need to select non overlapping activities with lower time so we got more free time to work on other activities
    // we will sort the events by their end time if they aren't already sorted
    // for an overlap to occur, the start time of the current event must be less than the end time of the previous event

    // so we just start from the first activity as it'll be completed first [due to sorting]


    vector<vector<int>> tc1 = {{1,2},{2,3},{3,4}};
    cout << maxActivity(tc1) << endl;

    vector<vector<int>> tc2 = {{1,2},{2,3},{3,4},{2,4}};
    cout << maxActivity(tc2) << endl;

    return 0;
}