// from leetcode https://leetcode.com/problems/contains-duplicate/description/

#include <iostream>

using namespace std;

void bsort(int *arr, int len)
{

    int temp;

    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = 1; j < len; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

bool isDups(int *arr, int len)
{

    bsort(arr, len);

    for (size_t i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (size_t i = 1; i < len; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int len;
    cin >> len;

    int arr[len];
    for (size_t i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    if (isDups(arr, len))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}