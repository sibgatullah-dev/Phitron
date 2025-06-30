#include<bits/stdc++.h>
using namespace std;

class Node{//-- Node class for linked list
    public:
    int val;//-- value
    Node* next;//-- pointer for next node(Object)
};

int main(){
    Node a,b,c;
    a.val= 10; a.next= &b;//-- Pointing address of object b
    b.val= 20; b.next= &c;//-- Pointing address of object c
    c.val= 30; c.next= NULL;//-- Pointing NULL address (empty)

    cout<<a.val<<endl;//-- First Node is called Head
    cout<<a.next->val<<endl;//-- (*a.next).val = a.next->val derefferencing to get the value of next pointer
    cout<<a.next->next->val<<endl;//-- taking the value of a.next pointer and continuing to b.next pointer to c.val

    return 0;
}