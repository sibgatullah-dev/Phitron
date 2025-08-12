#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* Right;
    Node(int v) {
        val = v;
        left = NULL;
        Right = NULL;
    }
};

Node* level_input() {
    int val;
    cin >> val;
    if (val == -1) return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* f = q.front(); q.pop();
        int l, r;
        if (!(cin >> l >> r)) break;
        if (l != -1) f->left = new Node(l), q.push(f->left);
        if (r != -1) f->Right = new Node(r), q.push(f->Right);
    }
    return root;
}


void leftLeaves(Node* root) {
    if (!root) return;
    if (!root->left && !root->Right) { // leaf
        cout << root->val << " ";
        return;
    }
    leftLeaves(root->left);
    if (root->left || root->Right) cout << root->val << " ";
}

void rightLeaves(Node* root) {
    if (!root) return;
    cout << root->val << " ";
    if (root->Right) rightLeaves(root->Right);
    else if (root->left) rightLeaves(root->left);
}

int main() {
    Node* root = level_input();
    if (!root) return 0;

    leftLeaves(root->left);
    cout << root->val << " ";
    rightLeaves(root->Right);
}
