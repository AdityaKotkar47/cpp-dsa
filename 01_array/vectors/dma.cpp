#include <bits/stdc++.h>

using namespace std;

int main()
{

    // static memory allocation [in stack memory at compile time]
    int arr[] = {1, 2, 3};

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " "; // 1 2 3
    }
    cout << endl;

    // dynamic memory allocation [in heap memory at run time]
    int *n = new int[3]; // pointer n is created in main stack
    n[0] = 1;
    n[1] = 2;
    n[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        cout << n[i] << " "; // 1 2 3
    }
    cout << endl;

    // free the memory to avoid memory leak
    delete[] n;

    // for 2d arrays

    int **m = new int *[4];
    for (int i = 0; i < 4; i++)
    {
        m[i] = new int[3];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = i + j;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}