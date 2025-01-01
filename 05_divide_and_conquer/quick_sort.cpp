#include <bits/stdc++.h>

using namespace std;

int partition(vector<int>& v, int start, int end) {

    int i = start-1, pivot = v[end];

    // move all elements less than or equal to the pivot to the left of the pivot
    for (int j = start; j < end; j++)
        if (v[j] <= pivot) 
            swap(v[++i], v[j]);
    
    // move the pivot to its new position
    swap(v[++i], v[end]);

    // return the new index of the pivot
    return i;
}

void quickSort(vector<int>& v, int start, int end) {

    // base case
    if (start >= end) return;
 
    // partition around pivot to get the new index of the pivot
    int pivot = partition(v, start, end);

    // recursive calls
    quickSort(v, start, pivot-1);
    quickSort(v, pivot+1, end);

}

int main() {

    vector<int> a = {11, 2, 73, 44, 5, 63, 134, 8, 9, 10};

    quickSort(a, 0, a.size()-1);

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    return 0;
}