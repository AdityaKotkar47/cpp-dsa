#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n) {

    // base case
    if (n == 0 || n == 1)
        return n;

    // recursive relation
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

    cout << fibonacci(5) << endl;

    return 0;
}