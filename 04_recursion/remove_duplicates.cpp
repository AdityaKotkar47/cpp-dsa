#include <bits/stdc++.h>

using namespace std;

string removeDuplicates(string s) {

    if (s.length() == 0)
        return "";

    // we will take a char, and check if it is present in the remaining string
    // continue if present, else add to result
    char ch = s[0];
    string ans = removeDuplicates(s.substr(1));

    // if the first char is present in the remaining string, then we will return the remaining string
    // else we will add the first char to the remaining string
    if (ch == ans[0])
        return ans;
    else
        return ch + ans;
}

int main() {

    // remove duplicates in a string [string is either lowercase or uppercase]
    // hashing is more optimal, but we will do it using recursion

    string s = "aabbcc";

    // we will take a char, and check if it is present in the remaining string
    // continue if present, else add to result
    cout << removeDuplicates(s) << endl;

    return 0;
}