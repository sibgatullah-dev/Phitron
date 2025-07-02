#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val= val;
        this->next= NULL;
    }
};

int main(){
    Node* head = new Node(10);//-- Node*(address) head(pointer name) new(keyword to access heap meory) Node(class name) 10(passing value to the constructor in class)
    //-- The node is stored in heap memory but the pointer name head is stored in stack memory
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;//-- head and a is a pointer not object
    (*a).next = b;

    cout<<head->val<<endl;
    cout<<head->next->val<<endl;
    cout<<head->next->next->val<<endl;

    return 0;
}