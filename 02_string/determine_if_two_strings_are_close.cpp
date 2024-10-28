// https://leetcode.com/problems/determine-if-two-strings-are-close/description/

#include <bits/stdc++.h>

using namespace std;

bool closeStrings(string word1, string word2)
{

    if (word1.length() != word2.length())
        return false;

    set<char> s1, s2;

    for (char &c : word1)
        s1.insert(c);
    for (char &c : word2)
        s2.insert(c);

    if (s1.size() != s2.size())
        return false;
    for (auto &it : s1)
    {
        if (s2.find(it) == s2.end())
            return false;
    }

    vector<int> a1(26, 0), a2(26, 0);

    for (char &c : word1)
        a1[c - 'a']++;
    for (char &c : word2)
        a2[c - 'a']++;

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    for (int i = 0; i < 26; i++)
    {
        if (a1[i] != a2[i])
            return false;
    }

    return true;
}

int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    // we perform three checks
    // 1. same lengths
    // 1. same unique characters
    // 2. all the char frequencies [unrelated to the actual character] are same for both strings

    cout << closeStrings(s1, s2) << endl;

    return 0;
}