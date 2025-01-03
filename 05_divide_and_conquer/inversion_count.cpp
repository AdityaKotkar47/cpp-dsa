#include <bits/stdc++.h>

using namespace std;

int merge(vector<int>& a, int low, int mid, int high) {

    int cnt = 0;

    vector<int> b(high - low + 1);

    int i = low, j = mid+1, k = 0;

    while (i <= mid && j <= high) {
        if (a[i] <= a[j]) {
            b[k++] = a[i++];
        }
        else {
            cnt += mid - i + 1;
            b[k++] = a[j++];
        }
    }

    while (i <= mid) {
        b[k++] = a[i++];
    }

    while (j <= high) {
        b[k++] = a[j++];
    }

    for (int idx = low; idx <= high; idx++) {
        a[idx] = b[idx - low];
    }

    return cnt;
}


int countInversion(vector<int>& a, int low, int high) {

    int cnt = 0;
    if (low >= high) return cnt;

    int mid = low + (high - low) / 2;

    cnt += countInversion(a, low, mid);
    cnt += countInversion(a, mid+1, high);

    cnt += merge(a, low, mid, high);

    return cnt;
}

int main() {

    // we have to count the number of pairs (i, j) such that i < j and a[i] > a[j]

    // we can use merge sort to count the number of inversions

    // so if we try to merge two sorted arrays, we can count the number of inversions by
    // we check first element of left array and if it is greater than first element of right array,
    // then we know that all the elements in the left array are greater than the first element of the right array
    // so we can count the number of inversions as the number of remaining elements in the left array and move to second element of right array
    // and if it is not greater, then we move to second element of left array and check again
    // this way we can count the number of inversions in O(n1 + n2) time

    // so we can use merge sort to count the number of inversions in O(n log n) time, as it'll provide us these sorted arrays
    // and we can count the number of inversions in each merge step

    vector<int> a = {5, 3, 2, 1, 4};

    cout << countInversion(a, 0, a.size()-1) << endl;

    return 0;
}