// from leetcode https://leetcode.com/problems/subsets/description/

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    // vector<vector<int>> power = {{}, {1}, {2}, {3}, {1, 2}, {2, 3}, {1, 3}, {1, 2, 3}};

    vector<vector<int>> powerset;
    int powersetsCount = 1 << nums.size();

    for (int i = 0; i < powersetsCount; i++) {
        vector<int> subset;
        // below we will be checking all bits of i
        for (int j = 0; j < nums.size(); j++) {
            if ((i & (1 << j)) != 0) subset.push_back(nums[j]);
        }
        powerset.push_back(subset);
    }


    return powerset;
}

int main(int argc, char** argv) {

    // we need to print all the subsets, and return its set i.e, powerset

    // the number of subsets will be 2^n
    vector<int> v = {1, 2, 3};
    // this logic should be used to get each
    //      0 1 2 
    // 0 -> 0 0 0 -> []
    // 1 -> 0 0 1 -> [3]
    // 2 -> 0 1 0 -> [2]
    // 3 -> 0 1 1 -> [2, 3]
    // 4 -> 1 0 0 -> [1]
    // 5 -> 1 0 1 -> [1, 3]
    // 6 -> 1 1 0 -> [1, 2]
    // 7 -> 1 1 1 -> [1, 2, 3]

    vector<vector<int>> powerSetV = subsets(v);

    for (int i = 0; i < powerSetV.size(); i++) {
        cout << "[";
        for (int j = 0; j < powerSetV[i].size(); j++) {
            if (j != 0) cout << " ";
            cout << powerSetV[i][j];
            if (j != powerSetV[i].size() - 1) cout << ",";
        }
        cout << "]" << endl;
    } 

    return 0;
}