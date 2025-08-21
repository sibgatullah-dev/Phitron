#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {10,20,30};
    l.push_front(50);// inserting at head
    l.push_back(100);// inserting at tail

    for (int val : l)
    {
        cout<<val<<endl;
    }

    l.pop_front();// remove head
    l.pop_back();// remove tail
    for (int val : l)
    {
        cout << val <<endl;
    }
    
    

    return 0;
}