#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<int>a(n+1);
    for (int i = 1; i <=n; i++)//-- O(n)
    {
        cin>>a[i];
    }

    while(q--){//-- O(q)
        int l,r;cin>>l>>r;
        int sum = 0;
        for (int i = l; i <=r; i++)//-- O(r)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
        
    }
    //-- O(q*r)
    return 0;
}
// this code will get TLE as the time complexity is too much 
