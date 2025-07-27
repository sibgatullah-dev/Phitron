#include<bits/stdc++.h>
using namespace std;
class stack{
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

int main(){

    return 0;
}