#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left, *right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int idx = -1;

Node* buildTree(const vector<int> nodes) {

    idx++;
    if (nodes[idx] == -1) return nullptr;

    Node* root = new Node(nodes[idx]);

    root->left = buildTree(nodes);
    root->right = buildTree(nodes);
    
    return root;
}

int main() {

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    buildTree(nodes);

    return 0;
}