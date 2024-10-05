#include <bits/stdc++.h>

using namespace std;

int main()
{

    // convert decimal to binary string
    int n = 10;
    string binary = std::bitset<8>(n).to_string();

    // convert decimal to binary
    n = 20;
    int bin = 0;
    int i = 0;
    while (n > 0)
    {
        int rem = n % 2;
        n = n / 2;
        bin += rem * pow(10, i);
        i++;
    }

    // operators
    int a = 10, b = 20;
    // a and b in binary
    cout << binary << endl;
    cout << bin << endl;

    cout << (a & b) << endl;  // 1 only if both a and b are 1
    cout << (a | b) << endl;  // 1 if either a or b is 1
    cout << (a ^ b) << endl;  // 1 if a and b are different
    cout << (~a) << endl;     // 1 if a is 0 and 0 if a is 1
    cout << (a << 2) << endl; // 10 * 2^2
    cout << (a >> 2) << endl; // 10 / 2^2

    return 0;
}