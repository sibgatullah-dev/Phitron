#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* Right;  // Capital R
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->Right = NULL;
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
        Node* f = q.front();
        q.pop();

        int l, r;
        if (!(cin >> l >> r)) break;

        Node* left = (l == -1) ? NULL : new Node(l);
        Node* right = (r == -1) ? NULL : new Node(r);

        f->left = left;
        f->Right = right;

        if (left) q.push(left);
        if (right) q.push(right);
    }
    return root;
}

void printLevel(Node* root, int X) {
    if (!root) {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});
    bool found = false;

    while (!q.empty()) {
        auto [node, level] = q.front();
        q.pop();

        if (level == X) {
            cout << node->val << " ";
            found = true;
        }

        if (node->left) q.push({node->left, level + 1});
        if (node->Right) q.push({node->Right, level + 1});
    }

    if (!found) {
        cout << "Invalid";
    }
    cout << endl;
}

int main() {
    Node* root = level_input();
    int X; 
    cin >> X;

    printLevel(root, X);

    return 0;
}
