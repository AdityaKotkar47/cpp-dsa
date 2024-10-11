#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n) {

    // to remove unnecessary checking when already sorted
    bool isSwapped;
    // as there will be only n-1 pairs
    for (int i = 0; i < n-1; i++) {

        isSwapped = false;
        // as the end part will get sorted with each iteration
        for (int j = 0; j < n-i-1; j++) {

            if (arr[j] > arr[j+1]) {

                isSwapped = true;
                swap(arr[j], arr[j+1]);
            }
        }

        if (!isSwapped) break;
    }
}

void bubbleSort(vector<int>& v) {

    for (int i = 0; i < v.size()-1; i++) {

        for (int j = 0; j < v.size()-i-1; j++) {
            
            if (v[j] > v[j+1]) swap(v[j], v[j+1]);
        }
    }
}

int main() {

    // for array
    int n = 5;
    int arr[n] = {5, 1, 4, 2, 3};
    bubbleSort(arr, n);

    // for vectors
    vector<int> v = {5, 1, 4, 2, 3};
    bubbleSort(v);  

    return 0;
}