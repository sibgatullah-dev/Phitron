#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class my_queue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val){ // inserting at tail . push()
        sz++;// keeping track of how many node gets pushed in the linked list
        Node* newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop(){ // deleting form head . pop()
        sz--;// keeps track of how many nodes gets popped from the linked list 
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front(){ // accissing  front
        return head->val;
    }
    int back(){ // accissing back
        return tail->val;
    }

    int size(){ // return the size of the node
        return sz;
    }

    bool empty(){ // checking if the linked list is empty or not 
        if(head == NULL){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    my_queue q;
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;cin>>val;
        q.push(val);
    }
    cout<< q.front() <<' '<< q.back() << ' '<< q.size()<<endl;
    while (!q.empty())
    {
        cout<< q.front() <<endl;
        q.pop();
    }
    

    return 0;
}