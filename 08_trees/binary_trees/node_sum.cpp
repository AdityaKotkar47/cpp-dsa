#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node (int val) : data(val), left(nullptr), right(nullptr) {}
};

int nodeSum(Node *root) {

    if (root == nullptr) 
        return 0;
    
    int leftSum = nodeSum(root->left);
    int rightSum = nodeSum(root->right);

    return leftSum + rightSum + root->data;
}

int main() {

    

    return 0;
}