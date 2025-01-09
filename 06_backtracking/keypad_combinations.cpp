// from leetcode https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
#include <bits/stdc++.h>

using namespace std;

void bfs(int pos, int len, string ans, string Dig, vector<vector<char>> L)
{
    // if the position is equal to the length of the digits, print the answer
    if (pos == len)
    {
        cout << ans << endl;
    }
    else
    {
        // get the letters for the current digit
        vector<char> letters = L[Dig[pos] - '0'];
        // for each letter, call the bfs function with the next position and the new answer
        for (int i = 0; i < letters.size(); i++)
            bfs(pos + 1, len, ans + letters[i], Dig, L);
    }
}
void letterCombinations(string Dig, vector<vector<char>> L)
{
    int len = Dig.size();
    // if the length of the digits is 0, print an empty string
    if (len == 0)
    {
        cout << "";
        return;
    }
    string ans = "";
    bfs(0, len, ans, Dig, L);
}
int main()
{
    vector<vector<char>> L = {{}, {}, {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'},
                            {'m', 'n', 'o'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}};
    string digits = "23";
    letterCombinations(digits, L);
    return 0;
}