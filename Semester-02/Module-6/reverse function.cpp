#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    reverse(a,a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
cout<<endl;
    string s;cin>>s;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
    
    return 0;
}