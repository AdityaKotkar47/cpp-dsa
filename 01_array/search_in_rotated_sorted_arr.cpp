// from leetcode https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include <iostream>

using namespace std;

int getUnknownPivotIdx(int* arr, int len){

    // the pivot index separates the two sorted arrays
    // for our solution, the pivot idx will be first idx of 2nd sorted arr

    for (size_t k = 1; k < len; k++)
    {
        if (arr[k] < arr[k-1]){
            return k;
        }
    }

    return -1;
    
}

int binarySearch(int* arr, int len, int target){

    int start = 0,mid, end = len -1;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == target){
            return mid;
        } else if (arr[mid] > target){
            end = mid -1;
        } else {
            start = mid +1;
        }
    }

    return -1;
    
    

}


int binarySearchPivoted(int* arr, int len, int target, int k){

    // search in first part
    int start = 0,mid, end = k;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == target){
            return mid;
        } else if (arr[mid] > target){
            end = mid -1;
        } else {
            start = mid +1;
        }
    }

    start = k;
    end = len -1;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == target){
            return mid;
        } else if (arr[mid] > target){
            end = mid -1;
        } else {
            start = mid +1;
        }
    }

    return -1;

}

int main(int argc, char** argv) {

    // current approach
    // find the unknown k
    // two binary searches
    // one from 0 to k -1
    // other from k to n - 1

    int arr[] = {4,5,6,7,0,1,2};
    int len = sizeof(arr) / sizeof(int);

    int target = 4;

    int k = getUnknownPivotIdx(arr, len);
    
    // k is absent or present
    if (k == -1){
        cout << binarySearch(arr, len, target) << endl; 
    } else {
        cout << binarySearchPivoted(arr, len, target, k) << endl;
    }

    

    return 0;
}