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

void print_forward(Node* head){
    Node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
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

void insert_at_any_position(Node* head,Node* tail,int idx, int val ){
    Node* newnode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tail;
    newnode->prev = tmp;
    tmp->next = newnode;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);
    

    head->next = a;

    a->prev = head;
    a->next = b;

    b->next = tail;
    b->prev = a;
    
    tail->prev = b;

    int idx,val;

    cout<<"enter the index"<<endl;
    cin>>idx;
    cout<<"enter the value"<<endl;
    cin>>val;

    insert_at_any_position(head,tail,idx,val);
  
    print_forward(head);
    cout<<"\n"<<endl;
    // print_backward(tail);

    return 0;
}