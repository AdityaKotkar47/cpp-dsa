#include <bits/stdc++.h>

using namespace std;

int main() {

    // 2d matrix has row pointers [which is a pointer to a pointer]

    int n = 3;
    int mat[n][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // we can access the elements using pointer dereference

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(*(mat + i) + j) << endl;
        }
    }

    return 0;
}