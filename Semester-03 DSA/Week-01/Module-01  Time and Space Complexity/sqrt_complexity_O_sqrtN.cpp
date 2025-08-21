#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for (int i = 1; i <= sqrt(n); i++)//-- sqrt() is function for squrare root
    {
        cout<<i<<endl;
    }

    for (int i = 1 ; i*i<=n ; i++)//--  for squrare root
    {
        cout<<i<<endl;
    }

    //-- O(sqrt(N))
    
    return 0;
}