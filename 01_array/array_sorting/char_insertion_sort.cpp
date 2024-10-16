#include <bits/stdc++.h>

using namespace std;

void alphabetInsertionSort(char arr[], int n) {

    for (int i = 1; i < n; i++) {

        char curr = arr[i];
        int prev = i-1;

        while (prev >= 0 && arr[prev] < curr) {

            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }
}

int main() {

    int n = 6;
    char ch[n] = {'f', 'b', 'a', 'e', 'c', 'd'};
    alphabetInsertionSort(ch, n);

    return 0;
}