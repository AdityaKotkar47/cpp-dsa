#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left, * right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int height1(Node *root) {

    if (root == nullptr)
        return 0;

    int leftHeight = height1(root->left);
    int rightHeight = height1(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int diameter1(Node *root) {

    if (root == nullptr) 
        return 0;
    
    // calculate the diameter of the left and right subtrees
    int leftDiameter = diameter1(root->left);
    int rightDiameter = diameter1(root->right);

    // calculate the diameter of the current node
    int currentDiameter = height1(root->left) + height1(root->right) + 1;

    return max(currentDiameter, max(leftDiameter, rightDiameter));
}

// diameter, height
pair<int, int> diameter2(Node *root) {

    if (root == nullptr)
        return {0, 0};
    
    pair<int, int> leftInfo = diameter2(root->left);
    pair<int, int> rightInfo = diameter2(root->right);

    int currentDiameter = leftInfo.second + rightInfo.second + 1;   
    int currentHeight = max(leftInfo.second, rightInfo.second) + 1;

    return {max(currentDiameter, max(leftInfo.first, rightInfo.first)), currentHeight};

}

int main() {

    // Diameter of a binary tree is the longest path between any two nodes in a tree.
    // The path may or may not pass through the root.

    // Approach 1:
    // We will go through each node and calculate the height [using a helper function] of the left and right subtrees as if that node is the root in the longest path.
    // Time Complexity: O(n^2)
    // Space Complexity: O(n)

    // Approach 2:
    // We will calculate both the diameter and height in a single pass so they can be used to calculate the diameter of the current node.
    // Time Complexity: O(n)
    // Space Complexity: O(n)

    return 0;
}