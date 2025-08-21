#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    list<int> l;

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

class myQueue{
    public:
    list<int> l;
    
    int sz = 0;

    void push(int val){ 
        l.push_back(val);
    }

    void pop(){ 
        l.pop_front();
    }

    int front(){ 
        return l.front();
    }
    int back(){ 
        return l.back();
    }

    int size(){ 
        return l.size();
    }

    bool empty(){  
        return l.empty();
    }

};


int main() {
    int n, m;
    cin >> n >> m;

    myStack a;
    myQueue b;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        a.push(val);
    }

    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        b.push(val);
    }

    if (n != m) {
        cout << "NO";
        return 0;
    }

    bool same = true;

    while (!a.empty() && !b.empty()) {
        if (a.top() != b.front()) {
            same = false;
            break;
        }
        a.pop();
        b.pop();
    }

    if (same)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
