#include <bits/stdc++.h>

using namespace std;

void subsets(string s, int i = 0, string sub = "") {

    if (i == s.length()) {
        cout << sub << endl;
        return;
    }

    subsets(s, i+1, sub + s[i]); // included
    subsets(s, i+1, sub); // excluded

}

int main() {

    string s = "abc";
    
    // task is to print all the possible subsets of a given string
    // for a string of length n, total subsets = 2^n
    // so O(2^n) will be the time complexity
    // each character will have a choice of whether to be included or not in the substring
    // so we will firstly include it, and then backtrack to exclude it

    subsets(s);

    return 0;
}