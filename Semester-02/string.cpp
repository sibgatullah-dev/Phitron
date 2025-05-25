#include<iostream>
using namespace std;
int main(){
    char x[100];
    char y[100];
    cin>>x;//cin can't take input with space
    cin.ignore();
    cin.getline(y,100);
    cout<<x<<endl;
    cout<<y<<endl;

    string s;
    cin>>s;
    cout<<s;
    return 0;
}