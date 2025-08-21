#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int val;cin>>val;
    v.push_back(val);
    int cur_index = v.size()-1;
    while (cur_index != 0)
    {
        int par_index = (cur_index-1)/2;
        if(v[par_index]< v[cur_index]){
            swap(v[par_index],v[cur_index]);
        }else{
            break;
        }
        cur_index = par_index;
    }
    for (int x:v)
    {
        cout<<x<<' ';
    }
    
    return 0;
}