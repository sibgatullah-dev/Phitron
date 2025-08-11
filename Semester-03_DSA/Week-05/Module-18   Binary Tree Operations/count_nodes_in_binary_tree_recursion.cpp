#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* Right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->Right = NULL;
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
    f->Right = right;

    if(f->left)q.push(f->left);
    if(f->Right)q.push(f->Right);
   }
   return root;
   
}

int count_node(Node *root){
    if(root == NULL)return 0;
    int l = count_node(root->left);
    int r = count_node(root->Right);
    return l+r+1;
}

int main(){
    Node* root = level_input();
    cout<<count_node(root);
    return 0;
}