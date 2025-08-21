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

void level_order(Node* root){
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
Node* root = new Node(10);
Node* a = new Node(20);
Node* b = new Node(30);
Node* c = new Node(40);
Node* d = new Node(50);
Node* e = new Node(60);

root->left = a;
root->Right = b;
a->left = c;
b->left = d;
b->Right = e;


level_order(root);
    return 0;
}