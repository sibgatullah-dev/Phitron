#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);// cin can't take input with space and getline takes enter as input which makes problem with testcase so we use cin.ignore() to make getline ignore the enter
    cout<<s<<endl;
    return 0;
}