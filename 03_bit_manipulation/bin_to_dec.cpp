#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 1010;

    // manual approach to convert binary to decimal
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        ans += bit * pow(2, i);
        n /= 10;
        i++;
    }
    cout << ans << endl;

    // string approach to convert binary to decimal
    string binary = "1010";
    int decimal = 0;
    for (int i = 0; i < binary.size(); i++)
    {
        decimal += (binary[i] - '0') * pow(2, binary.size() - i - 1);
    }
    cout << decimal << endl;

    return 0;
}