#include <bits/stdc++.h>

using namespace std;



void travel(vector<int>& a, int i = 0) {

    if (i == a.size()) {
        for (int j = 0; j < a.size(); j++) {
            cout << a[j] << " ";
        }
        return;
    }

    a[i] = i+1;
    travel(a, i+1);
    a[i] -= 2;

}

int main() {

    // travelling array, and then backtracking to get the original array

    vector<int> a(5);

    travel(a);
            for (int j = 0; j < a.size(); j++) {
            cout << a[j] << " ";
        }

    return 0;
}