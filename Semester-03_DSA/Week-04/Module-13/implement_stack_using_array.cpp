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
    myStack st; // static object not dynamic because we don't need to make any other stack in other functions 
    st.push(10); // we are not using -> sign cause we use -> only if the object is dynamic object , static object is called using only a (.)
    st.push(20);
    st.push(30);

    cout<<st.top()<<endl;

    st.pop(); // if we remove all the values of the stack with pop it will say segmentation fault when trying to print the empty stack

    if (!st.empty()) // it's to prevent printing empty stack so we don't get any segmentation fault 
    {
        cout<<st.top()<<endl;
    }
    return 0;
}