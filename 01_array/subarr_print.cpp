#include <iostream>

using namespace std;

void printSubarray(int *arr, int len)
{
    // the first two loops only get the (start, end) values
    // the third loop prints values from start to end indexes
    for (size_t start = 0; start < len; start++)
    {
        for (size_t end = start; end < len; end++)
        {
            for (size_t idx = start; idx <= end; idx++)
            {
                cout << arr[idx];
            }
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(int);

    printSubarray(arr, len);

    return 0;
}