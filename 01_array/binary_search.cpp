#include <iostream>

using namespace std;

int binarySearch(int *arr, int len, int target)
{

    int start{0}, mid, end{len};

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char **argv)
{

    int arr[] = {3, 65, 543, 833, 3210, 6574, 54334, 68766, 98765};
    int len = sizeof(arr) / sizeof(int);

    int key;

    if (argc != 2)
    {
        cout << "cli arg dedeta, chal thik hai yaha type kar : ";
        cin >> key;
    }
    else
    {
        key = stoi(argv[1]);
    }

    // cin >> key;

    int idx = binarySearch(arr, len, key);

    cout << idx << endl;

    return 0;
}