#include <bits/stdc++.h>

using namespace std;

struct Node {
public:
    int val;
    Node *left;
    Node *right;

    Node (int val) : val(val), left(nullptr), right(nullptr) {}
};

bool isIdentical(Node *root, Node *subRoot) {

    if (root == nullptr and subRoot == nullptr)
        return true;
    else if (root == nullptr or subRoot == nullptr)
        return false;
    
    if (root->val != subRoot->val)
        return false;
    
    return isIdentical(root->left, subRoot->left) and isIdentical(root->right, subRoot->right);
}

bool isSubtree(Node *root, Node *subRoot) {

    if (root == nullptr and subRoot == nullptr)
        return true;
    else if (root == nullptr or subRoot == nullptr)
        return false;
    
    if (root->val == subRoot->val) {
        // checking rest subtree
        // if we early return false here, we might miss some other node which matches subroot
        // so only return from here if found [true]
        if (isIdentical(root, subRoot))
            return true;
    }
    
    bool leftFound = isSubtree(root->left, subRoot);
    if (!leftFound)
        return isSubtree(root->right, subRoot);
    
    return true;
}

int main() {

    // we need to check if one tree is a subtree of another tree.
    // we can do this by checking if the root of the first tree is equal to the root of the second tree.
    // if it is, we need to check if the left and right subtrees of the first tree are equal to the left and right subtrees of the second tree.
    // if they are, we return true.
    // otherwise, we return false.
    


    return 0;
}