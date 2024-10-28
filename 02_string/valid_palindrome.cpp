// from leetcode https://leetcode.com/problems/valid-palindrome/description/

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{

    int start = 0, end = s.length() - 1;

    while (start < end)
    {

        while (start < end && !isalnum(s[start]))
        {
            start++;
        }

        while (start < end && !isalnum(s[end]))
        {
            end--;
        }

        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main()
{

    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    string s3 = "";

    // checking if char at start and end are same while ignoring non-alphanumeric characters

    cout << isPalindrome(s1) << endl;
    cout << isPalindrome(s2) << endl;
    cout << isPalindrome(s3) << endl;

    return 0;
}