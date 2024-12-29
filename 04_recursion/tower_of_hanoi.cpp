#include <bits/stdc++.h>

using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper) {

    if (n == 0)
        return;

    // move n-1 disks from src to helper
    towerOfHanoi(n-1, src, helper, dest);

    // move nth disk from src to dest
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;

    // move n-1 disks from helper to dest
    towerOfHanoi(n-1, helper, dest, src);
}

int main() {

    towerOfHanoi(3, 'A', 'C', 'B'); // A is the source, B is the helper, C is the destination

    return 0;
}