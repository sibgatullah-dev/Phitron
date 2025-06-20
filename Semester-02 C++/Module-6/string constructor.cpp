#include<bits/stdc++.h>
using namespace std;
int main (){
    //1
    string s("hello");
    cout<<s<<endl;
    //2
    string a("hello world",4);//starts from the 1st element stops at the 4th element 
    cout<<a<<endl;
    //3
    string b="Hello world";
    string c(b,4);//starts after 4the element 
    cout<<c<<endl;
    //4
    string e(5,'A');// a string of 5 element all are A
    cout<<e<<endl;
    return 0;
}