#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* Right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->Right = NULL;
    }
};

Node* level_input() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }

    queue<Node*> q;
    if (root) q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* left;
        Node* right;

        if (l == -1) left = NULL;
        else left = new Node(l);

        if (r == -1) right = NULL;
        else right = new Node(r);

        f->left = left;
        f->Right = right;

        if (f->left) q.push(f->left);
        if (f->Right) q.push(f->Right);
    }
    return root;
}

string isPerfect(Node* root) {
    if (!root) return "YES";

    queue<pair<Node*, int>> q;
    q.push({root, 1});
    int depth = -1;

    while (!q.empty()) {
        auto [node, depth] = q.front();
        q.pop();

        if (!node->left && !node->Right) {
            if (depth == -1) depth = depth;
            else if (depth != depth) return "NO";
        } 
        else {
            if (!node->left || !node->Right) return "NO";
            q.push({node->left, depth + 1});
            q.push({node->Right, depth + 1});
        }
    }
    return "YES";
}

int main() {
    Node* root = level_input();
    cout << isPerfect(root) << endl;
    return 0;
}
