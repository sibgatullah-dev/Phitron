#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_in_tail(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head==NULL){// Corner case
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

void print_reverse(Node* tmp){
    if (tmp == NULL)
    {
        return;
    }
    print_reverse(tmp->next);
    cout << tmp->val <<endl;
    
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
    
    print_reverse(head);
    return 0;
}