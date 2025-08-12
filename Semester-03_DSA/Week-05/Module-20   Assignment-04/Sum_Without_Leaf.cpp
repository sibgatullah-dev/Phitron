#include<bits/stdc++.h>
using namespace std ;

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
    Node* root ;
    if(val == -1){
        root = NULL;
    }else{ root = new Node(val); }

    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        Node *left,*right;
        int l,r;cin>>l>>r;
        if (l == -1)
        {
            left = NULL;
        }else{left = new Node(l);}
        if (r == -1)
        {
            right = NULL;
        }else{right = new Node(r);}
        
        f->left = left;
        f->Right = right;

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->Right)
        {
            q.push(f->Right);
        }
        
    }
    return root;
    
}

int level_print(Node* root){
    int sum = 0;
     if(root == NULL){
        return 0;
    }
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        if (f->left != NULL || f->Right != NULL) {
            sum += f->val;
        }

        if(f->left != NULL ){
            q.push(f->left);
        }
        if(f->Right != NULL){
            q.push(f->Right);
        }
        
    }
    return sum;
    
}


int main(){
    Node* root = level_input();
    int sum = level_print(root);
    cout<<sum<<endl;
    return 0;
}