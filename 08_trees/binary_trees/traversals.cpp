#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left, *right;
    
    
};

void preOrder(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {
    if (root == nullptr) return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root) {
    if (root == nullptr) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node* root) {
    if (root == nullptr) return;

    // using queue to store the nodes in level order
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        
        cout << curr->data << " ";
        
        if (curr->left != nullptr) {
            q.push(curr->left);
        }
        if (curr->right != nullptr) {
            q.push(curr->right);
        }
    }
}

void levelOrderLineByLine(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        // print all nodes in the current level
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();
            cout << curr->data << " ";

            if (curr->left != nullptr) {
                q.push(curr->left);
            }
            if (curr->right != nullptr) {
                q.push(curr->right);
            }
        }
        cout << endl;
    }       
}   

int main() {

    

    return 0;
}