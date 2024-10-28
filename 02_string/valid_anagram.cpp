// from leetcode https://leetcode.com/problems/valid-anagram/description/

#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t)
{

    if (s.length() != t.length())
        return false;

    vector<int> freq(26, 0);

    for (char &c : s)
        freq[c - 'a']++;

    for (char &c : t)
        freq[c - 'a']--;

    for (int &num : freq)
        if (num != 0)
            return false;

    return true;
}

int main()
{

    string s = "anagram";
    string t = "nagaram";

    // checking if frequencies are same

    cout << isAnagram(s, t) << endl;

    return 0;
}