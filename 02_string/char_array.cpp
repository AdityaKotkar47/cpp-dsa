#include <bits/stdc++.h>

using namespace std;

int main()
{

    char a[] = "work";  // that's a const string literal initialization
    char b[5] = "code"; // null char gets added automatically and required space

    cout << a << "\t" << b << endl; // can be printed directly

    char c[] = {'4', ' ', 'd', 'a', 'y', 's', '\0'}; // called c-strings when explicitly terminated using null char
    char d[5] = {'\n', 'd', 'u', 'm', 'p'};          // an actual char array
    cout << c << d << endl;

    return 0;
}