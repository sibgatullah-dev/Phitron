#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_in_tail(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    Node* tmp = head;
    while (tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tail->next = newnode;
    tail = newnode;
    
}

void print_linked_list(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp->val<<endl;
        temp = temp->next;
    }
    
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;
    insert_in_tail(head,tail,50);
    insert_in_tail(head,tail,60);
    insert_in_tail(head,tail,70);
    print_linked_list(head);
    return 0;
}