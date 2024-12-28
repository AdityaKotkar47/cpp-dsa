#include <bits/stdc++.h>

using namespace std;

int firstOccurence(vector<int> a, int target, int idx = 0) {

    // base case
    if (idx > a.size()-1) return -1;

    // base case
    if (a[idx] == target) return idx;

    // recursive relation
    return firstOccurence(a, target, idx+1);
}

int main() {

    vector<int> a = {1, 2, 3, 2, 5};

    cout << firstOccurence(a, 4) << endl;

    return 0;
}