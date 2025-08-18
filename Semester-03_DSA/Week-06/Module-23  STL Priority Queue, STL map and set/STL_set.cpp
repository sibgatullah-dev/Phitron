#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s; // set follows balanced bst by arranging the BST by it's self
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;cin>>val;
        s.insert(val); // O(logN)
    }

    for(auto it = s.begin(); it != s.end();it++){ // set doesn't work with index so we need iterators
        cout << *it <<' '; // iterators needs to be derefferenced before printing
    }
    
    cout<<'\n';
    cout<< "Input the number you want to find :";int num;cin>>num;
    if(s.count(num)){
        cout<<"present";
    }else cout<<"not present";
    
    return 0;
}