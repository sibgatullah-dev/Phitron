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

void insert_in_middle(Node* &head,int val,int idx){
    Node* newnode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next = newnode;
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<< tmp->val <<endl;
        tmp = tmp->next;
    }
    
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;

    insert_in_middle(head,100,2);
    print_linked_list(head);
    return 0;
}