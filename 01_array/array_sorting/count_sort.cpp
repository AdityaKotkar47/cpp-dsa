#include <bits/stdc++.h>

using namespace std;

void countSort(int arr[], int n) {

    int freq[10000]; // for storing frequencies, map can be used too
    int minVal = INT_MAX, maxVal = INT_MIN;

    // counting frequencies, finding max and min element
    for (int i = 0; i < n; i++) {
        
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // putting back according to frequencies
    for (int i = 0, j = 0; i < n; i++) {

        while(freq[i]--) {

            arr[j++] = i;
        }
    }
}

int main() {

    int n = 8;
    int arr[n] = {1, 4, 1, 3, 2, 4, 3, 7};
    countSort(arr, n);

    return 0;
}