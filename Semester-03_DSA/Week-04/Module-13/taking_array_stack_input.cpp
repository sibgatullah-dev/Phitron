#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int> v; // taking the stack with vector 

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
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