#include <iostream>

using namespace std;

int linearSearch(int arr[], int len, int target)
{
    for (int i{0}; i < len; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i{0}; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;

    int result = linearSearch(a, n, key);

    cout << result;

    return 0;
}