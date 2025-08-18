#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;cin>>val;
        s.insert(val);
    }

    for(auto it = s.begin(); it != s.end();it++){ // set doesn't work with index so we need iterators
        cout << *it <<endl; // iterators needs to be derefferenced before printing
    }
    
    return 0;
}