#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val  = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_in_tail(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head==NULL){// Corner case
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->prev = tail;
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

void print_backward(Node* tail){
    Node* tmp = tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->prev;
    }
    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1){
            break;
        }
        insert_in_tail(head,tail,val);
    }
    
    print_linked_list(head);
    cout<<endl;
    print_backward(tail);

    return 0;
}