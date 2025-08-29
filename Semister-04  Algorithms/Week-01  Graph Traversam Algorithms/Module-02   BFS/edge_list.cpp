#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;cin>>n>>e;
    vector<pair<int,int>>edgel; // taking a vactor which will take a pair in every index of the vector 

    while(e--){
        int a,b;cin>>a>>b;
        edgel.push_back({a,b});
    }

    for(pair<int,int> v:edgel){ // can use auto keyword
        cout<<v.first<<' '<<v.second<<endl;
    }
    return 0;
}