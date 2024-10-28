// from leetcode https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/

#include <bits/stdc++.h>

using namespace std;

bool areAlmostEqual(string s1, string s2)
{

    if (s1 == s2)
        return true;

    int idx1 = 0, idx2 = 0;
    bool gotFirst = false;

    for (int i = 0; i < s1.length(); i++)
    {

        if (s1[i] != s2[i])
        {
            if (gotFirst)
            {
                idx2 = i;
                break;
            }
            else
            {
                gotFirst = true;
                idx1 = i;
            }
        }
    }

    swap(s1[idx1], s1[idx2]);

    return s1 == s2;
}

int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    // getting both idx and swapping to check

    cout << areAlmostEqual(s1, s2) << endl;

    return 0;
}