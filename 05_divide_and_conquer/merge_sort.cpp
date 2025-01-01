#include <bits/stdc++.h>

using namespace std;

// vector<int> merge(vector<int> a, vector<int> b) {

//     vector<int> c(a.size() + b.size());

//     int i = 0, j = 0, k = 0;

//     while (i < a.size() && j < b.size()) {

//         if (a[i] > b[j])
//             c[k++] = b[j++];
//         else 
//             c[k++] = a[i++];
//     }

//     while (i < a.size()) {
//         c[k++] = a[i++];
//     }

//     while (j < b.size()) {
//         c[k++] = b[j++];
//     }

//     return c;
// }

// vector<int> mergeSort(vector<int> a, int start, int end) {

//     if (start == end)
//         return {a[start]};

//     int mid = (start + end) / 2;

//     return merge(mergeSort(a, start, mid), mergeSort(a, mid+1, end));
// }


void merge(vector<int>& a, int start, int mid, int end) {

    vector<int> temp(end - start + 1);

    int i = start, j = mid+1, k = 0;

    while (i <= mid && j <= end) {
        if (a[i] < a[j]) {
            temp[k++] = a[i++];
        }
        else {
            temp[k++] = a[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = a[i++];
    }

    while (j <= end) {
        temp[k++] = a[j++];
    }

    for (int idx = start; idx <= end; idx++) {
        a[idx] = temp[idx - start];
    }
}


void mergeSort(vector<int>& a, int start, int end) {

    // base case
    if (start >= end) return;

    int mid = start + (end - start) / 2;

    mergeSort(a, start, mid); // left half
    mergeSort(a, mid+1, end); // right half

    // merge the two halves
    merge(a, start, mid, end);
}


int main() {

    vector<int> a = {1, 3, 4, 34, 2,32, 2,3,2, 5,435,34};

    mergeSort(a, 0, a.size()-1);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}