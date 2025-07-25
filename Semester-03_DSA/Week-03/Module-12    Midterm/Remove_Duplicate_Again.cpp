#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l ;
    int val;
    while(val != -1){
        cin>>val;
        if (val == -1) break;
        l.push_back(val);
    }

    if (!l.empty()){
        list<int>::iterator head = l.begin();
        list<int>::iterator tail = l.end();
    }
    l.sort();
    l.unique();

    for (int val : l)
    {
        cout<<val<<' ';
    }
    
    return 0;
}