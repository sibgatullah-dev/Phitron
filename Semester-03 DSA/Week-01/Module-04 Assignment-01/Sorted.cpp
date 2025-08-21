#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int>& a) {
    for (int i = 1; i < a.size(); ++i) {
        if (a[i-1] > a[i]) {
            return false;
        }
    }
    return true;
}

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(sorted(a)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}