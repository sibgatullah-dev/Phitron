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

//-- This linked list cycle detection system is called slow fast cycle detection system which looks if the list is in a cycle or not 
void slow_fast_cycle_detection_method(Node* &head){
    Node* slow = head;
    Node* fast = head; 

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout<<"Cycle detected";
            break;
        }    
    }    
}

int main(){
    Node* head = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* tail = new Node(50);

    head->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;
    tail->next = b;
    
    slow_fast_cycle_detection_method(head);

    return 0;
}