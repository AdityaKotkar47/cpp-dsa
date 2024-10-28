#include <bits/stdc++.h>

using namespace std;

int main()
{

    // char word[10];
    // cin >> word; // ignores after whitespace, but null char gets added here
    // cout << "word- " << word << "\nlength- " << strlen(word) << endl;

    char sentence[50];
    cin.getline(sentence, 50, '.'); // for whitespaced input, delimiter is optional and excluded in actual input
    cout << "sentence- " << sentence << "\nlength- " << strlen(sentence) << endl;

    return 0;
}