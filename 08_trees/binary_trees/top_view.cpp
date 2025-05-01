#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node (int data) : data(data), left(nullptr), right(nullptr) {}
};


void topView(Node *root) {

    if (root == nullptr)
        return;
    
    map<int, int>  toppers; // horizontal distance -> node data
    pair<Node *, int> current = {root, 0}; // node pointer and horizontal distance
    queue<pair<Node *, int>> q;
    q.push(current);


    while (q.size() > 0) {

        current = q.front();
        q.pop();
        if (!toppers[current.second])
            toppers[current.second] = current.first->data;

        if (current.first->left)
            q.push({current.first->left, current.second - 1});

        if (current.first->right)
            q.push({current.first->right, current.second + 1});
    }

    for (auto &[key, value] : toppers)
        cout << value << " ";
    cout << endl;
}

int main() {

    // we need to print the top view of a binary tree
    // the top view is the set of nodes visible when the tree is viewed from the top
    // we we consider a vertical line passing through the root [as our origin], then top view contains
    // nodes which are at some horizontal distance from the root
    // we will traverse the tree in level order and store the first node of each horizontal distance in a map
    

    return 0;
}