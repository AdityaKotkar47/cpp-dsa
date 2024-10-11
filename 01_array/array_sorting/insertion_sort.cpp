#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n) {

    // initially zeroth index will be in sorted part, rest in unsorted part
    for (int i = 1; i < n; i++) {

        int curr = arr[i];
        int prev = i-1;

        while (prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev]; // or swap(arr[prev], arr[prev+1]);
            prev--;
        }
        // if the curr element should be at 0th index, then we need to put it there
        arr[prev+1] = curr;
    }
}

int main() {

    int n = 5;
    int arr[n] = {5, 4, 1,3, 2};
    insertionSort(arr, n);

    return 0;
}