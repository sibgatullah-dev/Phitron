#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World";
    cout<<*s.begin()<<endl;
    cout<<*(s.end()-1)<<endl;

    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        cout<<*it<<" ";
    }
cout<<endl;
    string a = "Bangladesh";\
    for (auto it = a.begin(); it < a.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    
    return 0;
}