#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,2,4,2,5,2};
    replace(v.begin(),v.end(),2,50);
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}