#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(list<int>& l) {
    auto head = l.begin();
    auto tail = prev(l.end());

    while (head != l.end() && tail != l.begin() && distance(head, tail) >= 0) {
        if (*head != *tail){
            return false;
        }
        if (head == tail||next(head) == tail){
             break;
        }
        ++head;
        --tail;
    }
    return true;
}

int main(){
    list<int> l ;
    int val;
    while(val != -1){
        cin>>val;
        if (val == -1) break;
        l.push_back(val);
    }
    
    if (is_palindrome(l))
        cout << "YES";
    else
        cout << "NO";
  
    return 0;
}