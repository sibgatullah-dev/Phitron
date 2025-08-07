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

int main(){
    Node* root = new Node(10);
    Node* ra = new Node(20);
    Node* rb = new Node(30);
    Node* raa = new Node(40);
    Node* rab = new Node(50);
    Node* rba = new Node(60);
    Node* rbb = new Node(70);

    root->left = ra;
    root->right = rb;

    ra->left = raa;
    ra->right = rab;

    rb->left = rba;
    rb->right = rbb; 
    return 0;
}
