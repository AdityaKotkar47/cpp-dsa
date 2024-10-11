#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n) {

    // the last element will be automatically be swapped and sorted
    for (int i = 0; i < n-1; i++) {
        
        // this will start comparing from current element, and store the minimum
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx]) minIdx = j;
        }

        // swapping with the next minimum element
        swap(arr[i], arr[minIdx]);
    }
}

int main() {

    int n = 5;
    int arr[n] = {5, 4, 1, 3, 2};
    selectionSort(arr, n);

    return 0;
}