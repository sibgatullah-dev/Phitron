#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {20,30,40,10,60,40,90,10,80};
    l.sort();// sorting the linked list in assending
    l.remove(10);// removing every 10 in the linked list
    for (int val:l)
    {
        cout<<val<<'\t';
    }
    cout<<endl;

    l.sort(greater<int>());// sorting the linked list in disending 
    for (int val:l)
    {
        cout<<val<<'\t';
    }

    cout<<endl;
    
    l.unique(); //removing the duplicate values in the linked list (works only if the list is sorted)
    for (int val:l)
    {
        cout<<val<<'\t';
    }
    

    return 0;
}