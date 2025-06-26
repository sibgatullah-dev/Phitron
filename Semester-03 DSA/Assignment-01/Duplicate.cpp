#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    int flag = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i]==a[i-1])
        {
            flag=1;
            break;
        }
    }
    
    if (flag==1)
    {
        cout<<"YES";
    }else if (flag==0)
    {
        cout<<"NO";
    }
    
    
    return 0;
}