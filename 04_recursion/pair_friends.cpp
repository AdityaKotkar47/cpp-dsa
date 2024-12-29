#include <bits/stdc++.h>

using namespace std;

int pairFriends(int n) {

    // base case
    if (n == 2 || n == 1)
        return n;

    return pairFriends(n-1) + (n-1)*pairFriends(n-2);
}

int main() {

    // we need to find the number of ways to pair friends
    // we have n friends and we need to pair them up
    // we can pair them up in any way, a friend can be paired with any other friend or can be single

    // we can use recursion to solve this problem
    // so we will choose a friend and pair him with any other friend or make him single [A, B, C, D]
    // we will use the formula f(n) = f(n-1) + (n-1) * f(n-2)
    // f(n-1) is the number of ways to pair the friends when they are single [A]
    // (n-1) * f(n-2) is the number of ways to pair the friends when they are paired as (n-1) pairs can be made with n-1 friends for 1 friend [AB, AC, AD]

    cout << pairFriends(4);

    return 0;
}