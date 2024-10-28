#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s; // ignores after whitespace, but null char gets added here
    cout << "s- " << s << "\nlength- " << s.length() << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, s); // for whitespaced input, delimiter is optional and excluded in actual input
    cout << "s- " << s << "\nlength- " << s.length() << endl;

    return 0;
}