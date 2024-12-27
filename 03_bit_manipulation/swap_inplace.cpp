#include <bits/stdc++.h>

using namespace std;

int main()
{

    // using xor
    // its commutative and associative
    // x ^ x = 0, x ^ 0 = x

    int a = 10, b = 20;

    cout << a << " " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;

    return 0;
}