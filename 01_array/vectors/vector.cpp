#include <bits/stdc++.h>

using namespace std;

int main()
{

    // 1d vector initialization

    vector<int> v1 = {1, 2, 3, 4, 5};

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << "\n";

    // 2d vector initialization

    vector<vector<int>> v2 = {{1, 2, 3}, {4, 5}, {6}};

    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v2[i].size(); j++)
            cout << v2[i][j] << " ";
        cout << endl;
    }

    return 0;
}