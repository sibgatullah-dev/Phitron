#include<bits/stdc++.h>
using namespace std;

class my_queue{
    public:
    list<int> l;
    
    int sz = 0;

    void push(int val){ // inserting at tail . push()
        l.push_back(val);
    }

    void pop(){ // deleting form head . pop()
        l.pop_front();
    }

    int front(){ // accissing  front
        return l.front();
    }
    int back(){ // accissing back
        return l.back();
    }

    int size(){ // return the size of the node
        return l.size();
    }

    bool empty(){ // checking if the linked list is empty or not 
        return l.empty();
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