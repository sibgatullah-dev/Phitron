#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World";
    string s2 = " Hi ";
    // s += s2; //can be used as s.append() or s.push_back()
    s.append(s2);
    cout<<s<<endl;
    
    s.push_back('A');// can push a single character in the last of a string
    cout<<s<<endl;

    s[1]= 'u';
    cout<<s<<endl;

    int a = s.size();
    s[a-1]= 'B';
    cout<<s<<endl;

    s.pop_back();
    cout<<s<<endl;
    return 0; 
}