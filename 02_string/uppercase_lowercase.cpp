#include <bits/stdc++.h>

using namespace std;

void toUpper(char string[], int n) {

    for (int i = 0; i < strlen(string); i++) {

        if (string[i] >= 'a' && string[i] <= 'z') string[i] -= 32; // 'a' - 'A'
    }
    cout << string << endl;
}

void toLower(char string[], int n) {

    for (int i = 0; i < strlen(string); i++) {

        if (string[i] >= 'A' && string[i] <= 'Z') string[i] += 32; // 'a' - 'A'
    }
    cout << string << endl;
}

int main() {

    char string[50];
    cin.getline(string, 50);

    toUpper(string, strlen(string));
    toLower(string, strlen(string));

    return 0;
}