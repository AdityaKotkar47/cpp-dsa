#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 10;
  
    // inbuilt function to convert decimal to binary
    cout << bitset<8>(n) << endl;

    // manual approach to convert decimal to binary
    int i = 0;
    int ans = 0;
    while (n > 0)
    {
        int bit = n % 2;
        ans += bit * pow(10, i);
        n /= 2;
        i++;
    }
    cout << ans << endl;

    // string approach to convert decimal to binary
    string binary = "";
    n = 10;
    while (n > 0)
    {
        binary += to_string(n % 2);
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    cout << binary << endl;

    return 0;
}