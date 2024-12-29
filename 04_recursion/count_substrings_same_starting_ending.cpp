#include <bits/stdc++.h>

using namespace std;

int countSubstringsSameStartingEnding(string s, int i, int j, int n) {

    // base case
    if (n == 1) return 1;
    if (n <= 0) {
        return 0;
    }

    // recursive relation
    int res = countSubstringsSameStartingEnding(s, i + 1, j, n - 1)
            + countSubstringsSameStartingEnding(s, i, j - 1, n - 1)
            - countSubstringsSameStartingEnding (s, i + 1, j - 1, n - 2);
    
    if (s[i] == s[j]) res++;
    
    return res;
}

int main() {

    // we need to find the count of all contiguous substrings starting and ending with the same character

    cout << countSubstringsSameStartingEnding("abcab", 0, 4, 5);

    return 0;
}