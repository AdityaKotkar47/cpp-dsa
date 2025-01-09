#include <bits/stdc++.h>

using namespace std;

void permutations(string s, string sub = "") {

    if (s.size() == 0) {
        cout << sub << endl;
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        permutations(s.substr(0, i) + s.substr(i+1, s.length()), sub + s[i]); // ith character choice
    }
}

int main() {

    // task is to find and print all the permutations of a given string
    // for a string of length n, total permutations = n!
    // so O(n!) will be the time complexity
    // so at a particular index, all of the characters can be placed
    // and remove the characters which have been already included in a permutation

    string s = "abc";
    permutations(s);

    return 0;
}