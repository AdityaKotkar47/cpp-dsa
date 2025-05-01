#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node (int val) : data(val), left(nullptr), right(nullptr) {}
};

int height(Node *root) {

    if (root == nullptr) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    // return the maximum of the two lengths + 1 for the current node
    return max(leftHeight, rightHeight) + 1;
}

int main() {

    

    return 0;
}