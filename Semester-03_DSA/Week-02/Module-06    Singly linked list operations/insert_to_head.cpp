#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val= val;
        this->next= NULL;
    }
};

void insert_at_head(Node*&head,int val){
    Node* newnode = new Node(val);
    newnode->next=head;
    head = newnode;
}

void print_linked_list(Node *head){
    Node* i = head;
    while(i != NULL){
        cout<< i->val <<endl;
        i = i->next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_head(head,100);
    insert_at_head(head,200);
    insert_at_head(head,300);
    print_linked_list(head);
    return 0;
}
