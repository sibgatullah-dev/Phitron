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

void insert_in_tail(Node* &head, int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        return;f
    }

    Node* tmp = head;
    while (tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
    
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
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    insert_in_tail(head,50);
    insert_in_tail(head,60);
    insert_in_tail(head,70);
    print_linked_list(head);
    return 0;
}