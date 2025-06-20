#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    cout<<s[0]<<endl;// element of the index
    cout<<s.at(0)<<endl;// element of the i-th inex
    cout<<s.back()<<endl;// last element of the string s[s.size()-1]
    cout<<s.front()<<endl;// first element of the string 
    return 0;
}