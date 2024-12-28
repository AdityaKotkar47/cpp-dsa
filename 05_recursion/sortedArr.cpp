#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int> a, int idx = 1) {

    // base case
    if (idx > a.size()-1) return true;

    // base case
    if (a[idx] < a[idx-1]) return false;

    // recursive relation
    return isSorted(a, idx+1);
}

int main() {

    vector<int> a = {1, 2, 1, 4, 5};

    cout << isSorted(a) << endl;

    return 0;
}