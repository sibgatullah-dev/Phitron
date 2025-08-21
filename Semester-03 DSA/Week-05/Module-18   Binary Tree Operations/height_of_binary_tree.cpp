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

Node* level_input(){
    int val;cin>>val;
    Node* root;
    if(val == -1) root = NULL; 
    else root = new Node(val);
    queue<Node*> q;
    q.push(root);
   while (!q.empty())
   {
    Node* f = q.front();
    q.pop();
    int l,r;cin>>l>>r;
    Node* left,*right;
    if(l == -1)left = NULL;else left = new Node(l);
    if(r == -1)right = NULL;else right = new Node(r);
    
    f->left = left;
    f->right = right;

    if(f->left)q.push(f->left);
    if(f->right)q.push(f->right);
   }
   return root;
   
}

int height(Node *root){
    if(root == NULL)return 0;
    if(root->left == NULL && root->right==NULL)return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}

int main(){
    Node* root = level_input();
    cout<<height(root);
    return 0;
}