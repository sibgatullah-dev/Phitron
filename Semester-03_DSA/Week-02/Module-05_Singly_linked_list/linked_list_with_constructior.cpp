#include<bits/stdc++.h>
using namespace std;

class Node{//-- Node class for linked list
    public:
        int val;//-- value
        Node* next;//-- pointer for next node(Object)

    Node(int val){//-- constructor
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    Node a(10),b(20),c(30);

    a.next= &b;//-- Pointing address of object b
    b.next= &c;//-- Pointing address of object c

    cout<<a.val<<endl;//-- First Node is called Head
    cout<<a.next->val<<endl;
    cout<<a.next->next->val<<endl;

    return 0;
}