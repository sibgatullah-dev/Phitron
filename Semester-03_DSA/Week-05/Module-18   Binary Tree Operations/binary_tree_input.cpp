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

Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
    if(val == -1){
        root = NULL;
    }else root = new Node(val);
    queue<Node *> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        Node *thisLeft,*thisRight;
        int l,r;cin>>l>>r;
        if(l == -1){
            thisLeft = NULL;
        }else{thisLeft = new Node(l);}
        if(r == -1){
            thisRight = NULL;
        }else{thisRight = new Node(r);}
        
        f->left = thisLeft;f->Right = thisRight;

        if(f->left){
            q.push(f->left);
        }
        if(f->Right){
            q.push(f->Right);
        }
    }
    return root;
}

void level_order(Node* root){
    if(root == NULL){
        cout<<"No Tree";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        // 1. Ber kore ana
        Node* f = q.front();
        q.pop();

        // 2. Oi node ke niye kaj 
        cout<<f->val<<' ';

        // 3. children ke push kora 
        if(f->left != NULL ){
            q.push(f->left);
        }
        if(f->Right != NULL){
            q.push(f->Right);
        }

    }
}

int main(){
   Node* root = input_tree();
   level_order(root);
   return 0;
}