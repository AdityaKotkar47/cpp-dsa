#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node (int val) : data(val), left(nullptr), right(nullptr) {}
};

int nodeCount(Node *root) {

    if (root == nullptr) 
        return 0;
    
    int leftCount = nodeCount(root->left);
    int rightCount = nodeCount(root->right);

    return leftCount + rightCount + 1;
}

int main() {

    

    return 0;
}