#include <bits/stdc++.h>

using namespace std;

int main()
{

    // using right shift operator
    // them checking the LSB
    int n = 5, i = 2;
    if ((n >> i) & 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    // using left shift operator
    // to create a mask
    // then checking the ith bit
    if (n & (1 << i))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}