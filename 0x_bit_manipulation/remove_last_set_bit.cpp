#include <bits/stdc++.h>

using namespace std;

int main()
{

    // the rightmost set bit will be removed
    // when 1 is subtracted from it, all bits to the right of it will flip including itself
    int n = 5;
    cout << (n & (n - 1)) << endl;

    return 0;
}