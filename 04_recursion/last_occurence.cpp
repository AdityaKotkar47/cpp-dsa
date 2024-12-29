#include <bits/stdc++.h>

using namespace std;

int lastOccurence1(vector<int> a, int target, int idx = -2) {

    if (idx == -2) idx = a.size()-1;

    // base case
    if (idx < 0) return -1;

    // base case
    if (a[idx] == target) return idx;

    // recursive relation
    return lastOccurence1(a, target, idx-1);
}

int lastOccurence2(vector<int> a, int target, int idx = 0, int last = -1) {

    // base case
    if (idx > a.size()-1) return last;

    if (a[idx] == target) last = idx;

    // recursive relation
    return lastOccurence2(a, target, idx+1, last);
}

int lastOccurence3(vector<int> a, int target, int idx = 0) {

    // base case
    if (idx > a.size()-1) return -1;

    // recursive relation
    int ans = lastOccurence3(a, target, idx+1);

    // base case
    if (ans == -1 && a[idx] == target)
        return idx;
    
    return ans;
}

int main() {

    vector<int> a = {1, 2, 3, 2, 5};

    cout << lastOccurence1(a, 2) << " == " << lastOccurence2(a, 2) << " == " << lastOccurence3(a, 2) << endl;

    return 0;
}