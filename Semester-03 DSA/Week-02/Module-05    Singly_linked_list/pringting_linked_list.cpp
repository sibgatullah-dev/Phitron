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

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    
    Node* i = head;

    head->next = a;
    a->next = b;
    b->next = c;

    while (i != NULL)//-- Never move head or the dynamic linked list will get removed 
    {
        cout<<i->val<<endl;
        i = i->next;
    }
    
    i = head;
    
    return 0;
}