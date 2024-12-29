#include <bits/stdc++.h>

using namespace std;

void binaryStrings(int n, string s = "", int prev = 0) {

    if (n == 0) {
        cout << s << endl;
        return;
    }

    if (prev == 1) {

        binaryStrings(n-1, s+"0", 0);
    }
    else {
        binaryStrings(n-1, s+"1", 1);

        binaryStrings(n-1, s+"0", 0);
    }

}

int main() {

    // we need to find the number of binary strings of length n that do not have consecutive 1s

    // we will build up the string till the end using recursion
    // we will use a prev variable to check if the last character is 1 or 0
    // if the last character is 1, we will add 0 to the string
    // if the last character is 0, we will once add 1 and once add 0 to the string
    // we will call the function recursively for n-1 times

    binaryStrings(3);

    return 0;
}