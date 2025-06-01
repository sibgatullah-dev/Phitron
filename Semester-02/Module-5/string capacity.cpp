#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Bangladesh";
    string x = "Bangladesh";

    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s.resize(4);
    cout<<s<<endl;
    x.resize(15,'x');
    cout<<x<<endl;

    string a = "Bangladesh";

    a.clear();
    cout<<a.size()<<endl;
    if(a.empty()){
        cout<<"Empty"<<endl;
    }else{
        cout<<"Not Empty"<<endl;
    }
    
    return 0;
}