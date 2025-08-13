#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    int val;cin>>val;
    Node* root;
    if(val == -1)root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l,r; cin>>l>>r;
        Node* left,*right;
        if(l == -1)left = NULL;
        else left = new Node(l);
        if(r == -1)right = NULL;
        else right = new Node(r);

        f->left = left;
        f->right = right;

        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    return root;
    
}

bool search(Node* root , int val){
    if(root == NULL)return false;
    if(root->val == val)return true;
    if(root->val>val)return search(root->left,val);
    if(root->val<val)return search(root->right,val);
}

int main(){
    Node* root = input_tree();
    int val;cin>>val;
    if(search(root,val))cout<<'FOUND'<<endl;
    else cout<<'NOT FOUND'<<endl;
    return 0;
}

// the time complecity of binary serach in array is logN
// A binary tree has the time complexity of order of height O(h)
// Time complexity of a BST is O(h)