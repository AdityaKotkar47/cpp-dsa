#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    int len = sizeof(arr)/sizeof(int);
    for (size_t i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0], max_idx{0}, min = arr[0], min_idx{0};

    for (size_t i = 0; i < len; i++)
    {
        if (arr[i] > max){
            max = arr[i];
            max_idx = i;
        }
        if (arr[i] < min){
            min = arr[i];
            min_idx = i;
        }
    }

    cout << max_idx << " " << max << endl;
    cout << min_idx << " " << min << endl;
    
    
    

    return 0;
}