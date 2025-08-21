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
        cout<< temp->val<<'\t';
        temp = temp->next;
    }
    
}

void reverse_liknked_list(Node* &head,Node* &tmp,Node* &tail){
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_liknked_list(head,tmp->next,tail);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
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
    
    reverse_liknked_list(head,head,tail);
    print_linked_list(head);
    cout<<endl;
    cout<<head->val<<endl;
    cout<<tail->val<<endl;
    return 0;
}