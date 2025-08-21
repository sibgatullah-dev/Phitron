#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int main(){
    priority_queue<int>max_pq;
    max_pq.push(10);
    max_pq.push(5);
    max_pq.push(15);
    max_pq.push(30);
    cout<<max_pq.top()<<endl;
    max_pq.pop();
    cout<<max_pq.top()<<endl;


    priority_queue<int, vector<int>,greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(5);
    min_pq.push(15);
    min_pq.push(30);
    cout<<min_pq.top();
    return 0;
}