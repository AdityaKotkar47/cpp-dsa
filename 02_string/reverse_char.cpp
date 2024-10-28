#include <bits/stdc++.h>

using namespace std;

int main() {

    char ar[10] = "12345";

    cout << ar << endl;
    for (int i = 0; i < strlen(ar)/2; i++) {
        swap(ar[i], ar[strlen(ar)-i-1]);
    }
    cout << ar << endl;

    return 0;
}