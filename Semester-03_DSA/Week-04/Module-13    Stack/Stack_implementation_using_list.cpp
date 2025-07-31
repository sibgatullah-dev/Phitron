#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int> l; // taking the stack with lector 

    void push(int lal){
        l.push_back(lal);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }

};

// Before accessing pop() or top() always check if the stack is empty or not . if not checked it can make large number of errors 

int main(){
    myStack st; 
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        st.push(x);
    }
    cout<<endl;
    while (!st.empty()) // LIFO technique (Last In First Out)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}